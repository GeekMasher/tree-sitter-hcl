#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 688
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_numeric_lit_token1 = 7,
  aux_sym_numeric_lit_token2 = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_null_lit = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_COLON = 15,
  anon_sym_DOT = 16,
  aux_sym_legacy_index_token1 = 17,
  anon_sym_DOT_STAR = 18,
  anon_sym_LBRACK_STAR_RBRACK = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_if = 23,
  sym_ellipsis = 24,
  anon_sym_QMARK = 25,
  anon_sym_DASH = 26,
  anon_sym_BANG = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  anon_sym_PLUS = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_LT_LT = 40,
  anon_sym_LT_LT_DASH = 41,
  sym_strip_marker = 42,
  anon_sym_endfor = 43,
  anon_sym_else = 44,
  anon_sym_endif = 45,
  sym_comment = 46,
  sym__whitespace = 47,
  sym_quoted_template_start = 48,
  sym_quoted_template_end = 49,
  sym__template_literal_chunk = 50,
  sym_template_interpolation_start = 51,
  sym_template_interpolation_end = 52,
  sym_template_directive_start = 53,
  sym_template_directive_end = 54,
  sym_heredoc_identifier = 55,
  sym_config_file = 56,
  sym_body = 57,
  sym_attribute = 58,
  sym_block = 59,
  sym_block_start = 60,
  sym_block_end = 61,
  sym_expression = 62,
  sym__expr_term = 63,
  sym_literal_value = 64,
  sym_numeric_lit = 65,
  sym_bool_lit = 66,
  sym_string_lit = 67,
  sym_collection_value = 68,
  sym__comma = 69,
  sym_tuple = 70,
  sym_tuple_start = 71,
  sym_tuple_end = 72,
  sym__tuple_elems = 73,
  sym_object = 74,
  sym_object_start = 75,
  sym_object_end = 76,
  sym__object_elems = 77,
  sym_object_elem = 78,
  sym_index = 79,
  sym_new_index = 80,
  sym_legacy_index = 81,
  sym_get_attr = 82,
  sym_splat = 83,
  sym_attr_splat = 84,
  sym_full_splat = 85,
  sym_for_expr = 86,
  sym_for_tuple_expr = 87,
  sym_for_object_expr = 88,
  sym_for_intro = 89,
  sym_for_cond = 90,
  sym_variable_expr = 91,
  sym_function_call = 92,
  sym__function_call_start = 93,
  sym__function_call_end = 94,
  sym_function_arguments = 95,
  sym_conditional = 96,
  sym_operation = 97,
  sym_unary_operation = 98,
  sym_binary_operation = 99,
  sym_template_expr = 100,
  sym_quoted_template = 101,
  sym_heredoc_template = 102,
  sym_heredoc_start = 103,
  aux_sym__template = 104,
  sym_template_literal = 105,
  sym_template_interpolation = 106,
  sym_template_directive = 107,
  sym_template_for = 108,
  sym_template_for_start = 109,
  sym_template_for_end = 110,
  sym_template_if = 111,
  sym_template_if_intro = 112,
  sym_template_else_intro = 113,
  sym_template_if_end = 114,
  aux_sym_body_repeat1 = 115,
  aux_sym_block_repeat1 = 116,
  aux_sym__tuple_elems_repeat1 = 117,
  aux_sym__object_elems_repeat1 = 118,
  aux_sym_attr_splat_repeat1 = 119,
  aux_sym_template_literal_repeat1 = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [aux_sym_numeric_lit_token2] = "numeric_lit_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [aux_sym_legacy_index_token1] = "legacy_index_token1",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [sym_ellipsis] = "ellipsis",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_strip_marker] = "strip_marker",
  [anon_sym_endfor] = "endfor",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_quoted_template_start] = "quoted_template_start",
  [sym_quoted_template_end] = "quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym_template_interpolation_start] = "template_interpolation_start",
  [sym_template_interpolation_end] = "template_interpolation_end",
  [sym_template_directive_start] = "template_directive_start",
  [sym_template_directive_end] = "template_directive_end",
  [sym_heredoc_identifier] = "heredoc_identifier",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym_tuple_start] = "tuple_start",
  [sym_tuple_end] = "tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym_object_start] = "object_start",
  [sym_object_end] = "object_end",
  [sym__object_elems] = "_object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym_new_index] = "new_index",
  [sym_legacy_index] = "legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym__function_call_start] = "_function_call_start",
  [sym__function_call_end] = "_function_call_end",
  [sym_function_arguments] = "function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym_heredoc_start] = "heredoc_start",
  [aux_sym__template] = "_template",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [sym_template_for] = "template_for",
  [sym_template_for_start] = "template_for_start",
  [sym_template_for_end] = "template_for_end",
  [sym_template_if] = "template_if",
  [sym_template_if_intro] = "template_if_intro",
  [sym_template_else_intro] = "template_else_intro",
  [sym_template_if_end] = "template_if_end",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [aux_sym_numeric_lit_token2] = aux_sym_numeric_lit_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_legacy_index_token1] = aux_sym_legacy_index_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [sym_ellipsis] = sym_ellipsis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym_strip_marker] = sym_strip_marker,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_quoted_template_start] = sym_quoted_template_start,
  [sym_quoted_template_end] = sym_quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym_template_interpolation_start] = sym_template_interpolation_start,
  [sym_template_interpolation_end] = sym_template_interpolation_end,
  [sym_template_directive_start] = sym_template_directive_start,
  [sym_template_directive_end] = sym_template_directive_end,
  [sym_heredoc_identifier] = sym_heredoc_identifier,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym_tuple_start] = sym_tuple_start,
  [sym_tuple_end] = sym_tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym_object_start] = sym_object_start,
  [sym_object_end] = sym_object_end,
  [sym__object_elems] = sym__object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym_new_index] = sym_new_index,
  [sym_legacy_index] = sym_legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym__function_call_start] = sym__function_call_start,
  [sym__function_call_end] = sym__function_call_end,
  [sym_function_arguments] = sym_function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym_heredoc_start] = sym_heredoc_start,
  [aux_sym__template] = aux_sym__template,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [sym_template_for] = sym_template_for,
  [sym_template_for_start] = sym_template_for_start,
  [sym_template_for_end] = sym_template_for_end,
  [sym_template_if] = sym_template_if,
  [sym_template_if_intro] = sym_template_if_intro,
  [sym_template_else_intro] = sym_template_else_intro,
  [sym_template_if_end] = sym_template_if_end,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_legacy_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_strip_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_template_start] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_end] = {
    .visible = true,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_template_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_end] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_start] = {
    .visible = true,
    .named = true,
  },
  [sym_object_end] = {
    .visible = true,
    .named = true,
  },
  [sym__object_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_new_index] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_call_start] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call_end] = {
    .visible = false,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_start] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__template] = {
    .visible = false,
    .named = false,
  },
  [sym_template_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_else_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_decimal = 4,
  field_function = 5,
  field_heredocTemplate = 6,
  field_hexadecimal = 7,
  field_iter = 8,
  field_key = 9,
  field_quotedTemplate = 10,
  field_val = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_decimal] = "decimal",
  [field_function] = "function",
  [field_heredocTemplate] = "heredocTemplate",
  [field_hexadecimal] = "hexadecimal",
  [field_iter] = "iter",
  [field_key] = "key",
  [field_quotedTemplate] = "quotedTemplate",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 3},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_decimal, 0},
  [1] =
    {field_hexadecimal, 0},
  [2] =
    {field_quotedTemplate, 0},
  [3] =
    {field_heredocTemplate, 0},
  [4] =
    {field_function, 0},
  [5] =
    {field_key, 0},
    {field_val, 2},
  [7] =
    {field_alternative, 4},
    {field_body, 2},
    {field_condition, 0},
  [10] =
    {field_condition, 1},
  [11] =
    {field_iter, 3},
  [12] =
    {field_iter, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43360
    ? (c < 4096
      ? (c < 2654
        ? (c < 1808
          ? (c < 902
            ? (c < 216
              ? (c < 'u'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'o'
                    ? (c >= 'g' && c <= 'm')
                    : c <= 's')))
                : (c <= 'z' || (c < 186
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 186 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 750
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 890
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))))))
            : (c <= 902 || (c < 1488
              ? (c < 1015
                ? (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3200
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 2990
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? (c >= 3762 && c <= 3763)
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8064
        ? (c < 5998
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5112
              ? (c < 4824
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5870
                ? (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))))))))
          : (c <= 6000 || (c < 7168
            ? (c < 6528
              ? (c < 6314
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)))
                : (c <= 6314 || (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))
              : (c <= 6571 || (c < 6917
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))))))
            : (c <= 7203 || (c < 7424
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))))
              : (c <= 7615 || (c < 8016
                ? (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))))))
        : (c <= 8116 || (c < 11728
          ? (c < 8490
            ? (c < 8319
              ? (c < 8150
                ? (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))
              : (c <= 8319 || (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))))
            : (c <= 8505 || (c < 11565
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11688
                ? (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))))))
          : (c <= 11734 || (c < 42560
            ? (c < 12549
              ? (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12443
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))
              : (c <= 12591 || (c < 19968
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))))))
            : (c <= 42606 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))))
              : (c <= 43013 || (c < 43250
                ? (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))
                : (c <= 43255 || (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))))))))))))
    : (c <= 43388 || (c < 70751
      ? (c < 66967
        ? (c < 64323
          ? (c < 43785
            ? (c < 43646
              ? (c < 43520
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))
              : (c <= 43695 || (c < 43714
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))
                : (c <= 43714 || (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))))))
            : (c <= 43790 || (c < 63744
              ? (c < 43868
                ? (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))
              : (c <= 64109 || (c < 64287
                ? (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))
                : (c <= 64296 || (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))))))
          : (c <= 64324 || (c < 65664
            ? (c < 65474
              ? (c < 65136
                ? (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))
                : (c <= 65140 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))))
              : (c <= 65479 || (c < 65549
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))))
            : (c <= 65786 || (c < 66513
              ? (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))))
              : (c <= 66517 || (c < 66864
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))
        : (c <= 66977 || (c < 69296
          ? (c < 67872
            ? (c < 67592
              ? (c < 67424
                ? (c < 67003
                  ? (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)
                  : (c <= 67004 || (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)))
                : (c <= 67431 || (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))))
              : (c <= 67592 || (c < 67680
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c >= 67840 && c <= 67861)))))))
            : (c <= 67897 || (c < 68297
              ? (c < 68117
                ? (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68096 || (c >= 68112 && c <= 68115)))
                : (c <= 68119 || (c < 68224
                  ? (c < 68192
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68220)
                  : (c <= 68252 || (c >= 68288 && c <= 68295)))))
              : (c <= 68324 || (c < 68608
                ? (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c >= 68480 && c <= 68497)))
                : (c <= 68680 || (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68899 || (c >= 69248 && c <= 69289)))))))))
          : (c <= 69297 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69445 || (c >= 69488 && c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43396
    ? (c < 4176
      ? (c < 2703
        ? (c < 1969
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1646
              ? (c < 1369
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3585
            ? (c < 3389
              ? (c < 3296
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3461
                ? (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3632 || (c < 3773
              ? (c < 3718
                ? (c < 3713
                  ? (c < 3648
                    ? (c >= 3634 && c <= 3635)
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))))
              : (c <= 3773 || (c < 3904
                ? (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))
                : (c <= 3911 || (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))))))))))))
      : (c <= 4181 || (c < 8118
        ? (c < 6103
          ? (c < 4800
            ? (c < 4348
              ? (c < 4238
                ? (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)))
                : (c <= 4238 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))
              : (c <= 4680 || (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))))
            : (c <= 4800 || (c < 5743
              ? (c < 4888
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42623
            ? (c < 12593
              ? (c < 12353
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12443 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))
              : (c <= 12686 || (c < 42192
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))
            : (c <= 42653 || (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))))))
    : (c <= 43442 || (c < 70784
      ? (c < 66979
        ? (c < 64326
          ? (c < 43793
            ? (c < 43697
              ? (c < 43584
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))
              : (c <= 43697 || (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))
            : (c <= 43798 || (c < 64112
              ? (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))
              : (c <= 64217 || (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65136
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'p'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'n')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'f'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'd')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'm'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'k')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 's'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'q')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 't'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'r')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'v'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 't')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8421
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))))
            : (c <= 8432 || (c < 8526
              ? (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))))
              : (c <= 8526 || (c < 11565
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8421
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))))
            : (c <= 8432 || (c < 8526
              ? (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))))
              : (c <= 8526 || (c < 11565
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(43);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(106);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(59);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 3, .external_lex_state = 2},
  [8] = {.lex_state = 3, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 3, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 2},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 1, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 1, .external_lex_state = 2},
  [81] = {.lex_state = 1, .external_lex_state = 2},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 1, .external_lex_state = 2},
  [91] = {.lex_state = 1, .external_lex_state = 2},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 1, .external_lex_state = 2},
  [97] = {.lex_state = 1, .external_lex_state = 2},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 1, .external_lex_state = 2},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 1, .external_lex_state = 2},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 1, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 1, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 1, .external_lex_state = 2},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 1, .external_lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 1, .external_lex_state = 2},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 1, .external_lex_state = 2},
  [144] = {.lex_state = 1, .external_lex_state = 2},
  [145] = {.lex_state = 1, .external_lex_state = 2},
  [146] = {.lex_state = 1, .external_lex_state = 2},
  [147] = {.lex_state = 1, .external_lex_state = 2},
  [148] = {.lex_state = 1, .external_lex_state = 2},
  [149] = {.lex_state = 1, .external_lex_state = 2},
  [150] = {.lex_state = 1, .external_lex_state = 2},
  [151] = {.lex_state = 1, .external_lex_state = 2},
  [152] = {.lex_state = 1, .external_lex_state = 2},
  [153] = {.lex_state = 1, .external_lex_state = 2},
  [154] = {.lex_state = 1, .external_lex_state = 2},
  [155] = {.lex_state = 1, .external_lex_state = 2},
  [156] = {.lex_state = 1, .external_lex_state = 2},
  [157] = {.lex_state = 1, .external_lex_state = 2},
  [158] = {.lex_state = 1, .external_lex_state = 2},
  [159] = {.lex_state = 1, .external_lex_state = 2},
  [160] = {.lex_state = 1, .external_lex_state = 2},
  [161] = {.lex_state = 1, .external_lex_state = 2},
  [162] = {.lex_state = 1, .external_lex_state = 2},
  [163] = {.lex_state = 1, .external_lex_state = 2},
  [164] = {.lex_state = 1, .external_lex_state = 2},
  [165] = {.lex_state = 1, .external_lex_state = 2},
  [166] = {.lex_state = 1, .external_lex_state = 2},
  [167] = {.lex_state = 1, .external_lex_state = 2},
  [168] = {.lex_state = 1, .external_lex_state = 2},
  [169] = {.lex_state = 1, .external_lex_state = 2},
  [170] = {.lex_state = 1, .external_lex_state = 2},
  [171] = {.lex_state = 1, .external_lex_state = 2},
  [172] = {.lex_state = 1, .external_lex_state = 2},
  [173] = {.lex_state = 1, .external_lex_state = 2},
  [174] = {.lex_state = 1, .external_lex_state = 2},
  [175] = {.lex_state = 1, .external_lex_state = 2},
  [176] = {.lex_state = 1, .external_lex_state = 2},
  [177] = {.lex_state = 41},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 41},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 41},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 41},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41},
  [216] = {.lex_state = 41},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 41},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 41, .external_lex_state = 4},
  [222] = {.lex_state = 41, .external_lex_state = 4},
  [223] = {.lex_state = 41, .external_lex_state = 4},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 41, .external_lex_state = 4},
  [226] = {.lex_state = 41, .external_lex_state = 4},
  [227] = {.lex_state = 41, .external_lex_state = 5},
  [228] = {.lex_state = 41, .external_lex_state = 4},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 41, .external_lex_state = 5},
  [231] = {.lex_state = 41, .external_lex_state = 5},
  [232] = {.lex_state = 41, .external_lex_state = 5},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 41, .external_lex_state = 5},
  [235] = {.lex_state = 41, .external_lex_state = 5},
  [236] = {.lex_state = 41, .external_lex_state = 5},
  [237] = {.lex_state = 41, .external_lex_state = 5},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 41, .external_lex_state = 4},
  [240] = {.lex_state = 41, .external_lex_state = 4},
  [241] = {.lex_state = 41, .external_lex_state = 5},
  [242] = {.lex_state = 41, .external_lex_state = 4},
  [243] = {.lex_state = 41, .external_lex_state = 4},
  [244] = {.lex_state = 41, .external_lex_state = 4},
  [245] = {.lex_state = 41, .external_lex_state = 5},
  [246] = {.lex_state = 41, .external_lex_state = 5},
  [247] = {.lex_state = 41, .external_lex_state = 4},
  [248] = {.lex_state = 41, .external_lex_state = 5},
  [249] = {.lex_state = 41, .external_lex_state = 4},
  [250] = {.lex_state = 41, .external_lex_state = 5},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 41, .external_lex_state = 4},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 41, .external_lex_state = 5},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 41, .external_lex_state = 5},
  [289] = {.lex_state = 41, .external_lex_state = 4},
  [290] = {.lex_state = 41, .external_lex_state = 5},
  [291] = {.lex_state = 41, .external_lex_state = 5},
  [292] = {.lex_state = 41, .external_lex_state = 4},
  [293] = {.lex_state = 41, .external_lex_state = 4},
  [294] = {.lex_state = 41, .external_lex_state = 4},
  [295] = {.lex_state = 41, .external_lex_state = 4},
  [296] = {.lex_state = 41, .external_lex_state = 5},
  [297] = {.lex_state = 41, .external_lex_state = 5},
  [298] = {.lex_state = 41, .external_lex_state = 4},
  [299] = {.lex_state = 41, .external_lex_state = 5},
  [300] = {.lex_state = 41, .external_lex_state = 4},
  [301] = {.lex_state = 41, .external_lex_state = 4},
  [302] = {.lex_state = 41, .external_lex_state = 4},
  [303] = {.lex_state = 41, .external_lex_state = 5},
  [304] = {.lex_state = 41, .external_lex_state = 5},
  [305] = {.lex_state = 41, .external_lex_state = 5},
  [306] = {.lex_state = 41, .external_lex_state = 4},
  [307] = {.lex_state = 41, .external_lex_state = 5},
  [308] = {.lex_state = 41, .external_lex_state = 5},
  [309] = {.lex_state = 41, .external_lex_state = 5},
  [310] = {.lex_state = 41, .external_lex_state = 4},
  [311] = {.lex_state = 41, .external_lex_state = 5},
  [312] = {.lex_state = 41, .external_lex_state = 4},
  [313] = {.lex_state = 41, .external_lex_state = 4},
  [314] = {.lex_state = 41, .external_lex_state = 4},
  [315] = {.lex_state = 41, .external_lex_state = 5},
  [316] = {.lex_state = 41, .external_lex_state = 4},
  [317] = {.lex_state = 41, .external_lex_state = 4},
  [318] = {.lex_state = 41, .external_lex_state = 4},
  [319] = {.lex_state = 41, .external_lex_state = 4},
  [320] = {.lex_state = 41, .external_lex_state = 4},
  [321] = {.lex_state = 41, .external_lex_state = 5},
  [322] = {.lex_state = 41, .external_lex_state = 5},
  [323] = {.lex_state = 41, .external_lex_state = 4},
  [324] = {.lex_state = 41, .external_lex_state = 4},
  [325] = {.lex_state = 41, .external_lex_state = 4},
  [326] = {.lex_state = 41, .external_lex_state = 5},
  [327] = {.lex_state = 41, .external_lex_state = 4},
  [328] = {.lex_state = 41, .external_lex_state = 5},
  [329] = {.lex_state = 41, .external_lex_state = 5},
  [330] = {.lex_state = 41, .external_lex_state = 5},
  [331] = {.lex_state = 41, .external_lex_state = 4},
  [332] = {.lex_state = 41, .external_lex_state = 5},
  [333] = {.lex_state = 41, .external_lex_state = 4},
  [334] = {.lex_state = 41, .external_lex_state = 4},
  [335] = {.lex_state = 41, .external_lex_state = 4},
  [336] = {.lex_state = 41, .external_lex_state = 5},
  [337] = {.lex_state = 41, .external_lex_state = 5},
  [338] = {.lex_state = 41, .external_lex_state = 4},
  [339] = {.lex_state = 41, .external_lex_state = 4},
  [340] = {.lex_state = 41, .external_lex_state = 4},
  [341] = {.lex_state = 41, .external_lex_state = 4},
  [342] = {.lex_state = 41, .external_lex_state = 5},
  [343] = {.lex_state = 41, .external_lex_state = 5},
  [344] = {.lex_state = 41, .external_lex_state = 5},
  [345] = {.lex_state = 41, .external_lex_state = 4},
  [346] = {.lex_state = 41, .external_lex_state = 5},
  [347] = {.lex_state = 41, .external_lex_state = 5},
  [348] = {.lex_state = 41, .external_lex_state = 5},
  [349] = {.lex_state = 41, .external_lex_state = 4},
  [350] = {.lex_state = 41, .external_lex_state = 5},
  [351] = {.lex_state = 41, .external_lex_state = 5},
  [352] = {.lex_state = 41, .external_lex_state = 5},
  [353] = {.lex_state = 41, .external_lex_state = 4},
  [354] = {.lex_state = 41, .external_lex_state = 5},
  [355] = {.lex_state = 41, .external_lex_state = 5},
  [356] = {.lex_state = 1, .external_lex_state = 2},
  [357] = {.lex_state = 1, .external_lex_state = 2},
  [358] = {.lex_state = 1, .external_lex_state = 2},
  [359] = {.lex_state = 1, .external_lex_state = 2},
  [360] = {.lex_state = 3, .external_lex_state = 2},
  [361] = {.lex_state = 3, .external_lex_state = 2},
  [362] = {.lex_state = 1, .external_lex_state = 2},
  [363] = {.lex_state = 0, .external_lex_state = 6},
  [364] = {.lex_state = 1, .external_lex_state = 2},
  [365] = {.lex_state = 0, .external_lex_state = 6},
  [366] = {.lex_state = 0, .external_lex_state = 6},
  [367] = {.lex_state = 0, .external_lex_state = 6},
  [368] = {.lex_state = 0, .external_lex_state = 6},
  [369] = {.lex_state = 0, .external_lex_state = 6},
  [370] = {.lex_state = 1, .external_lex_state = 2},
  [371] = {.lex_state = 0, .external_lex_state = 6},
  [372] = {.lex_state = 0, .external_lex_state = 7},
  [373] = {.lex_state = 0, .external_lex_state = 7},
  [374] = {.lex_state = 0, .external_lex_state = 6},
  [375] = {.lex_state = 0, .external_lex_state = 7},
  [376] = {.lex_state = 0, .external_lex_state = 6},
  [377] = {.lex_state = 0, .external_lex_state = 8},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 8},
  [380] = {.lex_state = 0, .external_lex_state = 7},
  [381] = {.lex_state = 0, .external_lex_state = 8},
  [382] = {.lex_state = 0, .external_lex_state = 7},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 0, .external_lex_state = 8},
  [386] = {.lex_state = 0, .external_lex_state = 7},
  [387] = {.lex_state = 0, .external_lex_state = 7},
  [388] = {.lex_state = 0, .external_lex_state = 7},
  [389] = {.lex_state = 0, .external_lex_state = 8},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 0, .external_lex_state = 8},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 0, .external_lex_state = 7},
  [394] = {.lex_state = 0, .external_lex_state = 6},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 0, .external_lex_state = 6},
  [397] = {.lex_state = 0, .external_lex_state = 8},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 0, .external_lex_state = 6},
  [400] = {.lex_state = 0, .external_lex_state = 8},
  [401] = {.lex_state = 0, .external_lex_state = 7},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 0, .external_lex_state = 6},
  [404] = {.lex_state = 0, .external_lex_state = 7},
  [405] = {.lex_state = 0, .external_lex_state = 8},
  [406] = {.lex_state = 0, .external_lex_state = 6},
  [407] = {.lex_state = 0, .external_lex_state = 6},
  [408] = {.lex_state = 0, .external_lex_state = 6},
  [409] = {.lex_state = 0, .external_lex_state = 6},
  [410] = {.lex_state = 0, .external_lex_state = 8},
  [411] = {.lex_state = 0, .external_lex_state = 6},
  [412] = {.lex_state = 41},
  [413] = {.lex_state = 41},
  [414] = {.lex_state = 41},
  [415] = {.lex_state = 4, .external_lex_state = 2},
  [416] = {.lex_state = 41},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 41},
  [422] = {.lex_state = 41, .external_lex_state = 2},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 41},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0, .external_lex_state = 8},
  [428] = {.lex_state = 0, .external_lex_state = 7},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 41, .external_lex_state = 2},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0, .external_lex_state = 8},
  [443] = {.lex_state = 0, .external_lex_state = 7},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0, .external_lex_state = 8},
  [446] = {.lex_state = 0, .external_lex_state = 7},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0, .external_lex_state = 7},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0, .external_lex_state = 7},
  [451] = {.lex_state = 0, .external_lex_state = 8},
  [452] = {.lex_state = 0, .external_lex_state = 7},
  [453] = {.lex_state = 0, .external_lex_state = 8},
  [454] = {.lex_state = 0, .external_lex_state = 8},
  [455] = {.lex_state = 0, .external_lex_state = 7},
  [456] = {.lex_state = 0, .external_lex_state = 7},
  [457] = {.lex_state = 0, .external_lex_state = 7},
  [458] = {.lex_state = 0, .external_lex_state = 7},
  [459] = {.lex_state = 0, .external_lex_state = 8},
  [460] = {.lex_state = 0, .external_lex_state = 8},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0, .external_lex_state = 8},
  [463] = {.lex_state = 0, .external_lex_state = 7},
  [464] = {.lex_state = 0, .external_lex_state = 7},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0, .external_lex_state = 7},
  [467] = {.lex_state = 0, .external_lex_state = 7},
  [468] = {.lex_state = 0, .external_lex_state = 7},
  [469] = {.lex_state = 0, .external_lex_state = 9},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0, .external_lex_state = 8},
  [472] = {.lex_state = 0, .external_lex_state = 8},
  [473] = {.lex_state = 0, .external_lex_state = 7},
  [474] = {.lex_state = 0, .external_lex_state = 7},
  [475] = {.lex_state = 0, .external_lex_state = 7},
  [476] = {.lex_state = 0, .external_lex_state = 6},
  [477] = {.lex_state = 0, .external_lex_state = 8},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0, .external_lex_state = 8},
  [480] = {.lex_state = 0, .external_lex_state = 8},
  [481] = {.lex_state = 0, .external_lex_state = 7},
  [482] = {.lex_state = 0, .external_lex_state = 6},
  [483] = {.lex_state = 0, .external_lex_state = 8},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0, .external_lex_state = 8},
  [486] = {.lex_state = 0, .external_lex_state = 8},
  [487] = {.lex_state = 0, .external_lex_state = 8},
  [488] = {.lex_state = 0, .external_lex_state = 8},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 0, .external_lex_state = 8},
  [491] = {.lex_state = 0, .external_lex_state = 8},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0, .external_lex_state = 8},
  [496] = {.lex_state = 41},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0, .external_lex_state = 8},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0, .external_lex_state = 4},
  [505] = {.lex_state = 0, .external_lex_state = 6},
  [506] = {.lex_state = 0, .external_lex_state = 6},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0, .external_lex_state = 6},
  [509] = {.lex_state = 0, .external_lex_state = 6},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0, .external_lex_state = 6},
  [512] = {.lex_state = 3},
  [513] = {.lex_state = 0, .external_lex_state = 6},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0, .external_lex_state = 4},
  [516] = {.lex_state = 0, .external_lex_state = 4},
  [517] = {.lex_state = 0, .external_lex_state = 6},
  [518] = {.lex_state = 0, .external_lex_state = 6},
  [519] = {.lex_state = 41, .external_lex_state = 2},
  [520] = {.lex_state = 0, .external_lex_state = 6},
  [521] = {.lex_state = 0, .external_lex_state = 6},
  [522] = {.lex_state = 0, .external_lex_state = 9},
  [523] = {.lex_state = 0, .external_lex_state = 5},
  [524] = {.lex_state = 0, .external_lex_state = 6},
  [525] = {.lex_state = 0, .external_lex_state = 4},
  [526] = {.lex_state = 0, .external_lex_state = 6},
  [527] = {.lex_state = 0, .external_lex_state = 6},
  [528] = {.lex_state = 41},
  [529] = {.lex_state = 41},
  [530] = {.lex_state = 0, .external_lex_state = 6},
  [531] = {.lex_state = 0, .external_lex_state = 5},
  [532] = {.lex_state = 0, .external_lex_state = 6},
  [533] = {.lex_state = 41},
  [534] = {.lex_state = 41},
  [535] = {.lex_state = 0, .external_lex_state = 9},
  [536] = {.lex_state = 0, .external_lex_state = 4},
  [537] = {.lex_state = 0, .external_lex_state = 5},
  [538] = {.lex_state = 0, .external_lex_state = 6},
  [539] = {.lex_state = 0, .external_lex_state = 6},
  [540] = {.lex_state = 41, .external_lex_state = 2},
  [541] = {.lex_state = 0, .external_lex_state = 6},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0, .external_lex_state = 6},
  [544] = {.lex_state = 0, .external_lex_state = 6},
  [545] = {.lex_state = 0, .external_lex_state = 6},
  [546] = {.lex_state = 0, .external_lex_state = 5},
  [547] = {.lex_state = 0, .external_lex_state = 4},
  [548] = {.lex_state = 0, .external_lex_state = 6},
  [549] = {.lex_state = 0, .external_lex_state = 6},
  [550] = {.lex_state = 0, .external_lex_state = 5},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0, .external_lex_state = 4},
  [553] = {.lex_state = 0, .external_lex_state = 6},
  [554] = {.lex_state = 0, .external_lex_state = 4},
  [555] = {.lex_state = 0, .external_lex_state = 6},
  [556] = {.lex_state = 0, .external_lex_state = 6},
  [557] = {.lex_state = 0, .external_lex_state = 5},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0, .external_lex_state = 6},
  [560] = {.lex_state = 0, .external_lex_state = 5},
  [561] = {.lex_state = 0, .external_lex_state = 6},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0, .external_lex_state = 5},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0, .external_lex_state = 4},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 41},
  [572] = {.lex_state = 41},
  [573] = {.lex_state = 1},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 41},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0, .external_lex_state = 4},
  [583] = {.lex_state = 0, .external_lex_state = 4},
  [584] = {.lex_state = 1},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0, .external_lex_state = 4},
  [587] = {.lex_state = 0, .external_lex_state = 4},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0, .external_lex_state = 4},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 1},
  [593] = {.lex_state = 0, .external_lex_state = 4},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 41},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0, .external_lex_state = 4},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0, .external_lex_state = 4},
  [616] = {.lex_state = 0, .external_lex_state = 4},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0, .external_lex_state = 4},
  [623] = {.lex_state = 41},
  [624] = {.lex_state = 0, .external_lex_state = 4},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0, .external_lex_state = 4},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 41},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0, .external_lex_state = 4},
  [642] = {.lex_state = 41},
  [643] = {.lex_state = 0, .external_lex_state = 4},
  [644] = {.lex_state = 41},
  [645] = {.lex_state = 0, .external_lex_state = 4},
  [646] = {.lex_state = 0, .external_lex_state = 5},
  [647] = {.lex_state = 0, .external_lex_state = 4},
  [648] = {.lex_state = 0, .external_lex_state = 4},
  [649] = {.lex_state = 0, .external_lex_state = 4},
  [650] = {.lex_state = 0, .external_lex_state = 10},
  [651] = {.lex_state = 0, .external_lex_state = 5},
  [652] = {.lex_state = 0, .external_lex_state = 5},
  [653] = {.lex_state = 41},
  [654] = {.lex_state = 0, .external_lex_state = 5},
  [655] = {.lex_state = 0, .external_lex_state = 4},
  [656] = {.lex_state = 0, .external_lex_state = 4},
  [657] = {.lex_state = 0, .external_lex_state = 11},
  [658] = {.lex_state = 0, .external_lex_state = 11},
  [659] = {.lex_state = 41},
  [660] = {.lex_state = 0, .external_lex_state = 4},
  [661] = {.lex_state = 0, .external_lex_state = 4},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0, .external_lex_state = 4},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0, .external_lex_state = 4},
  [667] = {.lex_state = 0, .external_lex_state = 4},
  [668] = {.lex_state = 0, .external_lex_state = 11},
  [669] = {.lex_state = 0, .external_lex_state = 4},
  [670] = {.lex_state = 0, .external_lex_state = 4},
  [671] = {.lex_state = 0, .external_lex_state = 4},
  [672] = {.lex_state = 0, .external_lex_state = 4},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 0, .external_lex_state = 4},
  [675] = {.lex_state = 0, .external_lex_state = 11},
  [676] = {.lex_state = 0, .external_lex_state = 5},
  [677] = {.lex_state = 0, .external_lex_state = 11},
  [678] = {.lex_state = 41},
  [679] = {.lex_state = 0, .external_lex_state = 5},
  [680] = {.lex_state = 0, .external_lex_state = 11},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0, .external_lex_state = 4},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 41},
  [687] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token_quoted_template_start = 0,
  ts_external_token_quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token_template_interpolation_start = 3,
  ts_external_token_template_interpolation_end = 4,
  ts_external_token_template_directive_start = 5,
  ts_external_token_template_directive_end = 6,
  ts_external_token_heredoc_identifier = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_quoted_template_start] = sym_quoted_template_start,
  [ts_external_token_quoted_template_end] = sym_quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token_template_interpolation_start] = sym_template_interpolation_start,
  [ts_external_token_template_interpolation_end] = sym_template_interpolation_end,
  [ts_external_token_template_directive_start] = sym_template_directive_start,
  [ts_external_token_template_directive_end] = sym_template_directive_end,
  [ts_external_token_heredoc_identifier] = sym_heredoc_identifier,
};

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_interpolation_end] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_template_directive_end] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [2] = {
    [ts_external_token_quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token_template_directive_end] = true,
  },
  [5] = {
    [ts_external_token_template_interpolation_end] = true,
  },
  [6] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [7] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [8] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [9] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [10] = {
    [ts_external_token_quoted_template_end] = true,
  },
  [11] = {
    [ts_external_token_heredoc_identifier] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_legacy_index_token1] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [sym_strip_marker] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_quoted_template_start] = ACTIONS(1),
    [sym_quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym_template_interpolation_start] = ACTIONS(1),
    [sym_template_interpolation_end] = ACTIONS(1),
    [sym_template_directive_start] = ACTIONS(1),
    [sym_template_directive_end] = ACTIONS(1),
    [sym_heredoc_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(664),
    [sym_body] = STATE(685),
    [sym_attribute] = STATE(425),
    [sym_block] = STATE(425),
    [sym_object] = STATE(685),
    [sym_object_start] = STATE(15),
    [aux_sym_body_repeat1] = STATE(425),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(50), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(335), 1,
      sym_object_end,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(621), 1,
      sym__object_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [109] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(80), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(209), 1,
      sym_object_end,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(595), 1,
      sym__object_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [218] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(78), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(273), 1,
      sym_object_end,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(634), 1,
      sym__object_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [327] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(82), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(344), 1,
      sym_object_end,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(575), 1,
      sym__object_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [436] = 31,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(85), 1,
      sym_for_intro,
    STATE(153), 1,
      sym_object_end,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(597), 1,
      sym__object_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [545] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(58), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(355), 1,
      sym_tuple_end,
    STATE(413), 1,
      sym_conditional,
    STATE(439), 1,
      sym_expression,
    STATE(581), 1,
      sym__tuple_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [651] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(48), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(282), 1,
      sym_tuple_end,
    STATE(413), 1,
      sym_conditional,
    STATE(439), 1,
      sym_expression,
    STATE(591), 1,
      sym__tuple_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [757] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(27), 1,
      sym__comma,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(11), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [861] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(79), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(201), 1,
      sym_tuple_end,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(439), 1,
      sym_expression,
    STATE(566), 1,
      sym__tuple_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [967] = 29,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(71), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(77), 1,
      sym_null_lit,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LT_LT,
    ACTIONS(92), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(95), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(40), 1,
      sym__comma,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(11), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1071] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(46), 1,
      sym_for_intro,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(319), 1,
      sym_tuple_end,
    STATE(413), 1,
      sym_conditional,
    STATE(439), 1,
      sym_expression,
    STATE(612), 1,
      sym__tuple_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1177] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(25), 1,
      sym__comma,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(9), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1281] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(52), 1,
      sym_for_intro,
    STATE(166), 1,
      sym_tuple_end,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(439), 1,
      sym_expression,
    STATE(576), 1,
      sym__tuple_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1387] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(13), 1,
      sym_object_elem,
    STATE(188), 1,
      sym_quoted_template,
    STATE(209), 1,
      sym_object_end,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(595), 1,
      sym__object_elems,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1490] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(316), 1,
      sym__function_call_end,
    STATE(413), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(628), 1,
      sym_function_arguments,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1590] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(145), 1,
      sym__function_call_end,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(569), 1,
      sym_function_arguments,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1690] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(286), 1,
      sym__function_call_end,
    STATE(413), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(588), 1,
      sym_function_arguments,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1790] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(192), 1,
      sym__function_call_end,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(568), 1,
      sym_function_arguments,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1890] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(304), 1,
      sym__function_call_end,
    STATE(413), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(590), 1,
      sym_function_arguments,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1990] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      sym_strip_marker,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(134), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(523), 1,
      sym_expression,
    STATE(560), 1,
      sym_conditional,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2087] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(136), 1,
      sym_strip_marker,
    ACTIONS(138), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(531), 1,
      sym_expression,
    STATE(560), 1,
      sym_conditional,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2184] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(140), 1,
      sym_strip_marker,
    ACTIONS(142), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(546), 1,
      sym_expression,
    STATE(560), 1,
      sym_conditional,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2281] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(144), 1,
      sym_strip_marker,
    ACTIONS(146), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(550), 1,
      sym_expression,
    STATE(560), 1,
      sym_conditional,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2378] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(359), 1,
      sym_object_elem,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2475] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(148), 1,
      sym_strip_marker,
    ACTIONS(150), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(557), 1,
      sym_expression,
    STATE(560), 1,
      sym_conditional,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2572] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(359), 1,
      sym_object_elem,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2669] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(154), 1,
      sym_strip_marker,
    ACTIONS(156), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(560), 1,
      sym_conditional,
    STATE(563), 1,
      sym_expression,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2766] = 12,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(168), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(172), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(158), 12,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [2832] = 18,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_DOT_STAR,
    ACTIONS(184), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(186), 1,
      anon_sym_AMP_AMP,
    ACTIONS(188), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(168), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(172), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(174), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [2910] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(437), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3004] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(158), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3058] = 8,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(158), 18,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3116] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(437), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3210] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(196), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(194), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3264] = 11,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(168), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(158), 14,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3328] = 9,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(158), 16,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3388] = 13,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(186), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(168), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(172), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(176), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(171), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(158), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3456] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(437), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3550] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(359), 1,
      sym_object_elem,
    STATE(413), 1,
      sym_conditional,
    STATE(512), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3644] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(437), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3738] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(639), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3829] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(423), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3920] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(570), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4011] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(424), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4102] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(435), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4193] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(419), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4284] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(434), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4375] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(418), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4466] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(573), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4557] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(577), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4648] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(436), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4739] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(536), 1,
      sym_conditional,
    STATE(552), 1,
      sym_expression,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4830] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(574), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4921] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(417), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5012] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(412), 1,
      sym_expression,
    STATE(413), 1,
      sym_conditional,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5103] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(635), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5194] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(440), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5285] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(357), 1,
      sym_expression,
    STATE(358), 1,
      sym_conditional,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(30), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5376] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(565), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5467] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(603), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5558] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(611), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5649] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(601), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5740] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(610), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5831] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(504), 1,
      sym_expression,
    STATE(536), 1,
      sym_conditional,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5922] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(356), 1,
      sym_expression,
    STATE(358), 1,
      sym_conditional,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(30), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6013] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(431), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6104] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(537), 1,
      sym_expression,
    STATE(560), 1,
      sym_conditional,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6195] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(640), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6286] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(578), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6377] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(625), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6468] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(536), 1,
      sym_conditional,
    STATE(547), 1,
      sym_expression,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6559] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(608), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6650] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(516), 1,
      sym_expression,
    STATE(536), 1,
      sym_conditional,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6741] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(496), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6832] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(618), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6923] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(503), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7014] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(584), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7105] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(438), 1,
      sym_expression,
    STATE(441), 1,
      sym_conditional,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7196] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(594), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7287] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(614), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7378] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(600), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7469] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(525), 1,
      sym_expression,
    STATE(536), 1,
      sym_conditional,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7560] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(536), 1,
      sym_conditional,
    STATE(554), 1,
      sym_expression,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7651] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(592), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7742] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(437), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7833] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(515), 1,
      sym_expression,
    STATE(536), 1,
      sym_conditional,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(239), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7924] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(413), 1,
      sym_conditional,
    STATE(579), 1,
      sym_expression,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8015] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(93), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(250), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8069] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(256), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(254), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8123] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(93), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(258), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8177] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(89), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(264), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(262), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8231] = 7,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(172), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(93), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(266), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8285] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(35), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8370] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(130), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8455] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8540] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(222), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8625] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(228), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8710] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8795] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(225), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8880] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(240), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8965] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9050] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9135] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(33), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9220] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(37), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9305] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(36), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9390] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(230), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9475] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9560] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9645] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym_heredoc_template,
    STATE(331), 1,
      sym_quoted_template,
    STATE(680), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(333), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(334), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(338), 2,
      sym_tuple,
      sym_object,
    STATE(339), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9730] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(133), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9815] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(134), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9900] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(237), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9985] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(236), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10070] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(181), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10155] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(235), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10240] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(185), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10325] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10410] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(178), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10495] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(184), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10580] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10665] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(188), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym_heredoc_template,
    STATE(658), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(187), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(198), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(216), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(136), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10750] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10835] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(234), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10920] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(276), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_heredoc_template,
    STATE(675), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(272), 2,
      sym_tuple,
      sym_object,
    STATE(274), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(275), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(271), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11005] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(158), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_heredoc_template,
    STATE(677), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(151), 2,
      sym_tuple,
      sym_object,
    STATE(154), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(155), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(149), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(29), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11090] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(232), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11175] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(350), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_heredoc_template,
    STATE(657), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(337), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(342), 2,
      sym_tuple,
      sym_object,
    STATE(347), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(336), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(231), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11260] = 18,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      anon_sym_DOT_STAR,
    ACTIONS(282), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(296), 1,
      anon_sym_AMP_AMP,
    ACTIONS(298), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(294), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [11334] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(196), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11384] = 13,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(296), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(294), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(160), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [11448] = 12,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(294), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(160), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 14,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11510] = 11,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(160), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11570] = 9,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 18,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11626] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11676] = 8,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(210), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(213), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11730] = 5,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(300), 19,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11776] = 7,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(138), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(266), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11826] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(142), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(264), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(262), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11876] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(141), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(256), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(254), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11926] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(138), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(258), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11976] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(211), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(138), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(312), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12067] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(316), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12108] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(320), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12149] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(324), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12190] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(328), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12231] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(332), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12272] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(336), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12313] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(340), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12354] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(344), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12395] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(348), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12436] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(352), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12477] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(356), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12518] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(360), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12559] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(364), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12600] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(368), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12641] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(372), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12682] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(376), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12723] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(380), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12764] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(384), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12805] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(388), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12846] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(392), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12887] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(396), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12928] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(400), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12969] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(404), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13010] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(408), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13051] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(412), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13092] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(416), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13133] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(420), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13174] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(424), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13215] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(428), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13256] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(432), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13297] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(436), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13338] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(440), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(444), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13420] = 5,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13463] = 9,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13513] = 17,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 1,
      anon_sym_DOT_STAR,
    ACTIONS(462), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(464), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(468), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [13579] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13623] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(196), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13667] = 13,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(464), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(468), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [13725] = 12,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(464), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(468), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13781] = 11,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(464), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 11,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13835] = 8,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13883] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13957] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13994] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14031] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14105] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14179] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14216] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14253] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14290] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14327] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14364] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14401] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14438] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14475] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14512] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14549] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14586] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14623] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14660] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14697] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14734] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14771] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14808] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14845] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14882] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14919] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14956] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14993] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15030] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15067] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15104] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15141] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(260), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(224), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15185] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(196), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15227] = 13,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(486), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(484), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 6,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15283] = 8,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 13,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15329] = 7,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(268), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(224), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(266), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15373] = 9,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 11,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15421] = 11,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 9,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15473] = 17,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(498), 1,
      anon_sym_DOT_STAR,
    ACTIONS(500), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(506), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(502), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(504), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(508), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(512), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(174), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [15537] = 12,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(484), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 7,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15591] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(224), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15635] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(196), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15677] = 13,
    ACTIONS(506), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(502), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(504), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(508), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(512), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15733] = 12,
    ACTIONS(506), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(502), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(504), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(508), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(512), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15787] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15831] = 11,
    ACTIONS(506), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(502), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(504), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(508), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15883] = 9,
    ACTIONS(506), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(502), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(504), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 11,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15931] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15973] = 8,
    ACTIONS(506), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(504), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(288), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(308), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 13,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16019] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(264), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16063] = 17,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(486), 1,
      anon_sym_AMP_AMP,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(522), 1,
      anon_sym_DOT_STAR,
    ACTIONS(524), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(526), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(484), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(174), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [16127] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(325), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16169] = 7,
    ACTIONS(528), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(268), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(266), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16211] = 7,
    ACTIONS(534), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(268), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(266), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16253] = 7,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16295] = 7,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(260), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16337] = 7,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16379] = 7,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(260), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16421] = 7,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(244), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16463] = 7,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(246), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16505] = 7,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(324), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(264), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(243), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16547] = 7,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(351), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(264), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16589] = 5,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16626] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16657] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16719] = 5,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16754] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16785] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16816] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16847] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16878] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16909] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16940] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16971] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17002] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17033] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17064] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17095] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17157] = 5,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17223] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17285] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17316] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17347] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17409] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17440] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17502] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17533] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17595] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17626] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17657] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17719] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17750] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17779] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17808] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17837] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17866] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17895] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17924] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17982] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18011] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18040] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18069] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18127] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18156] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18185] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18243] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18272] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18301] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18330] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18359] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18388] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18417] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18446] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18475] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18504] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18533] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18562] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18591] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18620] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18649] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18678] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18707] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18736] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18765] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18794] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18852] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18881] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18910] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18968] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18997] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19055] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19171] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19200] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19229] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19258] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19287] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19316] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19345] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19374] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19403] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19432] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19519] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19548] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19577] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19606] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19635] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19664] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19693] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19722] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(546), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19748] = 4,
    ACTIONS(554), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(550), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19776] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(174), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19802] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(556), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(60), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19827] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(558), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19852] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(562), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(558), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19901] = 11,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(570), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(407), 1,
      sym_template_else_intro,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(485), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(367), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19940] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(574), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(572), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19963] = 11,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(576), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(406), 1,
      sym_template_else_intro,
    STATE(473), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(368), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20002] = 11,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(578), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(396), 1,
      sym_template_else_intro,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(521), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20041] = 11,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(570), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(403), 1,
      sym_template_else_intro,
    STATE(459), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20080] = 11,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(576), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(399), 1,
      sym_template_else_intro,
    STATE(448), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20119] = 11,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(578), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(390), 1,
      sym_template_else_intro,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(509), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(366), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(580), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [20181] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(584), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(543), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20217] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(592), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(373), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20253] = 10,
    ACTIONS(594), 1,
      sym__template_literal_chunk,
    ACTIONS(597), 1,
      sym_template_interpolation_start,
    ACTIONS(600), 1,
      sym_template_directive_start,
    ACTIONS(603), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(373), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20289] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(605), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(508), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(383), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20325] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(607), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(373), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20361] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(609), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(483), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20397] = 10,
    ACTIONS(600), 1,
      sym_template_directive_start,
    ACTIONS(603), 1,
      sym_quoted_template_end,
    ACTIONS(611), 1,
      sym__template_literal_chunk,
    ACTIONS(614), 1,
      sym_template_interpolation_start,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20433] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(617), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(462), 1,
      sym_template_for_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20469] = 10,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(619), 1,
      sym_quoted_template_end,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20505] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(625), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(375), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20541] = 11,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(627), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20579] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(629), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(372), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20615] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(605), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(520), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20651] = 10,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(631), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20687] = 11,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(633), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    STATE(498), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20725] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(635), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(373), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20761] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(637), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(386), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20797] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(639), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(401), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20833] = 10,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(641), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20869] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(584), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(521), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20905] = 11,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(643), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    STATE(495), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(389), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20943] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(645), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(464), 1,
      sym_template_for_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20979] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(647), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(404), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21015] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(649), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(446), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21051] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(649), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(458), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21087] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(584), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(532), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(371), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21123] = 11,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(651), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    STATE(488), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(410), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [21161] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(584), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(532), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21197] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(649), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(458), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(394), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21233] = 11,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(653), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    STATE(487), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(405), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [21271] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(655), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(373), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21307] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(617), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    STATE(489), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21343] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(609), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(472), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(376), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21379] = 10,
    ACTIONS(586), 1,
      sym__template_literal_chunk,
    ACTIONS(588), 1,
      sym_template_interpolation_start,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(657), 1,
      sym_heredoc_identifier,
    STATE(365), 1,
      sym_template_if_intro,
    STATE(409), 1,
      sym_template_for_start,
    STATE(443), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(481), 2,
      sym_template_for,
      sym_template_if,
    STATE(373), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21415] = 10,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(659), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21451] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(649), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(448), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21487] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(609), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(459), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(408), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21523] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(609), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(472), 1,
      sym_template_if_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21559] = 10,
    ACTIONS(566), 1,
      sym__template_literal_chunk,
    ACTIONS(568), 1,
      sym_template_interpolation_start,
    ACTIONS(645), 1,
      sym_template_directive_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(474), 1,
      sym_template_for_end,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(392), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21595] = 10,
    ACTIONS(590), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(661), 1,
      sym_quoted_template_end,
    STATE(363), 1,
      sym_template_if_intro,
    STATE(402), 1,
      sym_template_for_start,
    STATE(427), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(486), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21631] = 9,
    ACTIONS(600), 1,
      sym_template_directive_start,
    ACTIONS(663), 1,
      sym__template_literal_chunk,
    ACTIONS(666), 1,
      sym_template_interpolation_start,
    STATE(369), 1,
      sym_template_if_intro,
    STATE(374), 1,
      sym_template_for_start,
    STATE(482), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(505), 2,
      sym_template_for,
      sym_template_if,
    STATE(411), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21664] = 3,
    ACTIONS(548), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [21684] = 3,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [21704] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(534), 1,
      sym_block_end,
    STATE(638), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(425), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21726] = 7,
    ACTIONS(671), 1,
      anon_sym_EQ,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(677), 1,
      sym_quoted_template_start,
    STATE(416), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(422), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21750] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_block_end,
    STATE(637), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(425), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21772] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(681), 1,
      sym_ellipsis,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    STATE(322), 1,
      sym_object_end,
    STATE(620), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21795] = 7,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    ACTIONS(685), 1,
      sym_ellipsis,
    STATE(159), 1,
      sym_object_end,
    STATE(630), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21818] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    ACTIONS(687), 1,
      sym_ellipsis,
    STATE(262), 1,
      sym_object_end,
    STATE(598), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21841] = 7,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      sym_ellipsis,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    STATE(41), 1,
      sym__comma,
    STATE(432), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21864] = 4,
    ACTIONS(699), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(421), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21881] = 6,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    ACTIONS(677), 1,
      sym_quoted_template_start,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(414), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(433), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21902] = 7,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    ACTIONS(704), 1,
      sym_ellipsis,
    STATE(208), 1,
      sym_object_end,
    STATE(596), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21925] = 7,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    ACTIONS(706), 1,
      sym_ellipsis,
    STATE(293), 1,
      sym_object_end,
    STATE(564), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21948] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(708), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(421), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21965] = 5,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym__comma,
    STATE(426), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(710), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [21984] = 4,
    ACTIONS(717), 1,
      sym__template_literal_chunk,
    STATE(442), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(715), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22000] = 4,
    ACTIONS(719), 1,
      sym__template_literal_chunk,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22016] = 6,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(728), 1,
      sym_strip_marker,
    ACTIONS(730), 1,
      anon_sym_else,
    ACTIONS(732), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22036] = 6,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(730), 1,
      anon_sym_else,
    ACTIONS(734), 1,
      sym_strip_marker,
    ACTIONS(736), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [22068] = 6,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      sym_ellipsis,
    STATE(34), 1,
      sym__comma,
    STATE(426), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22088] = 5,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
    ACTIONS(744), 1,
      sym_identifier,
    ACTIONS(747), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(433), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [22106] = 6,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    STATE(258), 1,
      sym_tuple_end,
    STATE(613), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22126] = 6,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    STATE(298), 1,
      sym_tuple_end,
    STATE(626), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22146] = 6,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    STATE(168), 1,
      sym_tuple_end,
    STATE(619), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22166] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [22180] = 6,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    STATE(203), 1,
      sym_tuple_end,
    STATE(627), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22200] = 6,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      sym__comma,
    STATE(470), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22220] = 6,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      anon_sym_QMARK,
    STATE(307), 1,
      sym_tuple_end,
    STATE(629), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22240] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [22252] = 4,
    ACTIONS(754), 1,
      sym__template_literal_chunk,
    STATE(442), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22268] = 4,
    ACTIONS(757), 1,
      sym__template_literal_chunk,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(715), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22284] = 6,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(730), 1,
      anon_sym_else,
    ACTIONS(759), 1,
      sym_strip_marker,
    ACTIONS(761), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22304] = 3,
    ACTIONS(763), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22317] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(767), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22328] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    STATE(157), 1,
      sym_object_end,
    STATE(631), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22345] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(769), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22356] = 5,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    STATE(292), 1,
      sym_object_end,
    STATE(605), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22373] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(771), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22384] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(775), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22406] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(777), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22417] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(779), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22428] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(779), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22439] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(781), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22450] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(783), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22461] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(785), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22472] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(769), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22483] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(781), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22494] = 5,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(791), 1,
      anon_sym_else,
    ACTIONS(793), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22511] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(795), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22522] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(777), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22533] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(795), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22544] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    STATE(263), 1,
      sym_object_end,
    STATE(585), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22561] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(797), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22572] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(799), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(801), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22594] = 5,
    ACTIONS(803), 1,
      sym_quoted_template_end,
    ACTIONS(805), 1,
      sym__template_literal_chunk,
    STATE(522), 1,
      aux_sym_template_literal_repeat1,
    STATE(650), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22611] = 5,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym__comma,
    STATE(426), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22628] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(783), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22639] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(785), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(809), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22661] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22672] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22683] = 4,
    ACTIONS(813), 1,
      sym__template_literal_chunk,
    STATE(476), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22698] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(797), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22709] = 5,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(736), 1,
      anon_sym_endif,
    ACTIONS(816), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22726] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(799), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(801), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22748] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22759] = 4,
    ACTIONS(820), 1,
      sym__template_literal_chunk,
    STATE(476), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(715), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22774] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(767), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22785] = 5,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    STATE(190), 1,
      sym_object_end,
    STATE(609), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22802] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(809), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22813] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22824] = 3,
    ACTIONS(822), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22837] = 3,
    ACTIONS(824), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22850] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22861] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(771), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22872] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(775), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22883] = 5,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(761), 1,
      anon_sym_endif,
    ACTIONS(826), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22900] = 5,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(828), 1,
      sym_strip_marker,
    ACTIONS(830), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22917] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_if,
    STATE(326), 1,
      sym_object_end,
    STATE(617), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22934] = 3,
    ACTIONS(832), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22947] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22960] = 5,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(732), 1,
      anon_sym_endif,
    ACTIONS(836), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22977] = 3,
    ACTIONS(838), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(765), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22990] = 5,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(840), 1,
      sym_strip_marker,
    ACTIONS(842), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23007] = 5,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(791), 1,
      anon_sym_else,
    ACTIONS(844), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23024] = 5,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(846), 1,
      sym_strip_marker,
    ACTIONS(848), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23041] = 5,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(791), 1,
      anon_sym_else,
    ACTIONS(850), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23058] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(852), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [23070] = 4,
    ACTIONS(854), 1,
      anon_sym_QMARK,
    ACTIONS(856), 1,
      sym_strip_marker,
    ACTIONS(858), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23084] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23094] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23104] = 4,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(860), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23118] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23128] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(809), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23138] = 4,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(862), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23152] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(864), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23162] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(866), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [23174] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(868), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23184] = 4,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(870), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23198] = 4,
    ACTIONS(854), 1,
      anon_sym_QMARK,
    ACTIONS(872), 1,
      sym_strip_marker,
    ACTIONS(874), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23212] = 4,
    ACTIONS(854), 1,
      anon_sym_QMARK,
    ACTIONS(876), 1,
      sym_strip_marker,
    ACTIONS(878), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23226] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(880), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23236] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(777), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23246] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [23256] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(795), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23266] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(769), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23276] = 4,
    ACTIONS(715), 1,
      sym_quoted_template_end,
    ACTIONS(882), 1,
      sym__template_literal_chunk,
    STATE(535), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23290] = 4,
    ACTIONS(884), 1,
      anon_sym_QMARK,
    ACTIONS(886), 1,
      sym_strip_marker,
    ACTIONS(888), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23304] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(890), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23314] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23324] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(779), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23334] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(781), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23344] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(892), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23354] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(894), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23364] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(783), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23374] = 4,
    ACTIONS(130), 1,
      sym_strip_marker,
    ACTIONS(134), 1,
      sym_template_interpolation_end,
    ACTIONS(884), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23388] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(785), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23398] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(896), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23408] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(898), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23418] = 4,
    ACTIONS(722), 1,
      sym_quoted_template_end,
    ACTIONS(900), 1,
      sym__template_literal_chunk,
    STATE(535), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23432] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23442] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(797), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23462] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(799), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23472] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [23482] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(801), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23492] = 4,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(850), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23506] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(767), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23516] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(771), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23526] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(775), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23536] = 4,
    ACTIONS(884), 1,
      anon_sym_QMARK,
    ACTIONS(903), 1,
      sym_strip_marker,
    ACTIONS(905), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23550] = 4,
    ACTIONS(854), 1,
      anon_sym_QMARK,
    ACTIONS(907), 1,
      sym_strip_marker,
    ACTIONS(909), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23564] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23574] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(913), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23584] = 4,
    ACTIONS(140), 1,
      sym_strip_marker,
    ACTIONS(142), 1,
      sym_template_interpolation_end,
    ACTIONS(884), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23598] = 4,
    ACTIONS(724), 1,
      anon_sym_for,
    ACTIONS(726), 1,
      anon_sym_if,
    ACTIONS(915), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23612] = 4,
    ACTIONS(854), 1,
      anon_sym_QMARK,
    ACTIONS(917), 1,
      sym_strip_marker,
    ACTIONS(919), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23626] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(921), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23636] = 4,
    ACTIONS(854), 1,
      anon_sym_QMARK,
    ACTIONS(923), 1,
      sym_strip_marker,
    ACTIONS(925), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(927), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23660] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(929), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23670] = 4,
    ACTIONS(884), 1,
      anon_sym_QMARK,
    ACTIONS(931), 1,
      sym_strip_marker,
    ACTIONS(933), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23684] = 4,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(844), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23698] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(935), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23708] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23718] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(937), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23728] = 4,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(793), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23742] = 4,
    ACTIONS(148), 1,
      sym_strip_marker,
    ACTIONS(150), 1,
      sym_template_interpolation_end,
    ACTIONS(884), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23756] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23767] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23778] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23789] = 3,
    ACTIONS(941), 1,
      sym_strip_marker,
    ACTIONS(943), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23800] = 3,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23811] = 3,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23822] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23833] = 3,
    ACTIONS(951), 1,
      sym_identifier,
    ACTIONS(953), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23844] = 3,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(957), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23855] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(959), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23866] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23877] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23888] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23899] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(963), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23910] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(965), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23921] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23932] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(969), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [23941] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23952] = 3,
    ACTIONS(971), 1,
      sym_strip_marker,
    ACTIONS(973), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23963] = 3,
    ACTIONS(975), 1,
      sym_strip_marker,
    ACTIONS(977), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23974] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(979), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23985] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23996] = 3,
    ACTIONS(981), 1,
      sym_strip_marker,
    ACTIONS(983), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24007] = 3,
    ACTIONS(985), 1,
      sym_strip_marker,
    ACTIONS(987), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24018] = 3,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24029] = 3,
    ACTIONS(991), 1,
      sym_strip_marker,
    ACTIONS(993), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24040] = 3,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24051] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24062] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(997), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24073] = 3,
    ACTIONS(999), 1,
      sym_strip_marker,
    ACTIONS(1001), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24084] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1003), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24095] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24106] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24117] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24128] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24139] = 3,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24150] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1009), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24161] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24172] = 3,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(1015), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24183] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1017), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24194] = 3,
    ACTIONS(1019), 1,
      sym_strip_marker,
    ACTIONS(1021), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24205] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24216] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24227] = 3,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24238] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1031), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24249] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24260] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24271] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24282] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(310), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24293] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24304] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1037), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24315] = 3,
    ACTIONS(1039), 1,
      sym_strip_marker,
    ACTIONS(1041), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24326] = 3,
    ACTIONS(1043), 1,
      sym_strip_marker,
    ACTIONS(1045), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24337] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24348] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1047), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24359] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24370] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24381] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24392] = 3,
    ACTIONS(1049), 1,
      sym_strip_marker,
    ACTIONS(1051), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24403] = 3,
    ACTIONS(1053), 1,
      sym_identifier,
    ACTIONS(1055), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24414] = 3,
    ACTIONS(1057), 1,
      sym_strip_marker,
    ACTIONS(1059), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24425] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24436] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24447] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24458] = 3,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24469] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24480] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24491] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24502] = 3,
    ACTIONS(1065), 1,
      sym_strip_marker,
    ACTIONS(1067), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24513] = 3,
    ACTIONS(787), 1,
      anon_sym_for,
    ACTIONS(789), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24524] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24535] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24546] = 3,
    ACTIONS(1071), 1,
      sym_identifier,
    ACTIONS(1073), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24557] = 3,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(534), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24568] = 3,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(528), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24579] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24590] = 3,
    ACTIONS(695), 1,
      anon_sym_QMARK,
    ACTIONS(1077), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24601] = 3,
    ACTIONS(1079), 1,
      sym_strip_marker,
    ACTIONS(1081), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24612] = 2,
    ACTIONS(1083), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24620] = 2,
    ACTIONS(1059), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24628] = 2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24636] = 2,
    ACTIONS(1087), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24644] = 2,
    ACTIONS(888), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24652] = 2,
    ACTIONS(1089), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24660] = 2,
    ACTIONS(1091), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24668] = 2,
    ACTIONS(1051), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24676] = 2,
    ACTIONS(1093), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24684] = 2,
    ACTIONS(1095), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24692] = 2,
    ACTIONS(1097), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24700] = 2,
    ACTIONS(1099), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24708] = 2,
    ACTIONS(905), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24716] = 2,
    ACTIONS(1081), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24724] = 2,
    ACTIONS(919), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24732] = 2,
    ACTIONS(1101), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24740] = 2,
    ACTIONS(1103), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24748] = 2,
    ACTIONS(1105), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24756] = 2,
    ACTIONS(878), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24764] = 2,
    ACTIONS(1021), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24772] = 2,
    ACTIONS(1107), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24780] = 2,
    ACTIONS(925), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24788] = 2,
    ACTIONS(1109), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24796] = 2,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24804] = 2,
    ACTIONS(1111), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24812] = 2,
    ACTIONS(1113), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24820] = 2,
    ACTIONS(1115), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24828] = 2,
    ACTIONS(1117), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24836] = 2,
    ACTIONS(1119), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24844] = 2,
    ACTIONS(1121), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24852] = 2,
    ACTIONS(1123), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24860] = 2,
    ACTIONS(993), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24868] = 2,
    ACTIONS(987), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24876] = 2,
    ACTIONS(1125), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24884] = 2,
    ACTIONS(1127), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24892] = 2,
    ACTIONS(1129), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24900] = 2,
    ACTIONS(1131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24908] = 2,
    ACTIONS(933), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24916] = 2,
    ACTIONS(1133), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24924] = 2,
    ACTIONS(1135), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24932] = 2,
    ACTIONS(1137), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24940] = 2,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24948] = 2,
    ACTIONS(909), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24956] = 2,
    ACTIONS(1139), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24964] = 2,
    ACTIONS(1141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24972] = 2,
    ACTIONS(943), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 109,
  [SMALL_STATE(4)] = 218,
  [SMALL_STATE(5)] = 327,
  [SMALL_STATE(6)] = 436,
  [SMALL_STATE(7)] = 545,
  [SMALL_STATE(8)] = 651,
  [SMALL_STATE(9)] = 757,
  [SMALL_STATE(10)] = 861,
  [SMALL_STATE(11)] = 967,
  [SMALL_STATE(12)] = 1071,
  [SMALL_STATE(13)] = 1177,
  [SMALL_STATE(14)] = 1281,
  [SMALL_STATE(15)] = 1387,
  [SMALL_STATE(16)] = 1490,
  [SMALL_STATE(17)] = 1590,
  [SMALL_STATE(18)] = 1690,
  [SMALL_STATE(19)] = 1790,
  [SMALL_STATE(20)] = 1890,
  [SMALL_STATE(21)] = 1990,
  [SMALL_STATE(22)] = 2087,
  [SMALL_STATE(23)] = 2184,
  [SMALL_STATE(24)] = 2281,
  [SMALL_STATE(25)] = 2378,
  [SMALL_STATE(26)] = 2475,
  [SMALL_STATE(27)] = 2572,
  [SMALL_STATE(28)] = 2669,
  [SMALL_STATE(29)] = 2766,
  [SMALL_STATE(30)] = 2832,
  [SMALL_STATE(31)] = 2910,
  [SMALL_STATE(32)] = 3004,
  [SMALL_STATE(33)] = 3058,
  [SMALL_STATE(34)] = 3116,
  [SMALL_STATE(35)] = 3210,
  [SMALL_STATE(36)] = 3264,
  [SMALL_STATE(37)] = 3328,
  [SMALL_STATE(38)] = 3388,
  [SMALL_STATE(39)] = 3456,
  [SMALL_STATE(40)] = 3550,
  [SMALL_STATE(41)] = 3644,
  [SMALL_STATE(42)] = 3738,
  [SMALL_STATE(43)] = 3829,
  [SMALL_STATE(44)] = 3920,
  [SMALL_STATE(45)] = 4011,
  [SMALL_STATE(46)] = 4102,
  [SMALL_STATE(47)] = 4193,
  [SMALL_STATE(48)] = 4284,
  [SMALL_STATE(49)] = 4375,
  [SMALL_STATE(50)] = 4466,
  [SMALL_STATE(51)] = 4557,
  [SMALL_STATE(52)] = 4648,
  [SMALL_STATE(53)] = 4739,
  [SMALL_STATE(54)] = 4830,
  [SMALL_STATE(55)] = 4921,
  [SMALL_STATE(56)] = 5012,
  [SMALL_STATE(57)] = 5103,
  [SMALL_STATE(58)] = 5194,
  [SMALL_STATE(59)] = 5285,
  [SMALL_STATE(60)] = 5376,
  [SMALL_STATE(61)] = 5467,
  [SMALL_STATE(62)] = 5558,
  [SMALL_STATE(63)] = 5649,
  [SMALL_STATE(64)] = 5740,
  [SMALL_STATE(65)] = 5831,
  [SMALL_STATE(66)] = 5922,
  [SMALL_STATE(67)] = 6013,
  [SMALL_STATE(68)] = 6104,
  [SMALL_STATE(69)] = 6195,
  [SMALL_STATE(70)] = 6286,
  [SMALL_STATE(71)] = 6377,
  [SMALL_STATE(72)] = 6468,
  [SMALL_STATE(73)] = 6559,
  [SMALL_STATE(74)] = 6650,
  [SMALL_STATE(75)] = 6741,
  [SMALL_STATE(76)] = 6832,
  [SMALL_STATE(77)] = 6923,
  [SMALL_STATE(78)] = 7014,
  [SMALL_STATE(79)] = 7105,
  [SMALL_STATE(80)] = 7196,
  [SMALL_STATE(81)] = 7287,
  [SMALL_STATE(82)] = 7378,
  [SMALL_STATE(83)] = 7469,
  [SMALL_STATE(84)] = 7560,
  [SMALL_STATE(85)] = 7651,
  [SMALL_STATE(86)] = 7742,
  [SMALL_STATE(87)] = 7833,
  [SMALL_STATE(88)] = 7924,
  [SMALL_STATE(89)] = 8015,
  [SMALL_STATE(90)] = 8069,
  [SMALL_STATE(91)] = 8123,
  [SMALL_STATE(92)] = 8177,
  [SMALL_STATE(93)] = 8231,
  [SMALL_STATE(94)] = 8285,
  [SMALL_STATE(95)] = 8370,
  [SMALL_STATE(96)] = 8455,
  [SMALL_STATE(97)] = 8540,
  [SMALL_STATE(98)] = 8625,
  [SMALL_STATE(99)] = 8710,
  [SMALL_STATE(100)] = 8795,
  [SMALL_STATE(101)] = 8880,
  [SMALL_STATE(102)] = 8965,
  [SMALL_STATE(103)] = 9050,
  [SMALL_STATE(104)] = 9135,
  [SMALL_STATE(105)] = 9220,
  [SMALL_STATE(106)] = 9305,
  [SMALL_STATE(107)] = 9390,
  [SMALL_STATE(108)] = 9475,
  [SMALL_STATE(109)] = 9560,
  [SMALL_STATE(110)] = 9645,
  [SMALL_STATE(111)] = 9730,
  [SMALL_STATE(112)] = 9815,
  [SMALL_STATE(113)] = 9900,
  [SMALL_STATE(114)] = 9985,
  [SMALL_STATE(115)] = 10070,
  [SMALL_STATE(116)] = 10155,
  [SMALL_STATE(117)] = 10240,
  [SMALL_STATE(118)] = 10325,
  [SMALL_STATE(119)] = 10410,
  [SMALL_STATE(120)] = 10495,
  [SMALL_STATE(121)] = 10580,
  [SMALL_STATE(122)] = 10665,
  [SMALL_STATE(123)] = 10750,
  [SMALL_STATE(124)] = 10835,
  [SMALL_STATE(125)] = 10920,
  [SMALL_STATE(126)] = 11005,
  [SMALL_STATE(127)] = 11090,
  [SMALL_STATE(128)] = 11175,
  [SMALL_STATE(129)] = 11260,
  [SMALL_STATE(130)] = 11334,
  [SMALL_STATE(131)] = 11384,
  [SMALL_STATE(132)] = 11448,
  [SMALL_STATE(133)] = 11510,
  [SMALL_STATE(134)] = 11570,
  [SMALL_STATE(135)] = 11626,
  [SMALL_STATE(136)] = 11676,
  [SMALL_STATE(137)] = 11730,
  [SMALL_STATE(138)] = 11776,
  [SMALL_STATE(139)] = 11826,
  [SMALL_STATE(140)] = 11876,
  [SMALL_STATE(141)] = 11926,
  [SMALL_STATE(142)] = 11976,
  [SMALL_STATE(143)] = 12026,
  [SMALL_STATE(144)] = 12067,
  [SMALL_STATE(145)] = 12108,
  [SMALL_STATE(146)] = 12149,
  [SMALL_STATE(147)] = 12190,
  [SMALL_STATE(148)] = 12231,
  [SMALL_STATE(149)] = 12272,
  [SMALL_STATE(150)] = 12313,
  [SMALL_STATE(151)] = 12354,
  [SMALL_STATE(152)] = 12395,
  [SMALL_STATE(153)] = 12436,
  [SMALL_STATE(154)] = 12477,
  [SMALL_STATE(155)] = 12518,
  [SMALL_STATE(156)] = 12559,
  [SMALL_STATE(157)] = 12600,
  [SMALL_STATE(158)] = 12641,
  [SMALL_STATE(159)] = 12682,
  [SMALL_STATE(160)] = 12723,
  [SMALL_STATE(161)] = 12764,
  [SMALL_STATE(162)] = 12805,
  [SMALL_STATE(163)] = 12846,
  [SMALL_STATE(164)] = 12887,
  [SMALL_STATE(165)] = 12928,
  [SMALL_STATE(166)] = 12969,
  [SMALL_STATE(167)] = 13010,
  [SMALL_STATE(168)] = 13051,
  [SMALL_STATE(169)] = 13092,
  [SMALL_STATE(170)] = 13133,
  [SMALL_STATE(171)] = 13174,
  [SMALL_STATE(172)] = 13215,
  [SMALL_STATE(173)] = 13256,
  [SMALL_STATE(174)] = 13297,
  [SMALL_STATE(175)] = 13338,
  [SMALL_STATE(176)] = 13379,
  [SMALL_STATE(177)] = 13420,
  [SMALL_STATE(178)] = 13463,
  [SMALL_STATE(179)] = 13513,
  [SMALL_STATE(180)] = 13579,
  [SMALL_STATE(181)] = 13623,
  [SMALL_STATE(182)] = 13667,
  [SMALL_STATE(183)] = 13725,
  [SMALL_STATE(184)] = 13781,
  [SMALL_STATE(185)] = 13835,
  [SMALL_STATE(186)] = 13883,
  [SMALL_STATE(187)] = 13920,
  [SMALL_STATE(188)] = 13957,
  [SMALL_STATE(189)] = 13994,
  [SMALL_STATE(190)] = 14031,
  [SMALL_STATE(191)] = 14068,
  [SMALL_STATE(192)] = 14105,
  [SMALL_STATE(193)] = 14142,
  [SMALL_STATE(194)] = 14179,
  [SMALL_STATE(195)] = 14216,
  [SMALL_STATE(196)] = 14253,
  [SMALL_STATE(197)] = 14290,
  [SMALL_STATE(198)] = 14327,
  [SMALL_STATE(199)] = 14364,
  [SMALL_STATE(200)] = 14401,
  [SMALL_STATE(201)] = 14438,
  [SMALL_STATE(202)] = 14475,
  [SMALL_STATE(203)] = 14512,
  [SMALL_STATE(204)] = 14549,
  [SMALL_STATE(205)] = 14586,
  [SMALL_STATE(206)] = 14623,
  [SMALL_STATE(207)] = 14660,
  [SMALL_STATE(208)] = 14697,
  [SMALL_STATE(209)] = 14734,
  [SMALL_STATE(210)] = 14771,
  [SMALL_STATE(211)] = 14808,
  [SMALL_STATE(212)] = 14845,
  [SMALL_STATE(213)] = 14882,
  [SMALL_STATE(214)] = 14919,
  [SMALL_STATE(215)] = 14956,
  [SMALL_STATE(216)] = 14993,
  [SMALL_STATE(217)] = 15030,
  [SMALL_STATE(218)] = 15067,
  [SMALL_STATE(219)] = 15104,
  [SMALL_STATE(220)] = 15141,
  [SMALL_STATE(221)] = 15185,
  [SMALL_STATE(222)] = 15227,
  [SMALL_STATE(223)] = 15283,
  [SMALL_STATE(224)] = 15329,
  [SMALL_STATE(225)] = 15373,
  [SMALL_STATE(226)] = 15421,
  [SMALL_STATE(227)] = 15473,
  [SMALL_STATE(228)] = 15537,
  [SMALL_STATE(229)] = 15591,
  [SMALL_STATE(230)] = 15635,
  [SMALL_STATE(231)] = 15677,
  [SMALL_STATE(232)] = 15733,
  [SMALL_STATE(233)] = 15787,
  [SMALL_STATE(234)] = 15831,
  [SMALL_STATE(235)] = 15883,
  [SMALL_STATE(236)] = 15931,
  [SMALL_STATE(237)] = 15973,
  [SMALL_STATE(238)] = 16019,
  [SMALL_STATE(239)] = 16063,
  [SMALL_STATE(240)] = 16127,
  [SMALL_STATE(241)] = 16169,
  [SMALL_STATE(242)] = 16211,
  [SMALL_STATE(243)] = 16253,
  [SMALL_STATE(244)] = 16295,
  [SMALL_STATE(245)] = 16337,
  [SMALL_STATE(246)] = 16379,
  [SMALL_STATE(247)] = 16421,
  [SMALL_STATE(248)] = 16463,
  [SMALL_STATE(249)] = 16505,
  [SMALL_STATE(250)] = 16547,
  [SMALL_STATE(251)] = 16589,
  [SMALL_STATE(252)] = 16626,
  [SMALL_STATE(253)] = 16657,
  [SMALL_STATE(254)] = 16688,
  [SMALL_STATE(255)] = 16719,
  [SMALL_STATE(256)] = 16754,
  [SMALL_STATE(257)] = 16785,
  [SMALL_STATE(258)] = 16816,
  [SMALL_STATE(259)] = 16847,
  [SMALL_STATE(260)] = 16878,
  [SMALL_STATE(261)] = 16909,
  [SMALL_STATE(262)] = 16940,
  [SMALL_STATE(263)] = 16971,
  [SMALL_STATE(264)] = 17002,
  [SMALL_STATE(265)] = 17033,
  [SMALL_STATE(266)] = 17064,
  [SMALL_STATE(267)] = 17095,
  [SMALL_STATE(268)] = 17126,
  [SMALL_STATE(269)] = 17157,
  [SMALL_STATE(270)] = 17192,
  [SMALL_STATE(271)] = 17223,
  [SMALL_STATE(272)] = 17254,
  [SMALL_STATE(273)] = 17285,
  [SMALL_STATE(274)] = 17316,
  [SMALL_STATE(275)] = 17347,
  [SMALL_STATE(276)] = 17378,
  [SMALL_STATE(277)] = 17409,
  [SMALL_STATE(278)] = 17440,
  [SMALL_STATE(279)] = 17471,
  [SMALL_STATE(280)] = 17502,
  [SMALL_STATE(281)] = 17533,
  [SMALL_STATE(282)] = 17564,
  [SMALL_STATE(283)] = 17595,
  [SMALL_STATE(284)] = 17626,
  [SMALL_STATE(285)] = 17657,
  [SMALL_STATE(286)] = 17688,
  [SMALL_STATE(287)] = 17719,
  [SMALL_STATE(288)] = 17750,
  [SMALL_STATE(289)] = 17779,
  [SMALL_STATE(290)] = 17808,
  [SMALL_STATE(291)] = 17837,
  [SMALL_STATE(292)] = 17866,
  [SMALL_STATE(293)] = 17895,
  [SMALL_STATE(294)] = 17924,
  [SMALL_STATE(295)] = 17953,
  [SMALL_STATE(296)] = 17982,
  [SMALL_STATE(297)] = 18011,
  [SMALL_STATE(298)] = 18040,
  [SMALL_STATE(299)] = 18069,
  [SMALL_STATE(300)] = 18098,
  [SMALL_STATE(301)] = 18127,
  [SMALL_STATE(302)] = 18156,
  [SMALL_STATE(303)] = 18185,
  [SMALL_STATE(304)] = 18214,
  [SMALL_STATE(305)] = 18243,
  [SMALL_STATE(306)] = 18272,
  [SMALL_STATE(307)] = 18301,
  [SMALL_STATE(308)] = 18330,
  [SMALL_STATE(309)] = 18359,
  [SMALL_STATE(310)] = 18388,
  [SMALL_STATE(311)] = 18417,
  [SMALL_STATE(312)] = 18446,
  [SMALL_STATE(313)] = 18475,
  [SMALL_STATE(314)] = 18504,
  [SMALL_STATE(315)] = 18533,
  [SMALL_STATE(316)] = 18562,
  [SMALL_STATE(317)] = 18591,
  [SMALL_STATE(318)] = 18620,
  [SMALL_STATE(319)] = 18649,
  [SMALL_STATE(320)] = 18678,
  [SMALL_STATE(321)] = 18707,
  [SMALL_STATE(322)] = 18736,
  [SMALL_STATE(323)] = 18765,
  [SMALL_STATE(324)] = 18794,
  [SMALL_STATE(325)] = 18823,
  [SMALL_STATE(326)] = 18852,
  [SMALL_STATE(327)] = 18881,
  [SMALL_STATE(328)] = 18910,
  [SMALL_STATE(329)] = 18939,
  [SMALL_STATE(330)] = 18968,
  [SMALL_STATE(331)] = 18997,
  [SMALL_STATE(332)] = 19026,
  [SMALL_STATE(333)] = 19055,
  [SMALL_STATE(334)] = 19084,
  [SMALL_STATE(335)] = 19113,
  [SMALL_STATE(336)] = 19142,
  [SMALL_STATE(337)] = 19171,
  [SMALL_STATE(338)] = 19200,
  [SMALL_STATE(339)] = 19229,
  [SMALL_STATE(340)] = 19258,
  [SMALL_STATE(341)] = 19287,
  [SMALL_STATE(342)] = 19316,
  [SMALL_STATE(343)] = 19345,
  [SMALL_STATE(344)] = 19374,
  [SMALL_STATE(345)] = 19403,
  [SMALL_STATE(346)] = 19432,
  [SMALL_STATE(347)] = 19461,
  [SMALL_STATE(348)] = 19490,
  [SMALL_STATE(349)] = 19519,
  [SMALL_STATE(350)] = 19548,
  [SMALL_STATE(351)] = 19577,
  [SMALL_STATE(352)] = 19606,
  [SMALL_STATE(353)] = 19635,
  [SMALL_STATE(354)] = 19664,
  [SMALL_STATE(355)] = 19693,
  [SMALL_STATE(356)] = 19722,
  [SMALL_STATE(357)] = 19748,
  [SMALL_STATE(358)] = 19776,
  [SMALL_STATE(359)] = 19802,
  [SMALL_STATE(360)] = 19827,
  [SMALL_STATE(361)] = 19852,
  [SMALL_STATE(362)] = 19877,
  [SMALL_STATE(363)] = 19901,
  [SMALL_STATE(364)] = 19940,
  [SMALL_STATE(365)] = 19963,
  [SMALL_STATE(366)] = 20002,
  [SMALL_STATE(367)] = 20041,
  [SMALL_STATE(368)] = 20080,
  [SMALL_STATE(369)] = 20119,
  [SMALL_STATE(370)] = 20158,
  [SMALL_STATE(371)] = 20181,
  [SMALL_STATE(372)] = 20217,
  [SMALL_STATE(373)] = 20253,
  [SMALL_STATE(374)] = 20289,
  [SMALL_STATE(375)] = 20325,
  [SMALL_STATE(376)] = 20361,
  [SMALL_STATE(377)] = 20397,
  [SMALL_STATE(378)] = 20433,
  [SMALL_STATE(379)] = 20469,
  [SMALL_STATE(380)] = 20505,
  [SMALL_STATE(381)] = 20541,
  [SMALL_STATE(382)] = 20579,
  [SMALL_STATE(383)] = 20615,
  [SMALL_STATE(384)] = 20651,
  [SMALL_STATE(385)] = 20687,
  [SMALL_STATE(386)] = 20725,
  [SMALL_STATE(387)] = 20761,
  [SMALL_STATE(388)] = 20797,
  [SMALL_STATE(389)] = 20833,
  [SMALL_STATE(390)] = 20869,
  [SMALL_STATE(391)] = 20905,
  [SMALL_STATE(392)] = 20943,
  [SMALL_STATE(393)] = 20979,
  [SMALL_STATE(394)] = 21015,
  [SMALL_STATE(395)] = 21051,
  [SMALL_STATE(396)] = 21087,
  [SMALL_STATE(397)] = 21123,
  [SMALL_STATE(398)] = 21161,
  [SMALL_STATE(399)] = 21197,
  [SMALL_STATE(400)] = 21233,
  [SMALL_STATE(401)] = 21271,
  [SMALL_STATE(402)] = 21307,
  [SMALL_STATE(403)] = 21343,
  [SMALL_STATE(404)] = 21379,
  [SMALL_STATE(405)] = 21415,
  [SMALL_STATE(406)] = 21451,
  [SMALL_STATE(407)] = 21487,
  [SMALL_STATE(408)] = 21523,
  [SMALL_STATE(409)] = 21559,
  [SMALL_STATE(410)] = 21595,
  [SMALL_STATE(411)] = 21631,
  [SMALL_STATE(412)] = 21664,
  [SMALL_STATE(413)] = 21684,
  [SMALL_STATE(414)] = 21704,
  [SMALL_STATE(415)] = 21726,
  [SMALL_STATE(416)] = 21750,
  [SMALL_STATE(417)] = 21772,
  [SMALL_STATE(418)] = 21795,
  [SMALL_STATE(419)] = 21818,
  [SMALL_STATE(420)] = 21841,
  [SMALL_STATE(421)] = 21864,
  [SMALL_STATE(422)] = 21881,
  [SMALL_STATE(423)] = 21902,
  [SMALL_STATE(424)] = 21925,
  [SMALL_STATE(425)] = 21948,
  [SMALL_STATE(426)] = 21965,
  [SMALL_STATE(427)] = 21984,
  [SMALL_STATE(428)] = 22000,
  [SMALL_STATE(429)] = 22016,
  [SMALL_STATE(430)] = 22036,
  [SMALL_STATE(431)] = 22056,
  [SMALL_STATE(432)] = 22068,
  [SMALL_STATE(433)] = 22088,
  [SMALL_STATE(434)] = 22106,
  [SMALL_STATE(435)] = 22126,
  [SMALL_STATE(436)] = 22146,
  [SMALL_STATE(437)] = 22166,
  [SMALL_STATE(438)] = 22180,
  [SMALL_STATE(439)] = 22200,
  [SMALL_STATE(440)] = 22220,
  [SMALL_STATE(441)] = 22240,
  [SMALL_STATE(442)] = 22252,
  [SMALL_STATE(443)] = 22268,
  [SMALL_STATE(444)] = 22284,
  [SMALL_STATE(445)] = 22304,
  [SMALL_STATE(446)] = 22317,
  [SMALL_STATE(447)] = 22328,
  [SMALL_STATE(448)] = 22345,
  [SMALL_STATE(449)] = 22356,
  [SMALL_STATE(450)] = 22373,
  [SMALL_STATE(451)] = 22384,
  [SMALL_STATE(452)] = 22395,
  [SMALL_STATE(453)] = 22406,
  [SMALL_STATE(454)] = 22417,
  [SMALL_STATE(455)] = 22428,
  [SMALL_STATE(456)] = 22439,
  [SMALL_STATE(457)] = 22450,
  [SMALL_STATE(458)] = 22461,
  [SMALL_STATE(459)] = 22472,
  [SMALL_STATE(460)] = 22483,
  [SMALL_STATE(461)] = 22494,
  [SMALL_STATE(462)] = 22511,
  [SMALL_STATE(463)] = 22522,
  [SMALL_STATE(464)] = 22533,
  [SMALL_STATE(465)] = 22544,
  [SMALL_STATE(466)] = 22561,
  [SMALL_STATE(467)] = 22572,
  [SMALL_STATE(468)] = 22583,
  [SMALL_STATE(469)] = 22594,
  [SMALL_STATE(470)] = 22611,
  [SMALL_STATE(471)] = 22628,
  [SMALL_STATE(472)] = 22639,
  [SMALL_STATE(473)] = 22650,
  [SMALL_STATE(474)] = 22661,
  [SMALL_STATE(475)] = 22672,
  [SMALL_STATE(476)] = 22683,
  [SMALL_STATE(477)] = 22698,
  [SMALL_STATE(478)] = 22709,
  [SMALL_STATE(479)] = 22726,
  [SMALL_STATE(480)] = 22737,
  [SMALL_STATE(481)] = 22748,
  [SMALL_STATE(482)] = 22759,
  [SMALL_STATE(483)] = 22774,
  [SMALL_STATE(484)] = 22785,
  [SMALL_STATE(485)] = 22802,
  [SMALL_STATE(486)] = 22813,
  [SMALL_STATE(487)] = 22824,
  [SMALL_STATE(488)] = 22837,
  [SMALL_STATE(489)] = 22850,
  [SMALL_STATE(490)] = 22861,
  [SMALL_STATE(491)] = 22872,
  [SMALL_STATE(492)] = 22883,
  [SMALL_STATE(493)] = 22900,
  [SMALL_STATE(494)] = 22917,
  [SMALL_STATE(495)] = 22934,
  [SMALL_STATE(496)] = 22947,
  [SMALL_STATE(497)] = 22960,
  [SMALL_STATE(498)] = 22977,
  [SMALL_STATE(499)] = 22990,
  [SMALL_STATE(500)] = 23007,
  [SMALL_STATE(501)] = 23024,
  [SMALL_STATE(502)] = 23041,
  [SMALL_STATE(503)] = 23058,
  [SMALL_STATE(504)] = 23070,
  [SMALL_STATE(505)] = 23084,
  [SMALL_STATE(506)] = 23094,
  [SMALL_STATE(507)] = 23104,
  [SMALL_STATE(508)] = 23118,
  [SMALL_STATE(509)] = 23128,
  [SMALL_STATE(510)] = 23138,
  [SMALL_STATE(511)] = 23152,
  [SMALL_STATE(512)] = 23162,
  [SMALL_STATE(513)] = 23174,
  [SMALL_STATE(514)] = 23184,
  [SMALL_STATE(515)] = 23198,
  [SMALL_STATE(516)] = 23212,
  [SMALL_STATE(517)] = 23226,
  [SMALL_STATE(518)] = 23236,
  [SMALL_STATE(519)] = 23246,
  [SMALL_STATE(520)] = 23256,
  [SMALL_STATE(521)] = 23266,
  [SMALL_STATE(522)] = 23276,
  [SMALL_STATE(523)] = 23290,
  [SMALL_STATE(524)] = 23304,
  [SMALL_STATE(525)] = 23314,
  [SMALL_STATE(526)] = 23324,
  [SMALL_STATE(527)] = 23334,
  [SMALL_STATE(528)] = 23344,
  [SMALL_STATE(529)] = 23354,
  [SMALL_STATE(530)] = 23364,
  [SMALL_STATE(531)] = 23374,
  [SMALL_STATE(532)] = 23388,
  [SMALL_STATE(533)] = 23398,
  [SMALL_STATE(534)] = 23408,
  [SMALL_STATE(535)] = 23418,
  [SMALL_STATE(536)] = 23432,
  [SMALL_STATE(537)] = 23442,
  [SMALL_STATE(538)] = 23452,
  [SMALL_STATE(539)] = 23462,
  [SMALL_STATE(540)] = 23472,
  [SMALL_STATE(541)] = 23482,
  [SMALL_STATE(542)] = 23492,
  [SMALL_STATE(543)] = 23506,
  [SMALL_STATE(544)] = 23516,
  [SMALL_STATE(545)] = 23526,
  [SMALL_STATE(546)] = 23536,
  [SMALL_STATE(547)] = 23550,
  [SMALL_STATE(548)] = 23564,
  [SMALL_STATE(549)] = 23574,
  [SMALL_STATE(550)] = 23584,
  [SMALL_STATE(551)] = 23598,
  [SMALL_STATE(552)] = 23612,
  [SMALL_STATE(553)] = 23626,
  [SMALL_STATE(554)] = 23636,
  [SMALL_STATE(555)] = 23650,
  [SMALL_STATE(556)] = 23660,
  [SMALL_STATE(557)] = 23670,
  [SMALL_STATE(558)] = 23684,
  [SMALL_STATE(559)] = 23698,
  [SMALL_STATE(560)] = 23708,
  [SMALL_STATE(561)] = 23718,
  [SMALL_STATE(562)] = 23728,
  [SMALL_STATE(563)] = 23742,
  [SMALL_STATE(564)] = 23756,
  [SMALL_STATE(565)] = 23767,
  [SMALL_STATE(566)] = 23778,
  [SMALL_STATE(567)] = 23789,
  [SMALL_STATE(568)] = 23800,
  [SMALL_STATE(569)] = 23811,
  [SMALL_STATE(570)] = 23822,
  [SMALL_STATE(571)] = 23833,
  [SMALL_STATE(572)] = 23844,
  [SMALL_STATE(573)] = 23855,
  [SMALL_STATE(574)] = 23866,
  [SMALL_STATE(575)] = 23877,
  [SMALL_STATE(576)] = 23888,
  [SMALL_STATE(577)] = 23899,
  [SMALL_STATE(578)] = 23910,
  [SMALL_STATE(579)] = 23921,
  [SMALL_STATE(580)] = 23932,
  [SMALL_STATE(581)] = 23941,
  [SMALL_STATE(582)] = 23952,
  [SMALL_STATE(583)] = 23963,
  [SMALL_STATE(584)] = 23974,
  [SMALL_STATE(585)] = 23985,
  [SMALL_STATE(586)] = 23996,
  [SMALL_STATE(587)] = 24007,
  [SMALL_STATE(588)] = 24018,
  [SMALL_STATE(589)] = 24029,
  [SMALL_STATE(590)] = 24040,
  [SMALL_STATE(591)] = 24051,
  [SMALL_STATE(592)] = 24062,
  [SMALL_STATE(593)] = 24073,
  [SMALL_STATE(594)] = 24084,
  [SMALL_STATE(595)] = 24095,
  [SMALL_STATE(596)] = 24106,
  [SMALL_STATE(597)] = 24117,
  [SMALL_STATE(598)] = 24128,
  [SMALL_STATE(599)] = 24139,
  [SMALL_STATE(600)] = 24150,
  [SMALL_STATE(601)] = 24161,
  [SMALL_STATE(602)] = 24172,
  [SMALL_STATE(603)] = 24183,
  [SMALL_STATE(604)] = 24194,
  [SMALL_STATE(605)] = 24205,
  [SMALL_STATE(606)] = 24216,
  [SMALL_STATE(607)] = 24227,
  [SMALL_STATE(608)] = 24238,
  [SMALL_STATE(609)] = 24249,
  [SMALL_STATE(610)] = 24260,
  [SMALL_STATE(611)] = 24271,
  [SMALL_STATE(612)] = 24282,
  [SMALL_STATE(613)] = 24293,
  [SMALL_STATE(614)] = 24304,
  [SMALL_STATE(615)] = 24315,
  [SMALL_STATE(616)] = 24326,
  [SMALL_STATE(617)] = 24337,
  [SMALL_STATE(618)] = 24348,
  [SMALL_STATE(619)] = 24359,
  [SMALL_STATE(620)] = 24370,
  [SMALL_STATE(621)] = 24381,
  [SMALL_STATE(622)] = 24392,
  [SMALL_STATE(623)] = 24403,
  [SMALL_STATE(624)] = 24414,
  [SMALL_STATE(625)] = 24425,
  [SMALL_STATE(626)] = 24436,
  [SMALL_STATE(627)] = 24447,
  [SMALL_STATE(628)] = 24458,
  [SMALL_STATE(629)] = 24469,
  [SMALL_STATE(630)] = 24480,
  [SMALL_STATE(631)] = 24491,
  [SMALL_STATE(632)] = 24502,
  [SMALL_STATE(633)] = 24513,
  [SMALL_STATE(634)] = 24524,
  [SMALL_STATE(635)] = 24535,
  [SMALL_STATE(636)] = 24546,
  [SMALL_STATE(637)] = 24557,
  [SMALL_STATE(638)] = 24568,
  [SMALL_STATE(639)] = 24579,
  [SMALL_STATE(640)] = 24590,
  [SMALL_STATE(641)] = 24601,
  [SMALL_STATE(642)] = 24612,
  [SMALL_STATE(643)] = 24620,
  [SMALL_STATE(644)] = 24628,
  [SMALL_STATE(645)] = 24636,
  [SMALL_STATE(646)] = 24644,
  [SMALL_STATE(647)] = 24652,
  [SMALL_STATE(648)] = 24660,
  [SMALL_STATE(649)] = 24668,
  [SMALL_STATE(650)] = 24676,
  [SMALL_STATE(651)] = 24684,
  [SMALL_STATE(652)] = 24692,
  [SMALL_STATE(653)] = 24700,
  [SMALL_STATE(654)] = 24708,
  [SMALL_STATE(655)] = 24716,
  [SMALL_STATE(656)] = 24724,
  [SMALL_STATE(657)] = 24732,
  [SMALL_STATE(658)] = 24740,
  [SMALL_STATE(659)] = 24748,
  [SMALL_STATE(660)] = 24756,
  [SMALL_STATE(661)] = 24764,
  [SMALL_STATE(662)] = 24772,
  [SMALL_STATE(663)] = 24780,
  [SMALL_STATE(664)] = 24788,
  [SMALL_STATE(665)] = 24796,
  [SMALL_STATE(666)] = 24804,
  [SMALL_STATE(667)] = 24812,
  [SMALL_STATE(668)] = 24820,
  [SMALL_STATE(669)] = 24828,
  [SMALL_STATE(670)] = 24836,
  [SMALL_STATE(671)] = 24844,
  [SMALL_STATE(672)] = 24852,
  [SMALL_STATE(673)] = 24860,
  [SMALL_STATE(674)] = 24868,
  [SMALL_STATE(675)] = 24876,
  [SMALL_STATE(676)] = 24884,
  [SMALL_STATE(677)] = 24892,
  [SMALL_STATE(678)] = 24900,
  [SMALL_STATE(679)] = 24908,
  [SMALL_STATE(680)] = 24916,
  [SMALL_STATE(681)] = 24924,
  [SMALL_STATE(682)] = 24932,
  [SMALL_STATE(683)] = 24940,
  [SMALL_STATE(684)] = 24948,
  [SMALL_STATE(685)] = 24956,
  [SMALL_STATE(686)] = 24964,
  [SMALL_STATE(687)] = 24972,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(360),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(177),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(54),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(191),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(218),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(217),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(216),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(40),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(361),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(95),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(668),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(668),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(397),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(62),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(602),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(61),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(572),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1, .production_id = 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1, .production_id = 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1, .production_id = 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1, .production_id = 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(69),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(636),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(88),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(571),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(81),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(623),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 7),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, .production_id = 7),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 6),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 6),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5, .production_id = 9),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5, .production_id = 9),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7, .production_id = 10),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7, .production_id = 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(443),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(24),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(551),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(427),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(22),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(482),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(28),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(415),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(86),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(428),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(433),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(469),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(442),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 5),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 5),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 5),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(476),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2, .production_id = 8),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 10),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 9),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 8),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 7),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(535),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 5),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 6),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 6),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 5),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
