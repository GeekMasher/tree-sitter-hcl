module.exports = function make_grammar(dialect) {
  const
    PREC = {
      unary: 7,
      binary_mult: 6,
      binary_add: 5,
      binary_ord: 4,
      binary_comp: 3,
      binary_and: 2,
      binary_or: 1,

      // if possible prefer string_literals to quoted templates
      string_lit: 2,
      quoted_template: 1,
    }
  return grammar({
    name: dialect,

    externals: $ => [
      $._quoted_template_start,
      $._quoted_template_end,
      $._template_literal_chunk,
      $._template_interpolation_start,
      $._template_interpolation_end,
      $._template_directive_start,
      $._template_directive_end,
      $._heredoc_identifier,
    ],

    extras: $ => [
      $.comment,
      $._whitespace,
    ],

    supertypes: $ => [$._expr_term, $._expression, $._splat,
    $._literal_value, $._collection_value, $._operation, $._template_directive, $._template_expr],

    rules: {
      // also allow objects to handle .tfvars in json format
      config_file: $ => optional(choice($.body, $.object)),

      body: $ => repeat1(
        choice(
          $.attribute,
          $.block,
        ),
      ),

      attribute: $ => seq(
        field('key', $.identifier),
        '=',
        field('val', $._expression),
      ),

      block: $ => seq(
        field('type', $.identifier),
        repeat(field('label', choice($.string_lit, $.identifier))),
        $._block_start,
        optional(field('body', $.body)),
        $._block_end,
      ),

      _block_start: $ => '{',
      _block_end: $ => '}',

      identifier: $ => token(seq(
        choice(/\p{ID_Start}/, '_'),
        repeat(choice(/\p{ID_Continue}/, '-')),
      )),

      _expression: $ => prec.right(choice(
        $._expr_term,
        $.conditional,
      )),

      // operations are documented as expressions, but our real world samples
      // contain instances of operations without parentheses. think for example:
      // x = a == "" && b != ""
      _expr_term: $ => choice(
        $._literal_value,
        $._template_expr,
        $._collection_value,
        $.variable_expr,
        $.function_call,
        $.for_expr,
        $._operation,
        $.index_expr,
        $.get_attr_expr,
        $.splat_expr,
        $.parenthesized_expr
      ),

      parenthesized_expr: $ => seq('(', $._expression, ')'),

      index_expr: $ => seq(field('expr', $._expr_term), $._index),
      get_attr_expr: $ => seq(field('expr', $._expr_term), $._get_attr),
      splat_expr: $ => seq(field('expr', $._expr_term), field('splat', $._splat)),

      _literal_value: $ => choice(
        $.numeric_lit,
        $.bool_lit,
        $.null_lit,
        $.string_lit,
      ),

      numeric_lit: $ => choice(
        /[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?/,
        /0x[0-9a-zA-Z]+/
      ),

      bool_lit: $ => choice('true', 'false'),

      null_lit: $ => 'null',

      string_lit: $ => prec(PREC.string_lit, seq(
        $._quoted_template_start,
        optional($.template_literal),
        $._quoted_template_end,
      )),


      _collection_value: $ => choice(
        $.tuple,
        $.object,
      ),

      _comma: $ => ',',

      tuple: $ => seq(
        $._tuple_start,
        optional($._tuple_elems),
        $._tuple_end,
      ),

      _tuple_start: $ => '[',
      _tuple_end: $ => ']',

      _tuple_elems: $ => seq(
        field('element', $._expression),
        repeat(seq(
          $._comma,
          field('element', $._expression),
        )),
        optional($._comma),
      ),

      object: $ => seq(
        $._object_start,
        optional($._object_elems),
        $._object_end,
      ),

      _object_start: $ => '{',
      _object_end: $ => '}',

      _object_elems: $ => seq(
        field('element', $.object_elem),
        repeat(seq(
          optional($._comma),
          field('element', $.object_elem)
        )),
        optional($._comma),
      ),

      object_elem: $ => seq(
        field("key", $._expression),
        choice('=', ':'),
        field("val", $._expression),
      ),

      _index: $ => choice($._new_index, $._legacy_index),
      index: $ => $._index,

      _new_index: $ => seq('[', field('index', $._expression), ']'),
      _legacy_index: $ => seq('.', field('index', /[0-9]+/)),

      _get_attr: $ => seq('.', field('key', $.identifier)),
      get_attr: $ => $._get_attr,

      _splat: $ => choice($.attr_splat, $.full_splat),

      attr_splat: $ => prec.right(seq(
        '.*',
        repeat(field('element', $.get_attr)),
      )),

      full_splat: $ => prec.right(seq(
        '[*]',
        repeat(field('element', choice($.get_attr, $.index))),
      )),

      for_expr: $ => choice($.for_tuple_expr, $.for_object_expr),

      for_tuple_expr: $ => seq(
        $._tuple_start,
        $._for_intro,
        field('expr', $._expression),
        optional($._for_cond),
        $._tuple_end,
      ),

      for_object_expr: $ => seq(
        $._object_start,
        $._for_intro,
        field('key', $._expression),
        '=>',
        field('val', $._expression),
        optional($.ellipsis),
        optional($._for_cond),
        $._object_end,
      ),

      _for_intro: $ => seq(
        'for',
        field('target', $.identifier),
        optional(seq(',', field('target', $.identifier))),
        'in',
        field('iter', $._expression),
        ':',
      ),

      _for_cond: $ => seq(
        'if',
        field('condition', $._expression),
      ),

      variable_expr: $ => prec.right(field('name', $.identifier)),

      function_call: $ => seq(
        field('function', $.identifier),
        $._function_call_start,
        optional($._function_arguments),
        $._function_call_end,
      ),

      _function_call_start: $ => '(',
      _function_call_end: $ => ')',

      _function_arguments: $ => prec.right(seq(
        field('argument', $._expression),
        repeat(seq($._comma, field('argument', $._expression,))),
        optional(choice($._comma, $.ellipsis)),
      )),

      ellipsis: $ => token('...'),

      conditional: $ => prec.left(seq(
        field('condition', $._expression),
        '?',
        field('body', $._expression),
        ':',
        field('alternative', $._expression),
      )),

      _operation: $ => choice($.unary_operation, $.binary_operation),

      unary_operation: $ => prec.left(PREC.unary, seq(field('operator', choice('-', '!')), field('operand', $._expr_term))),

      binary_operation: $ => {
        const table = [
          [PREC.binary_mult, choice('*', '/', '%')],
          [PREC.binary_add, choice('+', '-')],
          [PREC.binary_ord, choice('>', '>=', '<', '<=')],
          [PREC.binary_comp, choice('==', '!=')],
          [PREC.binary_and, choice('&&')],
          [PREC.binary_or, choice('||')],
        ];

        return choice(...table.map(([precedence, operator]) =>
          prec.left(precedence, seq(field('left', $._expr_term), field('operator', operator), field('right', $._expr_term)),
          ))
        );
      },

      _template_expr: $ => choice(
        $.quoted_template,
        $.heredoc_template,
      ),

      quoted_template: $ => prec(PREC.quoted_template, seq(
        $._quoted_template_start,
        optional($._template),
        $._quoted_template_end,
      )),

      heredoc_template: $ => seq(
        field('start', $._heredoc_start),
        $._heredoc_identifier,
        $._template,
        $._heredoc_identifier,
      ),

      _heredoc_start: $ => choice('<<', '<<-'),

      _strip_marker: $ => '~',

      _template: $ => repeat1(choice(
        $.template_interpolation,
        $._template_directive,
        $.template_literal,
      )),

      template_literal: $ => prec.right(repeat1(
        $._template_literal_chunk,
      )),

      template_interpolation: $ => seq(
        $._template_interpolation_start,
        optional($._strip_marker),
        optional(field('expr', $._expression)),
        optional($._strip_marker),
        $._template_interpolation_end,
      ),

      _template_directive: $ => choice(
        $.template_for,
        $.template_if,
      ),

      template_for: $ => seq(
        $._template_for_start,
        optional(field('body', $._template)),
        $._template_for_end,
      ),

      _template_for_start: $ => seq(
        $._template_directive_start,
        optional($._strip_marker),
        "for",
        field('target', $.identifier),
        optional(seq(",", field('target', $.identifier))),
        "in",
        field('iter', $._expression),
        optional($._strip_marker),
        $._template_directive_end
      ),

      _template_for_end: $ => seq(
        $._template_directive_start,
        optional($._strip_marker),
        "endfor",
        optional($._strip_marker),
        $._template_directive_end
      ),

      template_if: $ => seq(
        $._template_if_intro,
        optional(field('body', $._template)),
        optional(seq($._template_else_intro, optional(field('alternative', $._template)))),
        $._template_if_end,
      ),

      _template_if_intro: $ => seq(
        $._template_directive_start,
        optional($._strip_marker),
        "if",
        field('condition', $._expression),
        optional($._strip_marker),
        $._template_directive_end
      ),

      _template_else_intro: $ => seq(
        $._template_directive_start,
        optional($._strip_marker),
        "else",
        optional($._strip_marker),
        $._template_directive_end
      ),

      _template_if_end: $ => seq(
        $._template_directive_start,
        optional($._strip_marker),
        "endif",
        optional($._strip_marker),
        $._template_directive_end
      ),

      // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      comment: $ => token(choice(
        seq('#', /.*/),
        seq('//', /.*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        )
      )),

      _whitespace: $ => token(/\s/),
    }
  });
}
