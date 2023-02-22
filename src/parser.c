#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 700
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 50

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
  aux_sym__legacy_index_token1 = 17,
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
  sym__strip_marker = 42,
  anon_sym_endfor = 43,
  anon_sym_else = 44,
  anon_sym_endif = 45,
  sym_comment = 46,
  sym__whitespace = 47,
  sym__quoted_template_start = 48,
  sym__quoted_template_end = 49,
  sym__template_literal_chunk = 50,
  sym__template_interpolation_start = 51,
  sym__template_interpolation_end = 52,
  sym__template_directive_start = 53,
  sym__template_directive_end = 54,
  sym__heredoc_identifier = 55,
  sym_config_file = 56,
  sym_body = 57,
  sym_attribute = 58,
  sym_block = 59,
  sym__block_start = 60,
  sym__block_end = 61,
  sym_expression = 62,
  sym__expr_term = 63,
  sym_literal_value = 64,
  sym_numeric_lit = 65,
  sym_bool_lit = 66,
  sym_string_lit = 67,
  sym_collection_value = 68,
  sym__comma = 69,
  sym_tuple = 70,
  sym__tuple_start = 71,
  sym__tuple_end = 72,
  sym__tuple_elems = 73,
  sym_object = 74,
  sym__object_start = 75,
  sym__object_end = 76,
  sym__object_elems = 77,
  sym_object_elem = 78,
  sym_index = 79,
  sym__new_index = 80,
  sym__legacy_index = 81,
  sym_get_attr = 82,
  sym_splat = 83,
  sym_attr_splat = 84,
  sym_full_splat = 85,
  sym_for_expr = 86,
  sym_for_tuple_expr = 87,
  sym_for_object_expr = 88,
  sym__for_intro = 89,
  sym__for_cond = 90,
  sym_variable_expr = 91,
  sym_function_call = 92,
  sym__function_call_start = 93,
  sym__function_call_end = 94,
  sym__function_arguments = 95,
  sym_conditional = 96,
  sym_operation = 97,
  sym_unary_operation = 98,
  sym_binary_operation = 99,
  sym_template_expr = 100,
  sym_quoted_template = 101,
  sym_heredoc_template = 102,
  sym__heredoc_start = 103,
  aux_sym__template = 104,
  sym_template_literal = 105,
  sym_template_interpolation = 106,
  sym_template_directive = 107,
  sym_template_for = 108,
  sym__template_for_start = 109,
  sym__template_for_end = 110,
  sym_template_if = 111,
  sym__template_if_intro = 112,
  sym__template_else_intro = 113,
  sym__template_if_end = 114,
  aux_sym_body_repeat1 = 115,
  aux_sym_block_repeat1 = 116,
  aux_sym__tuple_elems_repeat1 = 117,
  aux_sym__object_elems_repeat1 = 118,
  aux_sym_attr_splat_repeat1 = 119,
  aux_sym__function_arguments_repeat1 = 120,
  aux_sym_template_literal_repeat1 = 121,
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
  [aux_sym__legacy_index_token1] = "_legacy_index_token1",
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
  [sym__strip_marker] = "_strip_marker",
  [anon_sym_endfor] = "endfor",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym__quoted_template_start] = "_quoted_template_start",
  [sym__quoted_template_end] = "_quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym__template_interpolation_start] = "_template_interpolation_start",
  [sym__template_interpolation_end] = "_template_interpolation_end",
  [sym__template_directive_start] = "_template_directive_start",
  [sym__template_directive_end] = "_template_directive_end",
  [sym__heredoc_identifier] = "_heredoc_identifier",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym__tuple_start] = "_tuple_start",
  [sym__tuple_end] = "_tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym__object_start] = "_object_start",
  [sym__object_end] = "_object_end",
  [sym__object_elems] = "_object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym__new_index] = "_new_index",
  [sym__legacy_index] = "_legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym__for_intro] = "_for_intro",
  [sym__for_cond] = "_for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym__function_call_start] = "_function_call_start",
  [sym__function_call_end] = "_function_call_end",
  [sym__function_arguments] = "_function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym__heredoc_start] = "_heredoc_start",
  [aux_sym__template] = "_template",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [sym_template_for] = "template_for",
  [sym__template_for_start] = "_template_for_start",
  [sym__template_for_end] = "_template_for_end",
  [sym_template_if] = "template_if",
  [sym__template_if_intro] = "_template_if_intro",
  [sym__template_else_intro] = "_template_else_intro",
  [sym__template_if_end] = "_template_if_end",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym__function_arguments_repeat1] = "_function_arguments_repeat1",
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
  [aux_sym__legacy_index_token1] = aux_sym__legacy_index_token1,
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
  [sym__strip_marker] = sym__strip_marker,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym__quoted_template_start] = sym__quoted_template_start,
  [sym__quoted_template_end] = sym__quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym__template_interpolation_start] = sym__template_interpolation_start,
  [sym__template_interpolation_end] = sym__template_interpolation_end,
  [sym__template_directive_start] = sym__template_directive_start,
  [sym__template_directive_end] = sym__template_directive_end,
  [sym__heredoc_identifier] = sym__heredoc_identifier,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym__tuple_start] = sym__tuple_start,
  [sym__tuple_end] = sym__tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym__object_start] = sym__object_start,
  [sym__object_end] = sym__object_end,
  [sym__object_elems] = sym__object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym__new_index] = sym__new_index,
  [sym__legacy_index] = sym__legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym__for_intro] = sym__for_intro,
  [sym__for_cond] = sym__for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym__function_call_start] = sym__function_call_start,
  [sym__function_call_end] = sym__function_call_end,
  [sym__function_arguments] = sym__function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym__heredoc_start] = sym__heredoc_start,
  [aux_sym__template] = aux_sym__template,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [sym_template_for] = sym_template_for,
  [sym__template_for_start] = sym__template_for_start,
  [sym__template_for_end] = sym__template_for_end,
  [sym_template_if] = sym_template_if,
  [sym__template_if_intro] = sym__template_if_intro,
  [sym__template_else_intro] = sym__template_else_intro,
  [sym__template_if_end] = sym__template_if_end,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym__function_arguments_repeat1] = aux_sym__function_arguments_repeat1,
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
  [aux_sym__legacy_index_token1] = {
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
  [sym__strip_marker] = {
    .visible = false,
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
  [sym__quoted_template_start] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_template_end] = {
    .visible = false,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym__template_interpolation_start] = {
    .visible = false,
    .named = true,
  },
  [sym__template_interpolation_end] = {
    .visible = false,
    .named = true,
  },
  [sym__template_directive_start] = {
    .visible = false,
    .named = true,
  },
  [sym__template_directive_end] = {
    .visible = false,
    .named = true,
  },
  [sym__heredoc_identifier] = {
    .visible = false,
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
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
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
  [sym__tuple_start] = {
    .visible = false,
    .named = true,
  },
  [sym__tuple_end] = {
    .visible = false,
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
  [sym__object_start] = {
    .visible = false,
    .named = true,
  },
  [sym__object_end] = {
    .visible = false,
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
  [sym__new_index] = {
    .visible = false,
    .named = true,
  },
  [sym__legacy_index] = {
    .visible = false,
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
  [sym__for_intro] = {
    .visible = false,
    .named = true,
  },
  [sym__for_cond] = {
    .visible = false,
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
  [sym__function_arguments] = {
    .visible = false,
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
  [sym__heredoc_start] = {
    .visible = false,
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
  [sym__template_for_start] = {
    .visible = false,
    .named = true,
  },
  [sym__template_for_end] = {
    .visible = false,
    .named = true,
  },
  [sym_template_if] = {
    .visible = true,
    .named = true,
  },
  [sym__template_if_intro] = {
    .visible = false,
    .named = true,
  },
  [sym__template_else_intro] = {
    .visible = false,
    .named = true,
  },
  [sym__template_if_end] = {
    .visible = false,
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
  [aux_sym__function_arguments_repeat1] = {
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
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_decimal = 5,
  field_element = 6,
  field_expr = 7,
  field_function = 8,
  field_hexadecimal = 9,
  field_index = 10,
  field_iter = 11,
  field_key = 12,
  field_label = 13,
  field_left = 14,
  field_name = 15,
  field_operand = 16,
  field_operator = 17,
  field_right = 18,
  field_start = 19,
  field_target = 20,
  field_type = 21,
  field_val = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_decimal] = "decimal",
  [field_element] = "element",
  [field_expr] = "expr",
  [field_function] = "function",
  [field_hexadecimal] = "hexadecimal",
  [field_index] = "index",
  [field_iter] = "iter",
  [field_key] = "key",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_start] = "start",
  [field_target] = "target",
  [field_type] = "type",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 3},
  [21] = {.index = 29, .length = 1},
  [22] = {.index = 30, .length = 2},
  [23] = {.index = 32, .length = 3},
  [24] = {.index = 35, .length = 1},
  [25] = {.index = 36, .length = 3},
  [26] = {.index = 39, .length = 2},
  [27] = {.index = 41, .length = 2},
  [28] = {.index = 43, .length = 2},
  [29] = {.index = 45, .length = 3},
  [30] = {.index = 48, .length = 1},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 1},
  [33] = {.index = 51, .length = 2},
  [34] = {.index = 53, .length = 1},
  [35] = {.index = 54, .length = 2},
  [36] = {.index = 56, .length = 3},
  [37] = {.index = 59, .length = 1},
  [38] = {.index = 60, .length = 4},
  [39] = {.index = 64, .length = 1},
  [40] = {.index = 65, .length = 3},
  [41] = {.index = 68, .length = 2},
  [42] = {.index = 70, .length = 4},
  [43] = {.index = 74, .length = 2},
  [44] = {.index = 76, .length = 5},
  [45] = {.index = 81, .length = 2},
  [46] = {.index = 83, .length = 3},
  [47] = {.index = 86, .length = 5},
  [48] = {.index = 91, .length = 3},
  [49] = {.index = 94, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_decimal, 0},
  [3] =
    {field_hexadecimal, 0},
  [4] =
    {field_element, 0},
  [5] =
    {field_key, 0},
    {field_val, 2},
  [7] =
    {field_type, 0},
  [8] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [10] =
    {field_operand, 1},
    {field_operator, 0},
  [12] =
    {field_index, 0, .inherited = true},
  [13] =
    {field_element, 1, .inherited = true},
  [14] =
    {field_element, 0},
    {field_element, 1, .inherited = true},
  [16] =
    {field_body, 2},
    {field_type, 0},
  [18] =
    {field_label, 1, .inherited = true},
    {field_type, 0},
  [20] =
    {field_iter, 0, .inherited = true},
    {field_target, 0, .inherited = true},
  [22] =
    {field_condition, 0, .inherited = true},
  [23] =
    {field_argument, 0},
  [24] =
    {field_function, 0},
  [25] =
    {field_index, 1},
  [26] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [29] =
    {field_element, 1},
  [30] =
    {field_element, 0, .inherited = true},
    {field_element, 1, .inherited = true},
  [32] =
    {field_body, 3},
    {field_label, 1, .inherited = true},
    {field_type, 0},
  [35] =
    {field_expr, 1},
  [36] =
    {field_body, 1},
    {field_iter, 0, .inherited = true},
    {field_target, 0, .inherited = true},
  [39] =
    {field_body, 1},
    {field_condition, 0, .inherited = true},
  [41] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [43] =
    {field_argument, 2, .inherited = true},
    {field_function, 0},
  [45] =
    {field_expr, 2},
    {field_iter, 1, .inherited = true},
    {field_target, 1, .inherited = true},
  [48] =
    {field_start, 0},
  [49] =
    {field_expr, 2},
  [50] =
    {field_condition, 2},
  [51] =
    {field_alternative, 2},
    {field_condition, 0, .inherited = true},
  [53] =
    {field_argument, 1},
  [54] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [56] =
    {field_alternative, 4},
    {field_body, 2},
    {field_condition, 0},
  [59] =
    {field_condition, 1},
  [60] =
    {field_condition, 3, .inherited = true},
    {field_expr, 2},
    {field_iter, 1, .inherited = true},
    {field_target, 1, .inherited = true},
  [64] =
    {field_condition, 3},
  [65] =
    {field_alternative, 3},
    {field_body, 1},
    {field_condition, 0, .inherited = true},
  [68] =
    {field_iter, 3},
    {field_target, 1},
  [70] =
    {field_iter, 1, .inherited = true},
    {field_key, 2},
    {field_target, 1, .inherited = true},
    {field_val, 4},
  [74] =
    {field_iter, 4},
    {field_target, 2},
  [76] =
    {field_condition, 5, .inherited = true},
    {field_iter, 1, .inherited = true},
    {field_key, 2},
    {field_target, 1, .inherited = true},
    {field_val, 4},
  [81] =
    {field_iter, 5},
    {field_target, 3},
  [83] =
    {field_iter, 5},
    {field_target, 1},
    {field_target, 3},
  [86] =
    {field_condition, 6, .inherited = true},
    {field_iter, 1, .inherited = true},
    {field_key, 2},
    {field_target, 1, .inherited = true},
    {field_val, 4},
  [91] =
    {field_iter, 6},
    {field_target, 2},
    {field_target, 4},
  [94] =
    {field_iter, 7},
    {field_target, 3},
    {field_target, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 7,
  [12] = 7,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 16,
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 22,
  [26] = 26,
  [27] = 21,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 43,
  [47] = 45,
  [48] = 48,
  [49] = 43,
  [50] = 45,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 55,
  [57] = 51,
  [58] = 58,
  [59] = 59,
  [60] = 52,
  [61] = 55,
  [62] = 62,
  [63] = 58,
  [64] = 51,
  [65] = 65,
  [66] = 58,
  [67] = 51,
  [68] = 52,
  [69] = 62,
  [70] = 55,
  [71] = 43,
  [72] = 45,
  [73] = 45,
  [74] = 51,
  [75] = 62,
  [76] = 76,
  [77] = 62,
  [78] = 52,
  [79] = 62,
  [80] = 80,
  [81] = 81,
  [82] = 58,
  [83] = 83,
  [84] = 58,
  [85] = 85,
  [86] = 86,
  [87] = 55,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 95,
  [103] = 103,
  [104] = 99,
  [105] = 96,
  [106] = 103,
  [107] = 95,
  [108] = 101,
  [109] = 100,
  [110] = 97,
  [111] = 97,
  [112] = 100,
  [113] = 96,
  [114] = 99,
  [115] = 103,
  [116] = 95,
  [117] = 101,
  [118] = 101,
  [119] = 100,
  [120] = 103,
  [121] = 97,
  [122] = 97,
  [123] = 96,
  [124] = 99,
  [125] = 103,
  [126] = 99,
  [127] = 95,
  [128] = 101,
  [129] = 100,
  [130] = 33,
  [131] = 34,
  [132] = 35,
  [133] = 36,
  [134] = 37,
  [135] = 38,
  [136] = 39,
  [137] = 31,
  [138] = 91,
  [139] = 92,
  [140] = 90,
  [141] = 93,
  [142] = 94,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 143,
  [177] = 34,
  [178] = 35,
  [179] = 33,
  [180] = 38,
  [181] = 31,
  [182] = 37,
  [183] = 39,
  [184] = 36,
  [185] = 172,
  [186] = 174,
  [187] = 146,
  [188] = 160,
  [189] = 145,
  [190] = 163,
  [191] = 171,
  [192] = 162,
  [193] = 165,
  [194] = 167,
  [195] = 166,
  [196] = 149,
  [197] = 173,
  [198] = 159,
  [199] = 147,
  [200] = 164,
  [201] = 158,
  [202] = 156,
  [203] = 154,
  [204] = 151,
  [205] = 153,
  [206] = 155,
  [207] = 148,
  [208] = 168,
  [209] = 161,
  [210] = 152,
  [211] = 175,
  [212] = 144,
  [213] = 169,
  [214] = 170,
  [215] = 150,
  [216] = 157,
  [217] = 39,
  [218] = 38,
  [219] = 33,
  [220] = 93,
  [221] = 37,
  [222] = 33,
  [223] = 94,
  [224] = 36,
  [225] = 34,
  [226] = 35,
  [227] = 36,
  [228] = 37,
  [229] = 38,
  [230] = 39,
  [231] = 35,
  [232] = 31,
  [233] = 34,
  [234] = 90,
  [235] = 31,
  [236] = 91,
  [237] = 92,
  [238] = 93,
  [239] = 90,
  [240] = 91,
  [241] = 94,
  [242] = 94,
  [243] = 92,
  [244] = 91,
  [245] = 90,
  [246] = 92,
  [247] = 93,
  [248] = 143,
  [249] = 145,
  [250] = 155,
  [251] = 143,
  [252] = 143,
  [253] = 146,
  [254] = 147,
  [255] = 148,
  [256] = 150,
  [257] = 144,
  [258] = 152,
  [259] = 153,
  [260] = 154,
  [261] = 156,
  [262] = 158,
  [263] = 166,
  [264] = 168,
  [265] = 175,
  [266] = 163,
  [267] = 157,
  [268] = 161,
  [269] = 170,
  [270] = 174,
  [271] = 149,
  [272] = 173,
  [273] = 151,
  [274] = 172,
  [275] = 171,
  [276] = 169,
  [277] = 159,
  [278] = 160,
  [279] = 167,
  [280] = 164,
  [281] = 162,
  [282] = 165,
  [283] = 172,
  [284] = 150,
  [285] = 146,
  [286] = 158,
  [287] = 146,
  [288] = 153,
  [289] = 152,
  [290] = 144,
  [291] = 156,
  [292] = 154,
  [293] = 150,
  [294] = 160,
  [295] = 145,
  [296] = 163,
  [297] = 164,
  [298] = 165,
  [299] = 148,
  [300] = 167,
  [301] = 158,
  [302] = 160,
  [303] = 169,
  [304] = 145,
  [305] = 163,
  [306] = 171,
  [307] = 164,
  [308] = 173,
  [309] = 161,
  [310] = 175,
  [311] = 165,
  [312] = 167,
  [313] = 169,
  [314] = 171,
  [315] = 172,
  [316] = 173,
  [317] = 161,
  [318] = 175,
  [319] = 147,
  [320] = 170,
  [321] = 170,
  [322] = 168,
  [323] = 168,
  [324] = 166,
  [325] = 162,
  [326] = 174,
  [327] = 166,
  [328] = 159,
  [329] = 162,
  [330] = 174,
  [331] = 159,
  [332] = 157,
  [333] = 157,
  [334] = 155,
  [335] = 151,
  [336] = 155,
  [337] = 149,
  [338] = 151,
  [339] = 149,
  [340] = 147,
  [341] = 148,
  [342] = 156,
  [343] = 154,
  [344] = 144,
  [345] = 152,
  [346] = 153,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 353,
  [355] = 352,
  [356] = 352,
  [357] = 353,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 363,
  [368] = 368,
  [369] = 362,
  [370] = 361,
  [371] = 366,
  [372] = 365,
  [373] = 373,
  [374] = 368,
  [375] = 373,
  [376] = 365,
  [377] = 363,
  [378] = 378,
  [379] = 365,
  [380] = 360,
  [381] = 364,
  [382] = 361,
  [383] = 361,
  [384] = 378,
  [385] = 364,
  [386] = 368,
  [387] = 365,
  [388] = 366,
  [389] = 366,
  [390] = 362,
  [391] = 373,
  [392] = 361,
  [393] = 360,
  [394] = 366,
  [395] = 395,
  [396] = 395,
  [397] = 395,
  [398] = 378,
  [399] = 395,
  [400] = 395,
  [401] = 348,
  [402] = 347,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 407,
  [411] = 407,
  [412] = 407,
  [413] = 407,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 417,
  [419] = 417,
  [420] = 420,
  [421] = 416,
  [422] = 348,
  [423] = 423,
  [424] = 424,
  [425] = 417,
  [426] = 420,
  [427] = 420,
  [428] = 428,
  [429] = 417,
  [430] = 430,
  [431] = 347,
  [432] = 428,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 433,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 433,
  [447] = 447,
  [448] = 441,
  [449] = 449,
  [450] = 443,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 440,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 462,
  [464] = 461,
  [465] = 443,
  [466] = 460,
  [467] = 467,
  [468] = 445,
  [469] = 449,
  [470] = 454,
  [471] = 471,
  [472] = 453,
  [473] = 473,
  [474] = 451,
  [475] = 471,
  [476] = 447,
  [477] = 477,
  [478] = 473,
  [479] = 451,
  [480] = 459,
  [481] = 467,
  [482] = 443,
  [483] = 458,
  [484] = 433,
  [485] = 477,
  [486] = 437,
  [487] = 457,
  [488] = 456,
  [489] = 436,
  [490] = 416,
  [491] = 453,
  [492] = 433,
  [493] = 493,
  [494] = 452,
  [495] = 495,
  [496] = 435,
  [497] = 428,
  [498] = 498,
  [499] = 443,
  [500] = 498,
  [501] = 467,
  [502] = 444,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 428,
  [510] = 510,
  [511] = 511,
  [512] = 347,
  [513] = 513,
  [514] = 514,
  [515] = 510,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 441,
  [520] = 520,
  [521] = 440,
  [522] = 508,
  [523] = 523,
  [524] = 437,
  [525] = 525,
  [526] = 436,
  [527] = 435,
  [528] = 498,
  [529] = 347,
  [530] = 452,
  [531] = 457,
  [532] = 458,
  [533] = 459,
  [534] = 523,
  [535] = 460,
  [536] = 461,
  [537] = 462,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 523,
  [544] = 508,
  [545] = 545,
  [546] = 445,
  [547] = 449,
  [548] = 454,
  [549] = 471,
  [550] = 473,
  [551] = 551,
  [552] = 552,
  [553] = 542,
  [554] = 554,
  [555] = 542,
  [556] = 556,
  [557] = 557,
  [558] = 348,
  [559] = 477,
  [560] = 447,
  [561] = 456,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 416,
  [568] = 174,
  [569] = 569,
  [570] = 510,
  [571] = 571,
  [572] = 572,
  [573] = 444,
  [574] = 348,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 579,
  [584] = 584,
  [585] = 576,
  [586] = 586,
  [587] = 577,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 590,
  [593] = 577,
  [594] = 580,
  [595] = 595,
  [596] = 576,
  [597] = 597,
  [598] = 598,
  [599] = 590,
  [600] = 582,
  [601] = 584,
  [602] = 602,
  [603] = 597,
  [604] = 581,
  [605] = 578,
  [606] = 602,
  [607] = 607,
  [608] = 576,
  [609] = 580,
  [610] = 610,
  [611] = 610,
  [612] = 578,
  [613] = 581,
  [614] = 584,
  [615] = 580,
  [616] = 576,
  [617] = 581,
  [618] = 590,
  [619] = 582,
  [620] = 579,
  [621] = 602,
  [622] = 610,
  [623] = 577,
  [624] = 624,
  [625] = 588,
  [626] = 589,
  [627] = 588,
  [628] = 628,
  [629] = 589,
  [630] = 602,
  [631] = 577,
  [632] = 595,
  [633] = 590,
  [634] = 597,
  [635] = 579,
  [636] = 582,
  [637] = 637,
  [638] = 578,
  [639] = 610,
  [640] = 580,
  [641] = 581,
  [642] = 584,
  [643] = 584,
  [644] = 602,
  [645] = 610,
  [646] = 578,
  [647] = 647,
  [648] = 582,
  [649] = 579,
  [650] = 595,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 661,
  [663] = 653,
  [664] = 655,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 658,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 657,
  [678] = 678,
  [679] = 668,
  [680] = 670,
  [681] = 681,
  [682] = 657,
  [683] = 658,
  [684] = 684,
  [685] = 661,
  [686] = 653,
  [687] = 655,
  [688] = 688,
  [689] = 668,
  [690] = 690,
  [691] = 670,
  [692] = 674,
  [693] = 693,
  [694] = 674,
  [695] = 695,
  [696] = 674,
  [697] = 697,
  [698] = 674,
  [699] = 699,
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
      ACCEPT_TOKEN(aux_sym__legacy_index_token1);
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
      ACCEPT_TOKEN(sym__strip_marker);
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
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 3, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 3, .external_lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 3},
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
  [129] = {.lex_state = 1, .external_lex_state = 2},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
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
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 41},
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
  [217] = {.lex_state = 41, .external_lex_state = 4},
  [218] = {.lex_state = 41, .external_lex_state = 4},
  [219] = {.lex_state = 41, .external_lex_state = 4},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 41, .external_lex_state = 4},
  [222] = {.lex_state = 41, .external_lex_state = 5},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 41, .external_lex_state = 4},
  [225] = {.lex_state = 41, .external_lex_state = 5},
  [226] = {.lex_state = 41, .external_lex_state = 5},
  [227] = {.lex_state = 41, .external_lex_state = 5},
  [228] = {.lex_state = 41, .external_lex_state = 5},
  [229] = {.lex_state = 41, .external_lex_state = 5},
  [230] = {.lex_state = 41, .external_lex_state = 5},
  [231] = {.lex_state = 41, .external_lex_state = 4},
  [232] = {.lex_state = 41, .external_lex_state = 4},
  [233] = {.lex_state = 41, .external_lex_state = 4},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 41, .external_lex_state = 5},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 41, .external_lex_state = 5},
  [239] = {.lex_state = 41, .external_lex_state = 4},
  [240] = {.lex_state = 41, .external_lex_state = 4},
  [241] = {.lex_state = 41, .external_lex_state = 5},
  [242] = {.lex_state = 41, .external_lex_state = 4},
  [243] = {.lex_state = 41, .external_lex_state = 4},
  [244] = {.lex_state = 41, .external_lex_state = 5},
  [245] = {.lex_state = 41, .external_lex_state = 5},
  [246] = {.lex_state = 41, .external_lex_state = 5},
  [247] = {.lex_state = 41, .external_lex_state = 4},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 41, .external_lex_state = 4},
  [252] = {.lex_state = 41, .external_lex_state = 5},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
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
  [269] = {.lex_state = 2},
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
  [283] = {.lex_state = 41, .external_lex_state = 4},
  [284] = {.lex_state = 41, .external_lex_state = 5},
  [285] = {.lex_state = 41, .external_lex_state = 4},
  [286] = {.lex_state = 41, .external_lex_state = 5},
  [287] = {.lex_state = 41, .external_lex_state = 5},
  [288] = {.lex_state = 41, .external_lex_state = 4},
  [289] = {.lex_state = 41, .external_lex_state = 4},
  [290] = {.lex_state = 41, .external_lex_state = 4},
  [291] = {.lex_state = 41, .external_lex_state = 4},
  [292] = {.lex_state = 41, .external_lex_state = 4},
  [293] = {.lex_state = 41, .external_lex_state = 4},
  [294] = {.lex_state = 41, .external_lex_state = 5},
  [295] = {.lex_state = 41, .external_lex_state = 5},
  [296] = {.lex_state = 41, .external_lex_state = 5},
  [297] = {.lex_state = 41, .external_lex_state = 5},
  [298] = {.lex_state = 41, .external_lex_state = 5},
  [299] = {.lex_state = 41, .external_lex_state = 4},
  [300] = {.lex_state = 41, .external_lex_state = 5},
  [301] = {.lex_state = 41, .external_lex_state = 4},
  [302] = {.lex_state = 41, .external_lex_state = 4},
  [303] = {.lex_state = 41, .external_lex_state = 5},
  [304] = {.lex_state = 41, .external_lex_state = 4},
  [305] = {.lex_state = 41, .external_lex_state = 4},
  [306] = {.lex_state = 41, .external_lex_state = 5},
  [307] = {.lex_state = 41, .external_lex_state = 4},
  [308] = {.lex_state = 41, .external_lex_state = 5},
  [309] = {.lex_state = 41, .external_lex_state = 5},
  [310] = {.lex_state = 41, .external_lex_state = 5},
  [311] = {.lex_state = 41, .external_lex_state = 4},
  [312] = {.lex_state = 41, .external_lex_state = 4},
  [313] = {.lex_state = 41, .external_lex_state = 4},
  [314] = {.lex_state = 41, .external_lex_state = 4},
  [315] = {.lex_state = 41, .external_lex_state = 5},
  [316] = {.lex_state = 41, .external_lex_state = 4},
  [317] = {.lex_state = 41, .external_lex_state = 4},
  [318] = {.lex_state = 41, .external_lex_state = 4},
  [319] = {.lex_state = 41, .external_lex_state = 4},
  [320] = {.lex_state = 41, .external_lex_state = 5},
  [321] = {.lex_state = 41, .external_lex_state = 4},
  [322] = {.lex_state = 41, .external_lex_state = 5},
  [323] = {.lex_state = 41, .external_lex_state = 4},
  [324] = {.lex_state = 41, .external_lex_state = 5},
  [325] = {.lex_state = 41, .external_lex_state = 5},
  [326] = {.lex_state = 41, .external_lex_state = 4},
  [327] = {.lex_state = 41, .external_lex_state = 4},
  [328] = {.lex_state = 41, .external_lex_state = 5},
  [329] = {.lex_state = 41, .external_lex_state = 4},
  [330] = {.lex_state = 41, .external_lex_state = 5},
  [331] = {.lex_state = 41, .external_lex_state = 4},
  [332] = {.lex_state = 41, .external_lex_state = 5},
  [333] = {.lex_state = 41, .external_lex_state = 4},
  [334] = {.lex_state = 41, .external_lex_state = 4},
  [335] = {.lex_state = 41, .external_lex_state = 4},
  [336] = {.lex_state = 41, .external_lex_state = 5},
  [337] = {.lex_state = 41, .external_lex_state = 4},
  [338] = {.lex_state = 41, .external_lex_state = 5},
  [339] = {.lex_state = 41, .external_lex_state = 5},
  [340] = {.lex_state = 41, .external_lex_state = 5},
  [341] = {.lex_state = 41, .external_lex_state = 5},
  [342] = {.lex_state = 41, .external_lex_state = 5},
  [343] = {.lex_state = 41, .external_lex_state = 5},
  [344] = {.lex_state = 41, .external_lex_state = 5},
  [345] = {.lex_state = 41, .external_lex_state = 5},
  [346] = {.lex_state = 41, .external_lex_state = 5},
  [347] = {.lex_state = 1, .external_lex_state = 2},
  [348] = {.lex_state = 1, .external_lex_state = 2},
  [349] = {.lex_state = 1, .external_lex_state = 2},
  [350] = {.lex_state = 1, .external_lex_state = 2},
  [351] = {.lex_state = 1, .external_lex_state = 2},
  [352] = {.lex_state = 0, .external_lex_state = 6},
  [353] = {.lex_state = 0, .external_lex_state = 6},
  [354] = {.lex_state = 0, .external_lex_state = 6},
  [355] = {.lex_state = 0, .external_lex_state = 6},
  [356] = {.lex_state = 0, .external_lex_state = 6},
  [357] = {.lex_state = 0, .external_lex_state = 6},
  [358] = {.lex_state = 1, .external_lex_state = 2},
  [359] = {.lex_state = 1, .external_lex_state = 2},
  [360] = {.lex_state = 0, .external_lex_state = 6},
  [361] = {.lex_state = 0, .external_lex_state = 7},
  [362] = {.lex_state = 0, .external_lex_state = 6},
  [363] = {.lex_state = 0, .external_lex_state = 6},
  [364] = {.lex_state = 0, .external_lex_state = 6},
  [365] = {.lex_state = 0, .external_lex_state = 8},
  [366] = {.lex_state = 0, .external_lex_state = 8},
  [367] = {.lex_state = 0, .external_lex_state = 6},
  [368] = {.lex_state = 0, .external_lex_state = 6},
  [369] = {.lex_state = 0, .external_lex_state = 6},
  [370] = {.lex_state = 0, .external_lex_state = 7},
  [371] = {.lex_state = 0, .external_lex_state = 8},
  [372] = {.lex_state = 0, .external_lex_state = 8},
  [373] = {.lex_state = 0, .external_lex_state = 6},
  [374] = {.lex_state = 0, .external_lex_state = 6},
  [375] = {.lex_state = 0, .external_lex_state = 6},
  [376] = {.lex_state = 0, .external_lex_state = 8},
  [377] = {.lex_state = 0, .external_lex_state = 6},
  [378] = {.lex_state = 0, .external_lex_state = 7},
  [379] = {.lex_state = 0, .external_lex_state = 8},
  [380] = {.lex_state = 0, .external_lex_state = 6},
  [381] = {.lex_state = 0, .external_lex_state = 6},
  [382] = {.lex_state = 0, .external_lex_state = 7},
  [383] = {.lex_state = 0, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 0, .external_lex_state = 6},
  [386] = {.lex_state = 0, .external_lex_state = 6},
  [387] = {.lex_state = 0, .external_lex_state = 8},
  [388] = {.lex_state = 0, .external_lex_state = 8},
  [389] = {.lex_state = 0, .external_lex_state = 8},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 0, .external_lex_state = 7},
  [393] = {.lex_state = 0, .external_lex_state = 6},
  [394] = {.lex_state = 0, .external_lex_state = 8},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 0, .external_lex_state = 6},
  [397] = {.lex_state = 0, .external_lex_state = 6},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 0, .external_lex_state = 6},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 41},
  [403] = {.lex_state = 4, .external_lex_state = 2},
  [404] = {.lex_state = 41},
  [405] = {.lex_state = 41},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 41},
  [409] = {.lex_state = 41, .external_lex_state = 2},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 41},
  [415] = {.lex_state = 41, .external_lex_state = 2},
  [416] = {.lex_state = 0, .external_lex_state = 8},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0, .external_lex_state = 7},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0, .external_lex_state = 7},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0, .external_lex_state = 8},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0, .external_lex_state = 7},
  [436] = {.lex_state = 0, .external_lex_state = 7},
  [437] = {.lex_state = 0, .external_lex_state = 7},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0, .external_lex_state = 7},
  [441] = {.lex_state = 0, .external_lex_state = 7},
  [442] = {.lex_state = 0, .external_lex_state = 9},
  [443] = {.lex_state = 0, .external_lex_state = 8},
  [444] = {.lex_state = 0, .external_lex_state = 8},
  [445] = {.lex_state = 0, .external_lex_state = 8},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0, .external_lex_state = 7},
  [448] = {.lex_state = 0, .external_lex_state = 8},
  [449] = {.lex_state = 0, .external_lex_state = 8},
  [450] = {.lex_state = 0, .external_lex_state = 8},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0, .external_lex_state = 7},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0, .external_lex_state = 8},
  [455] = {.lex_state = 0, .external_lex_state = 8},
  [456] = {.lex_state = 0, .external_lex_state = 8},
  [457] = {.lex_state = 0, .external_lex_state = 7},
  [458] = {.lex_state = 0, .external_lex_state = 7},
  [459] = {.lex_state = 0, .external_lex_state = 7},
  [460] = {.lex_state = 0, .external_lex_state = 7},
  [461] = {.lex_state = 0, .external_lex_state = 7},
  [462] = {.lex_state = 0, .external_lex_state = 7},
  [463] = {.lex_state = 0, .external_lex_state = 8},
  [464] = {.lex_state = 0, .external_lex_state = 8},
  [465] = {.lex_state = 0, .external_lex_state = 8},
  [466] = {.lex_state = 0, .external_lex_state = 8},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0, .external_lex_state = 7},
  [469] = {.lex_state = 0, .external_lex_state = 7},
  [470] = {.lex_state = 0, .external_lex_state = 7},
  [471] = {.lex_state = 0, .external_lex_state = 7},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0, .external_lex_state = 7},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0, .external_lex_state = 8},
  [476] = {.lex_state = 0, .external_lex_state = 8},
  [477] = {.lex_state = 0, .external_lex_state = 8},
  [478] = {.lex_state = 0, .external_lex_state = 8},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0, .external_lex_state = 8},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0, .external_lex_state = 8},
  [483] = {.lex_state = 0, .external_lex_state = 8},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0, .external_lex_state = 7},
  [486] = {.lex_state = 0, .external_lex_state = 8},
  [487] = {.lex_state = 0, .external_lex_state = 8},
  [488] = {.lex_state = 0, .external_lex_state = 7},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 0, .external_lex_state = 6},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 41},
  [494] = {.lex_state = 0, .external_lex_state = 8},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0, .external_lex_state = 8},
  [497] = {.lex_state = 0, .external_lex_state = 6},
  [498] = {.lex_state = 0, .external_lex_state = 7},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 0, .external_lex_state = 8},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0, .external_lex_state = 7},
  [503] = {.lex_state = 0, .external_lex_state = 6},
  [504] = {.lex_state = 0, .external_lex_state = 4},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0, .external_lex_state = 6},
  [507] = {.lex_state = 41, .external_lex_state = 2},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0, .external_lex_state = 9},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0, .external_lex_state = 6},
  [512] = {.lex_state = 0, .external_lex_state = 4},
  [513] = {.lex_state = 0, .external_lex_state = 6},
  [514] = {.lex_state = 41},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0, .external_lex_state = 6},
  [517] = {.lex_state = 0, .external_lex_state = 6},
  [518] = {.lex_state = 41},
  [519] = {.lex_state = 0, .external_lex_state = 6},
  [520] = {.lex_state = 0, .external_lex_state = 4},
  [521] = {.lex_state = 0, .external_lex_state = 6},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0, .external_lex_state = 5},
  [524] = {.lex_state = 0, .external_lex_state = 6},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0, .external_lex_state = 6},
  [527] = {.lex_state = 0, .external_lex_state = 6},
  [528] = {.lex_state = 0, .external_lex_state = 6},
  [529] = {.lex_state = 0, .external_lex_state = 5},
  [530] = {.lex_state = 0, .external_lex_state = 6},
  [531] = {.lex_state = 0, .external_lex_state = 6},
  [532] = {.lex_state = 0, .external_lex_state = 6},
  [533] = {.lex_state = 0, .external_lex_state = 6},
  [534] = {.lex_state = 0, .external_lex_state = 5},
  [535] = {.lex_state = 0, .external_lex_state = 6},
  [536] = {.lex_state = 0, .external_lex_state = 6},
  [537] = {.lex_state = 0, .external_lex_state = 6},
  [538] = {.lex_state = 0, .external_lex_state = 4},
  [539] = {.lex_state = 0, .external_lex_state = 6},
  [540] = {.lex_state = 3},
  [541] = {.lex_state = 0, .external_lex_state = 4},
  [542] = {.lex_state = 0, .external_lex_state = 5},
  [543] = {.lex_state = 0, .external_lex_state = 5},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 41},
  [546] = {.lex_state = 0, .external_lex_state = 6},
  [547] = {.lex_state = 0, .external_lex_state = 6},
  [548] = {.lex_state = 0, .external_lex_state = 6},
  [549] = {.lex_state = 0, .external_lex_state = 6},
  [550] = {.lex_state = 0, .external_lex_state = 6},
  [551] = {.lex_state = 41},
  [552] = {.lex_state = 0, .external_lex_state = 6},
  [553] = {.lex_state = 0, .external_lex_state = 5},
  [554] = {.lex_state = 0, .external_lex_state = 6},
  [555] = {.lex_state = 0, .external_lex_state = 5},
  [556] = {.lex_state = 0, .external_lex_state = 4},
  [557] = {.lex_state = 0, .external_lex_state = 6},
  [558] = {.lex_state = 0, .external_lex_state = 4},
  [559] = {.lex_state = 0, .external_lex_state = 6},
  [560] = {.lex_state = 0, .external_lex_state = 6},
  [561] = {.lex_state = 0, .external_lex_state = 6},
  [562] = {.lex_state = 0, .external_lex_state = 6},
  [563] = {.lex_state = 41, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 6},
  [565] = {.lex_state = 0, .external_lex_state = 4},
  [566] = {.lex_state = 0, .external_lex_state = 6},
  [567] = {.lex_state = 0, .external_lex_state = 9},
  [568] = {.lex_state = 41, .external_lex_state = 2},
  [569] = {.lex_state = 0, .external_lex_state = 6},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0, .external_lex_state = 6},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0, .external_lex_state = 6},
  [574] = {.lex_state = 0, .external_lex_state = 5},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 1},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 41},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 1},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0, .external_lex_state = 4},
  [589] = {.lex_state = 0, .external_lex_state = 4},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0, .external_lex_state = 4},
  [596] = {.lex_state = 1},
  [597] = {.lex_state = 0, .external_lex_state = 4},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0, .external_lex_state = 4},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 41},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 1},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 41},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 1},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0, .external_lex_state = 4},
  [626] = {.lex_state = 0, .external_lex_state = 4},
  [627] = {.lex_state = 0, .external_lex_state = 4},
  [628] = {.lex_state = 0, .external_lex_state = 4},
  [629] = {.lex_state = 0, .external_lex_state = 4},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0, .external_lex_state = 4},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0, .external_lex_state = 4},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 41},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 41},
  [647] = {.lex_state = 0, .external_lex_state = 4},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0, .external_lex_state = 4},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0, .external_lex_state = 4},
  [653] = {.lex_state = 0, .external_lex_state = 4},
  [654] = {.lex_state = 41},
  [655] = {.lex_state = 0, .external_lex_state = 5},
  [656] = {.lex_state = 0, .external_lex_state = 4},
  [657] = {.lex_state = 0, .external_lex_state = 4},
  [658] = {.lex_state = 0, .external_lex_state = 4},
  [659] = {.lex_state = 41},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0, .external_lex_state = 4},
  [662] = {.lex_state = 0, .external_lex_state = 4},
  [663] = {.lex_state = 0, .external_lex_state = 4},
  [664] = {.lex_state = 0, .external_lex_state = 5},
  [665] = {.lex_state = 0, .external_lex_state = 10},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0, .external_lex_state = 5},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0, .external_lex_state = 5},
  [671] = {.lex_state = 41},
  [672] = {.lex_state = 0, .external_lex_state = 4},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 0, .external_lex_state = 11},
  [675] = {.lex_state = 41},
  [676] = {.lex_state = 0, .external_lex_state = 4},
  [677] = {.lex_state = 0, .external_lex_state = 4},
  [678] = {.lex_state = 0, .external_lex_state = 4},
  [679] = {.lex_state = 0, .external_lex_state = 5},
  [680] = {.lex_state = 0, .external_lex_state = 5},
  [681] = {.lex_state = 41},
  [682] = {.lex_state = 0, .external_lex_state = 4},
  [683] = {.lex_state = 0, .external_lex_state = 4},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0, .external_lex_state = 4},
  [686] = {.lex_state = 0, .external_lex_state = 4},
  [687] = {.lex_state = 0, .external_lex_state = 5},
  [688] = {.lex_state = 41},
  [689] = {.lex_state = 0, .external_lex_state = 5},
  [690] = {.lex_state = 0, .external_lex_state = 4},
  [691] = {.lex_state = 0, .external_lex_state = 5},
  [692] = {.lex_state = 0, .external_lex_state = 11},
  [693] = {.lex_state = 0, .external_lex_state = 4},
  [694] = {.lex_state = 0, .external_lex_state = 11},
  [695] = {.lex_state = 0, .external_lex_state = 4},
  [696] = {.lex_state = 0, .external_lex_state = 11},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0, .external_lex_state = 11},
  [699] = {.lex_state = 0},
};

enum {
  ts_external_token__quoted_template_start = 0,
  ts_external_token__quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token__template_interpolation_start = 3,
  ts_external_token__template_interpolation_end = 4,
  ts_external_token__template_directive_start = 5,
  ts_external_token__template_directive_end = 6,
  ts_external_token__heredoc_identifier = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__quoted_template_start] = sym__quoted_template_start,
  [ts_external_token__quoted_template_end] = sym__quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token__template_interpolation_start] = sym__template_interpolation_start,
  [ts_external_token__template_interpolation_end] = sym__template_interpolation_end,
  [ts_external_token__template_directive_start] = sym__template_directive_start,
  [ts_external_token__template_directive_end] = sym__template_directive_end,
  [ts_external_token__heredoc_identifier] = sym__heredoc_identifier,
};

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__quoted_template_start] = true,
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_interpolation_end] = true,
    [ts_external_token__template_directive_start] = true,
    [ts_external_token__template_directive_end] = true,
    [ts_external_token__heredoc_identifier] = true,
  },
  [2] = {
    [ts_external_token__quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token__quoted_template_start] = true,
    [ts_external_token__template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token__template_directive_end] = true,
  },
  [5] = {
    [ts_external_token__template_interpolation_end] = true,
  },
  [6] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_directive_start] = true,
  },
  [7] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_directive_start] = true,
    [ts_external_token__heredoc_identifier] = true,
  },
  [8] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_directive_start] = true,
  },
  [9] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [10] = {
    [ts_external_token__quoted_template_end] = true,
  },
  [11] = {
    [ts_external_token__heredoc_identifier] = true,
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
    [aux_sym__legacy_index_token1] = ACTIONS(1),
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
    [sym__strip_marker] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__quoted_template_start] = ACTIONS(1),
    [sym__quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym__template_interpolation_start] = ACTIONS(1),
    [sym__template_interpolation_end] = ACTIONS(1),
    [sym__template_directive_start] = ACTIONS(1),
    [sym__template_directive_end] = ACTIONS(1),
    [sym__heredoc_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(699),
    [sym_body] = STATE(697),
    [sym_attribute] = STATE(408),
    [sym_block] = STATE(408),
    [sym_object] = STATE(697),
    [sym__object_start] = STATE(15),
    [aux_sym_body_repeat1] = STATE(408),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(14), 1,
      sym_object_elem,
    STATE(67), 1,
      sym__for_intro,
    STATE(345), 1,
      sym__object_end,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(644), 1,
      sym__object_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [107] = 30,
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
      sym__quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(14), 1,
      sym_object_elem,
    STATE(74), 1,
      sym__for_intro,
    STATE(210), 1,
      sym__object_end,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(602), 1,
      sym__object_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [214] = 30,
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
      sym__quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(14), 1,
      sym_object_elem,
    STATE(51), 1,
      sym__for_intro,
    STATE(289), 1,
      sym__object_end,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(606), 1,
      sym__object_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [321] = 30,
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
      sym__quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(14), 1,
      sym_object_elem,
    STATE(64), 1,
      sym__for_intro,
    STATE(152), 1,
      sym__object_end,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(621), 1,
      sym__object_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [428] = 30,
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
      sym__quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(14), 1,
      sym_object_elem,
    STATE(57), 1,
      sym__for_intro,
    STATE(258), 1,
      sym__object_end,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(630), 1,
      sym__object_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [535] = 29,
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
      sym__quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(73), 1,
      sym__for_intro,
    STATE(193), 1,
      sym__tuple_end,
    STATE(401), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(577), 1,
      sym__tuple_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [639] = 29,
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
      sym__quoted_template_start,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(10), 1,
      aux_sym__object_elems_repeat1,
    STATE(23), 1,
      sym__comma,
    STATE(351), 1,
      sym_object_elem,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [743] = 29,
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
      sym__quoted_template_start,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(50), 1,
      sym__for_intro,
    STATE(165), 1,
      sym__tuple_end,
    STATE(401), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(631), 1,
      sym__tuple_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [847] = 29,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(69), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(75), 1,
      sym_null_lit,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LT_LT,
    ACTIONS(90), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(93), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(10), 1,
      aux_sym__object_elems_repeat1,
    STATE(32), 1,
      sym__comma,
    STATE(351), 1,
      sym_object_elem,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [951] = 29,
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
      sym__quoted_template_start,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(72), 1,
      sym__for_intro,
    STATE(298), 1,
      sym__tuple_end,
    STATE(401), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(587), 1,
      sym__tuple_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1055] = 29,
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
      sym__quoted_template_start,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(47), 1,
      sym__for_intro,
    STATE(282), 1,
      sym__tuple_end,
    STATE(401), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(623), 1,
      sym__tuple_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1159] = 29,
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
      sym__quoted_template_start,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(45), 1,
      sym__for_intro,
    STATE(311), 1,
      sym__tuple_end,
    STATE(401), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(593), 1,
      sym__tuple_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1263] = 29,
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
      sym__quoted_template_start,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(8), 1,
      aux_sym__object_elems_repeat1,
    STATE(26), 1,
      sym__comma,
    STATE(351), 1,
      sym_object_elem,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1367] = 28,
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
      sym__quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(14), 1,
      sym_object_elem,
    STATE(210), 1,
      sym__object_end,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(602), 1,
      sym__object_elems,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1468] = 27,
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
      sym__quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(306), 1,
      sym__function_call_end,
    STATE(401), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(590), 1,
      sym__function_arguments,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1566] = 27,
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
      sym__quoted_template_start,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(191), 1,
      sym__function_call_end,
    STATE(401), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(599), 1,
      sym__function_arguments,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1664] = 27,
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
      sym__quoted_template_start,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(171), 1,
      sym__function_call_end,
    STATE(401), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(633), 1,
      sym__function_arguments,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1762] = 27,
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
      sym__quoted_template_start,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(314), 1,
      sym__function_call_end,
    STATE(401), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(592), 1,
      sym__function_arguments,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1860] = 27,
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
      sym__quoted_template_start,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(275), 1,
      sym__function_call_end,
    STATE(401), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(618), 1,
      sym__function_arguments,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1958] = 26,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(138), 1,
      sym__strip_marker,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(142), 1,
      sym__template_interpolation_end,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(553), 1,
      sym_expression,
    STATE(574), 1,
      sym_conditional,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [2053] = 26,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(144), 1,
      sym__strip_marker,
    ACTIONS(146), 1,
      sym__template_interpolation_end,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(534), 1,
      sym_expression,
    STATE(574), 1,
      sym_conditional,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [2148] = 26,
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
      sym__quoted_template_start,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(350), 1,
      sym_object_elem,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2243] = 26,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(150), 1,
      sym__strip_marker,
    ACTIONS(152), 1,
      sym__template_interpolation_end,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(555), 1,
      sym_expression,
    STATE(574), 1,
      sym_conditional,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [2338] = 26,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(154), 1,
      sym__strip_marker,
    ACTIONS(156), 1,
      sym__template_interpolation_end,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(523), 1,
      sym_expression,
    STATE(574), 1,
      sym_conditional,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [2433] = 26,
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
      sym__quoted_template_start,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(350), 1,
      sym_object_elem,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2528] = 26,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(160), 1,
      sym__strip_marker,
    ACTIONS(162), 1,
      sym__template_interpolation_end,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(542), 1,
      sym_expression,
    STATE(574), 1,
      sym_conditional,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [2623] = 26,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    ACTIONS(164), 1,
      sym__strip_marker,
    ACTIONS(166), 1,
      sym__template_interpolation_end,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(543), 1,
      sym_expression,
    STATE(574), 1,
      sym_conditional,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [2718] = 25,
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
      sym__quoted_template_start,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(495), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2810] = 25,
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
      sym__quoted_template_start,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(572), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2902] = 19,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_DOT_STAR,
    ACTIONS(182), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_AMP_AMP,
    ACTIONS(198), 1,
      anon_sym_PIPE_PIPE,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(190), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(194), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(172), 8,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [2982] = 25,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(350), 1,
      sym_object_elem,
    STATE(401), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3074] = 7,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(202), 12,
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
    ACTIONS(200), 20,
      sym__quoted_template_start,
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
  [3130] = 14,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_AMP_AMP,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(190), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(194), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(204), 11,
      sym__quoted_template_start,
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
  [3200] = 13,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(190), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(194), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(204), 12,
      sym__quoted_template_start,
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
  [3268] = 12,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(190), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(204), 14,
      sym__quoted_template_start,
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
  [3334] = 10,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(184), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 11,
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
    ACTIONS(204), 16,
      sym__quoted_template_start,
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
  [3396] = 7,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 12,
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
    ACTIONS(204), 20,
      sym__quoted_template_start,
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
  [3452] = 9,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(186), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 11,
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
    ACTIONS(204), 18,
      sym__quoted_template_start,
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
  [3512] = 25,
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
      sym__quoted_template_start,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(572), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3604] = 25,
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
      sym__quoted_template_start,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(495), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3696] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(505), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3785] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(412), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [3874] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(410), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [3963] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(417), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [4052] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(411), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [4141] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(418), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [4230] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(572), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4319] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(413), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [4408] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(419), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [4497] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(585), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4586] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(648), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4675] = 24,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(348), 1,
      sym_conditional,
    STATE(349), 1,
      sym_expression,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(31), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4764] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(600), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4853] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(579), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4942] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(649), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5031] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(596), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5120] = 24,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(529), 1,
      sym_expression,
    STATE(574), 1,
      sym_conditional,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [5209] = 24,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(558), 1,
      sym_conditional,
    STATE(565), 1,
      sym_expression,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [5298] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(582), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5387] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(583), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5476] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(611), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5565] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(422), 1,
      sym_conditional,
    STATE(431), 1,
      sym_expression,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [5654] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(616), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5743] = 24,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(504), 1,
      sym_expression,
    STATE(558), 1,
      sym_conditional,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [5832] = 24,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(347), 1,
      sym_expression,
    STATE(348), 1,
      sym_conditional,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(31), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5921] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(576), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6010] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(619), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6099] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(622), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6188] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(620), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6277] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(407), 1,
      sym_expression,
    STATE(422), 1,
      sym_conditional,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [6366] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(422), 1,
      sym_conditional,
    STATE(425), 1,
      sym_expression,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [6455] = 24,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(422), 1,
      sym_conditional,
    STATE(429), 1,
      sym_expression,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [6544] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(608), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6633] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(610), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6722] = 24,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(541), 1,
      sym_expression,
    STATE(558), 1,
      sym_conditional,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [6811] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(639), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6900] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(636), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6989] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(645), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7078] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(493), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7167] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(495), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7256] = 24,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(512), 1,
      sym_expression,
    STATE(558), 1,
      sym_conditional,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [7345] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(624), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7434] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7523] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(598), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7612] = 24,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(556), 1,
      sym_expression,
    STATE(558), 1,
      sym_conditional,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [7701] = 24,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(401), 1,
      sym_conditional,
    STATE(635), 1,
      sym_expression,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(137), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7790] = 24,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(520), 1,
      sym_expression,
    STATE(558), 1,
      sym_conditional,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [7879] = 24,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(538), 1,
      sym_expression,
    STATE(558), 1,
      sym_conditional,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [7968] = 8,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DOT,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(90), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(286), 10,
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
    ACTIONS(284), 20,
      sym__quoted_template_start,
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
  [8024] = 8,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(94), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(296), 10,
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
    ACTIONS(294), 20,
      sym__quoted_template_start,
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
  [8080] = 8,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(93), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(300), 10,
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
    ACTIONS(298), 20,
      sym__quoted_template_start,
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
  [8136] = 8,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(90), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(304), 10,
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
    ACTIONS(302), 20,
      sym__quoted_template_start,
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
  [8192] = 8,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(145), 1,
      sym__new_index,
    STATE(163), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(90), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(308), 10,
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
    ACTIONS(306), 20,
      sym__quoted_template_start,
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
  [8248] = 22,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
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
  [8331] = 22,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
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
  [8414] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [8497] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [8580] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(229), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8663] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8746] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [8829] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8912] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
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
  [8995] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(218), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9078] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(217), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9161] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [9244] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [9327] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [9410] = 22,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(124), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(128), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LT_LT,
    ACTIONS(136), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(140), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(692), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(342), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(343), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(344), 2,
      sym_tuple,
      sym_object,
    STATE(346), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(284), 3,
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
  [9493] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [9576] = 22,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
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
  [9659] = 22,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
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
  [9742] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [9825] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [9908] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [9991] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [10074] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
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
  [10157] = 22,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
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
  [10240] = 22,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(224), 1,
      sym_null_lit,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LT_LT,
    ACTIONS(232), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym__quoted_template_start,
    STATE(6), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(696), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(259), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(260), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(261), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(256), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10323] = 22,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
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
  [10406] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [10489] = 22,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(268), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(272), 1,
      sym_null_lit,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LT_LT,
    ACTIONS(280), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(282), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(13), 1,
      sym__tuple_start,
    STATE(698), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(290), 2,
      sym_tuple,
      sym_object,
    STATE(291), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(292), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(293), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10572] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(39), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10655] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [10738] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [10821] = 22,
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
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(674), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(202), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(203), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(205), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 2,
      sym_tuple,
      sym_object,
    STATE(215), 3,
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
  [10904] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [10987] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [11070] = 22,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(244), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(248), 1,
      sym_null_lit,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LT_LT,
    ACTIONS(256), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(258), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(694), 1,
      sym__heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_tuple,
      sym_object,
    STATE(153), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(156), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11153] = 7,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(202), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(200), 22,
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
  [11205] = 14,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      anon_sym_AMP_AMP,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(320), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(206), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 13,
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
  [11271] = 13,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(320), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(206), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 14,
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
  [11335] = 12,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(206), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 16,
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
  [11397] = 10,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 18,
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
  [11455] = 7,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 22,
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
  [11507] = 9,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 20,
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
  [11563] = 19,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(322), 1,
      anon_sym_AMP_AMP,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_DOT_STAR,
    ACTIONS(330), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(332), 1,
      anon_sym_PIPE_PIPE,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(320), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(200), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(188), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(172), 10,
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
  [11639] = 8,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(142), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(296), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(294), 22,
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
  [11691] = 8,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(141), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(300), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(298), 22,
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
  [11743] = 8,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(337), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(286), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 22,
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
  [11795] = 8,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(304), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 22,
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
  [11847] = 8,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym__new_index,
    STATE(190), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(308), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 22,
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
  [11899] = 5,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
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
    ACTIONS(340), 19,
      sym__quoted_template_start,
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
  [11945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 12,
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
    ACTIONS(346), 20,
      sym__quoted_template_start,
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
  [11986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 12,
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
    ACTIONS(350), 20,
      sym__quoted_template_start,
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
  [12027] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 12,
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
    ACTIONS(354), 20,
      sym__quoted_template_start,
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
  [12068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 12,
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
    ACTIONS(358), 20,
      sym__quoted_template_start,
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
  [12109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 12,
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
    ACTIONS(362), 20,
      sym__quoted_template_start,
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
  [12150] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 12,
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
    ACTIONS(366), 20,
      sym__quoted_template_start,
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
  [12191] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 12,
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
    ACTIONS(370), 20,
      sym__quoted_template_start,
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
  [12232] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 12,
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
    ACTIONS(374), 20,
      sym__quoted_template_start,
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
  [12273] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 12,
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
    ACTIONS(378), 20,
      sym__quoted_template_start,
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
  [12314] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 12,
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
    ACTIONS(382), 20,
      sym__quoted_template_start,
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
  [12355] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 12,
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
    ACTIONS(386), 20,
      sym__quoted_template_start,
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
  [12396] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 12,
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
    ACTIONS(390), 20,
      sym__quoted_template_start,
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
  [12437] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 12,
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
    ACTIONS(394), 20,
      sym__quoted_template_start,
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
  [12478] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 12,
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
    ACTIONS(398), 20,
      sym__quoted_template_start,
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
  [12519] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 12,
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
    ACTIONS(402), 20,
      sym__quoted_template_start,
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
  [12560] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 12,
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
    ACTIONS(406), 20,
      sym__quoted_template_start,
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
  [12601] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 12,
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
    ACTIONS(410), 20,
      sym__quoted_template_start,
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
  [12642] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 12,
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
    ACTIONS(414), 20,
      sym__quoted_template_start,
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
  [12683] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 12,
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
    ACTIONS(418), 20,
      sym__quoted_template_start,
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
  [12724] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 12,
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
    ACTIONS(422), 20,
      sym__quoted_template_start,
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
  [12765] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 12,
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
    ACTIONS(426), 20,
      sym__quoted_template_start,
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
  [12806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 12,
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
    ACTIONS(430), 20,
      sym__quoted_template_start,
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
  [12847] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 12,
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
    ACTIONS(434), 20,
      sym__quoted_template_start,
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
  [12888] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 12,
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
    ACTIONS(438), 20,
      sym__quoted_template_start,
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
  [12929] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 12,
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
    ACTIONS(442), 20,
      sym__quoted_template_start,
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
  [12970] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 12,
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
    ACTIONS(446), 20,
      sym__quoted_template_start,
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
  [13011] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 12,
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
    ACTIONS(450), 20,
      sym__quoted_template_start,
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
  [13052] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 12,
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
    ACTIONS(454), 20,
      sym__quoted_template_start,
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
  [13093] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 12,
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
    ACTIONS(458), 20,
      sym__quoted_template_start,
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
  [13134] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 12,
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
    ACTIONS(462), 20,
      sym__quoted_template_start,
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
  [13175] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 12,
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
    ACTIONS(466), 20,
      sym__quoted_template_start,
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
  [13216] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 12,
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
    ACTIONS(470), 20,
      sym__quoted_template_start,
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
  [13257] = 5,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
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
  [13300] = 14,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      anon_sym_AMP_AMP,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(486), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [13360] = 13,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(486), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13418] = 7,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(202), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(200), 17,
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
  [13464] = 7,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 17,
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
  [13510] = 18,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(488), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    ACTIONS(494), 1,
      anon_sym_DOT_STAR,
    ACTIONS(496), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(498), 1,
      anon_sym_PIPE_PIPE,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(486), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(172), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [13578] = 10,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 13,
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
  [13630] = 9,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 15,
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
  [13680] = 12,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(478), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(482), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(484), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(280), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(278), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 11,
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
  [13736] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 22,
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
  [13773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 22,
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
  [13810] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 22,
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
  [13847] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 22,
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
  [13884] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 22,
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
  [13921] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 22,
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
  [13958] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 22,
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
  [13995] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 22,
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
  [14032] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 22,
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
  [14069] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 22,
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
  [14106] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 22,
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
  [14143] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 22,
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
  [14180] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 22,
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
  [14217] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 22,
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
  [14254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 22,
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
  [14291] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 22,
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
  [14328] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 22,
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
  [14365] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 22,
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
  [14402] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 22,
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
  [14439] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 22,
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
  [14476] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 22,
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
  [14513] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 22,
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
  [14550] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 22,
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
  [14587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 22,
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
  [14624] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 22,
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
  [14661] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 22,
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
  [14698] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 22,
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
  [14735] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 22,
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
  [14772] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 22,
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
  [14809] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 22,
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
  [14846] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 22,
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
  [14883] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 22,
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
  [14920] = 9,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 13,
      sym__template_directive_end,
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
      sym__strip_marker,
  [14968] = 7,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [15012] = 7,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(202), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(200), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [15056] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(302), 17,
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
  [15102] = 10,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(504), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 11,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15152] = 7,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(202), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(200), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [15196] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(306), 17,
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
  [15242] = 12,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(504), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 9,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15296] = 14,
    ACTIONS(514), 1,
      anon_sym_SLASH,
    ACTIONS(522), 1,
      anon_sym_AMP_AMP,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(510), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(512), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(516), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(518), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(520), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 6,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15354] = 13,
    ACTIONS(514), 1,
      anon_sym_SLASH,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(510), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(512), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(516), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(518), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(520), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 7,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15410] = 12,
    ACTIONS(514), 1,
      anon_sym_SLASH,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(510), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(512), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(516), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(518), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 9,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15464] = 10,
    ACTIONS(514), 1,
      anon_sym_SLASH,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(510), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(512), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 11,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15514] = 7,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [15558] = 9,
    ACTIONS(514), 1,
      anon_sym_SLASH,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(512), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(206), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 13,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [15606] = 13,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(504), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(524), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 7,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15662] = 18,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 1,
      anon_sym_DOT,
    ACTIONS(530), 1,
      anon_sym_DOT_STAR,
    ACTIONS(532), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(534), 1,
      anon_sym_AMP_AMP,
    ACTIONS(536), 1,
      anon_sym_PIPE_PIPE,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(500), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(504), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(524), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(172), 3,
      sym__template_directive_end,
      anon_sym_QMARK,
      sym__strip_marker,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [15728] = 14,
    ACTIONS(502), 1,
      anon_sym_SLASH,
    ACTIONS(534), 1,
      anon_sym_AMP_AMP,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(500), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(504), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(506), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(508), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(524), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(307), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(302), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(204), 6,
      sym__template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym__strip_marker,
  [15786] = 8,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
    ACTIONS(541), 1,
      anon_sym_DOT,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(284), 17,
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
  [15832] = 18,
    ACTIONS(514), 1,
      anon_sym_SLASH,
    ACTIONS(522), 1,
      anon_sym_AMP_AMP,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      anon_sym_DOT_STAR,
    ACTIONS(550), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(552), 1,
      anon_sym_PIPE_PIPE,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(510), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(512), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(516), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(518), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(520), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(297), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(172), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym__strip_marker,
    STATE(294), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [15898] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(223), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(294), 17,
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
  [15944] = 8,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(249), 1,
      sym__new_index,
    STATE(266), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(298), 17,
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
  [15990] = 8,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(302), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [16034] = 8,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_DOT,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(284), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [16078] = 8,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(242), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(294), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [16122] = 8,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(306), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [16166] = 8,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(306), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [16210] = 8,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(247), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(298), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [16254] = 8,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(241), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(294), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [16298] = 8,
    ACTIONS(560), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_DOT,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(245), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(284), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [16342] = 8,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(295), 1,
      sym__new_index,
    STATE(296), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(238), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(298), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [16386] = 8,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(304), 1,
      sym__new_index,
    STATE(305), 1,
      sym__legacy_index,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(302), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [16430] = 5,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__function_call_start,
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
  [16467] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 17,
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
  [16498] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 17,
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
  [16529] = 5,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__function_call_start,
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
      sym__template_directive_end,
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
      sym__strip_marker,
  [16564] = 5,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__function_call_start,
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
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [16599] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 17,
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
  [16630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 17,
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
  [16661] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 17,
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
  [16692] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 17,
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
  [16723] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 17,
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
  [16754] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 17,
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
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 17,
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
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 17,
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
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 17,
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
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 17,
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
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 17,
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
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 17,
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
    ACTIONS(472), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 17,
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
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 17,
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
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 17,
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
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 17,
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
    ACTIONS(452), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 17,
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
    ACTIONS(468), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 17,
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
  [17157] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 17,
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
  [17188] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 17,
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
  [17219] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 17,
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
  [17250] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 17,
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
  [17281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 17,
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
  [17312] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 17,
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
  [17343] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 17,
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
  [17374] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 17,
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
  [17405] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 17,
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
  [17436] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 17,
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
  [17467] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 17,
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
  [17498] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 17,
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
  [17529] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17558] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17587] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17616] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17645] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17674] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17761] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17790] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17819] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [17848] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17906] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17935] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17964] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [17993] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18022] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18051] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18080] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18138] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(424), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18196] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18225] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18283] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18312] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18341] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18370] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18399] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(448), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18428] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(456), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18457] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(464), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18515] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18544] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(470), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18573] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18602] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18631] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(452), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18660] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18689] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18718] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18747] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18776] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18805] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18834] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18863] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(420), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18921] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [18950] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [18979] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [19008] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [19037] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [19066] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19095] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 15,
      sym__template_directive_end,
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
      sym__strip_marker,
  [19124] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19153] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19182] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19211] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19269] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19298] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19327] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19356] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 15,
      sym__template_interpolation_end,
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
      sym__strip_marker,
  [19385] = 3,
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
    ACTIONS(572), 11,
      sym__quoted_template_start,
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
  [19411] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(172), 11,
      sym__quoted_template_start,
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
  [19437] = 4,
    ACTIONS(580), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(576), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19465] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(582), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(588), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(586), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19515] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(594), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(375), 1,
      sym__template_else_intro,
    STATE(485), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(354), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19554] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(596), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(386), 1,
      sym__template_else_intro,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(547), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19593] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(594), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(368), 1,
      sym__template_else_intro,
    STATE(469), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19632] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(596), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(391), 1,
      sym__template_else_intro,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(559), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(353), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19671] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(598), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(373), 1,
      sym__template_else_intro,
    STATE(477), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(357), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19710] = 11,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(598), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(374), 1,
      sym__template_else_intro,
    STATE(449), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19749] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(602), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(600), 8,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19772] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(606), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(604), 8,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19795] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(608), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(548), 1,
      sym__template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19831] = 10,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(616), 1,
      sym__heredoc_identifier,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19867] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(608), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(560), 1,
      sym__template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(360), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19903] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(618), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(452), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19939] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(524), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19975] = 10,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(622), 1,
      sym__quoted_template_end,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20011] = 11,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(628), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(465), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(372), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20049] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(630), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(494), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20085] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(618), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(457), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(385), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20121] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(632), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(447), 1,
      sym__template_for_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(393), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20157] = 10,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(634), 1,
      sym__heredoc_identifier,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20193] = 11,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(636), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(443), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(365), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20231] = 10,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(638), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20267] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(630), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(445), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(367), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20303] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(630), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(487), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(381), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20339] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(618), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(468), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(363), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20375] = 10,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(640), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20411] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(530), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20447] = 10,
    ACTIONS(642), 1,
      sym__template_literal_chunk,
    ACTIONS(645), 1,
      sym__template_interpolation_start,
    ACTIONS(648), 1,
      sym__template_directive_start,
    ACTIONS(651), 1,
      sym__heredoc_identifier,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20483] = 10,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(653), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20519] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(655), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(454), 1,
      sym__template_for_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20555] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(630), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(486), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20591] = 10,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(657), 1,
      sym__heredoc_identifier,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20627] = 10,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(659), 1,
      sym__heredoc_identifier,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20663] = 10,
    ACTIONS(648), 1,
      sym__template_directive_start,
    ACTIONS(651), 1,
      sym__quoted_template_end,
    ACTIONS(661), 1,
      sym__template_literal_chunk,
    ACTIONS(664), 1,
      sym__template_interpolation_start,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20699] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(618), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(437), 1,
      sym__template_if_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20735] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(531), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20771] = 10,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(667), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(384), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20807] = 11,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(669), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(450), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(376), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20845] = 11,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(671), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(482), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(387), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20883] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(655), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(476), 1,
      sym__template_for_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(380), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20919] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(620), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    STATE(546), 1,
      sym__template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(377), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20955] = 10,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(673), 1,
      sym__heredoc_identifier,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(378), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20991] = 10,
    ACTIONS(590), 1,
      sym__template_literal_chunk,
    ACTIONS(592), 1,
      sym__template_interpolation_start,
    ACTIONS(632), 1,
      sym__template_directive_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(470), 1,
      sym__template_for_end,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21027] = 11,
    ACTIONS(614), 1,
      sym__template_directive_start,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    ACTIONS(626), 1,
      sym__template_interpolation_start,
    ACTIONS(675), 1,
      sym__quoted_template_end,
    STATE(356), 1,
      sym__template_if_intro,
    STATE(390), 1,
      sym__template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(499), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(444), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [21065] = 9,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(383), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21098] = 9,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(392), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21131] = 9,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21164] = 9,
    ACTIONS(648), 1,
      sym__template_directive_start,
    ACTIONS(677), 1,
      sym__template_literal_chunk,
    ACTIONS(680), 1,
      sym__template_interpolation_start,
    STATE(355), 1,
      sym__template_if_intro,
    STATE(362), 1,
      sym__template_for_start,
    STATE(497), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(573), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21197] = 9,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(370), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21230] = 9,
    ACTIONS(610), 1,
      sym__template_literal_chunk,
    ACTIONS(612), 1,
      sym__template_interpolation_start,
    ACTIONS(614), 1,
      sym__template_directive_start,
    STATE(352), 1,
      sym__template_if_intro,
    STATE(369), 1,
      sym__template_for_start,
    STATE(428), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(502), 2,
      sym_template_for,
      sym_template_if,
    STATE(361), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [21263] = 3,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 10,
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
  [21283] = 3,
    ACTIONS(574), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 10,
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
  [21303] = 8,
    ACTIONS(683), 1,
      anon_sym_EQ,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(689), 1,
      sym__quoted_template_start,
    STATE(405), 1,
      sym__block_start,
    STATE(409), 1,
      aux_sym_block_repeat1,
    STATE(563), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21329] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    STATE(545), 1,
      sym__block_end,
    STATE(586), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(408), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21351] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
    STATE(514), 1,
      sym__block_end,
    STATE(637), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(408), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21373] = 7,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      sym_ellipsis,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    STATE(29), 1,
      sym__comma,
    STATE(430), 1,
      aux_sym__function_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21396] = 7,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(707), 1,
      sym_ellipsis,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    STATE(216), 1,
      sym__object_end,
    STATE(617), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21419] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(414), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21436] = 7,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(689), 1,
      sym__quoted_template_start,
    ACTIONS(713), 1,
      anon_sym_LBRACE,
    STATE(404), 1,
      sym__block_start,
    STATE(415), 1,
      aux_sym_block_repeat1,
    STATE(563), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21459] = 7,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 1,
      sym_ellipsis,
    STATE(333), 1,
      sym__object_end,
    STATE(581), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21482] = 7,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      sym_ellipsis,
    STATE(267), 1,
      sym__object_end,
    STATE(613), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21505] = 7,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(725), 1,
      sym_ellipsis,
    STATE(332), 1,
      sym__object_end,
    STATE(604), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21528] = 7,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(729), 1,
      sym_ellipsis,
    STATE(157), 1,
      sym__object_end,
    STATE(641), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21551] = 4,
    ACTIONS(733), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(414), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21568] = 6,
    ACTIONS(736), 1,
      anon_sym_LBRACE,
    ACTIONS(738), 1,
      sym_identifier,
    ACTIONS(741), 1,
      sym__quoted_template_start,
    STATE(415), 1,
      aux_sym_block_repeat1,
    STATE(563), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21588] = 4,
    ACTIONS(746), 1,
      sym__template_literal_chunk,
    STATE(416), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(744), 3,
      sym__quoted_template_end,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21604] = 6,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    STATE(327), 1,
      sym__tuple_end,
    STATE(584), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21624] = 6,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym__tuple_end,
    STATE(614), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21644] = 6,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      sym__tuple_end,
    STATE(643), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21664] = 6,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(759), 1,
      sym__strip_marker,
    ACTIONS(761), 1,
      anon_sym_else,
    ACTIONS(763), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21684] = 4,
    ACTIONS(765), 1,
      sym__template_literal_chunk,
    STATE(421), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(744), 3,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21700] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21712] = 5,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      sym__comma,
    STATE(423), 1,
      aux_sym__function_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(768), 2,
      anon_sym_RPAREN,
      sym_ellipsis,
  [21730] = 6,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      sym__comma,
    STATE(434), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21750] = 6,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      sym__tuple_end,
    STATE(601), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21770] = 6,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(761), 1,
      anon_sym_else,
    ACTIONS(779), 1,
      sym__strip_marker,
    ACTIONS(781), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21790] = 6,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(761), 1,
      anon_sym_else,
    ACTIONS(783), 1,
      sym__strip_marker,
    ACTIONS(785), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21810] = 4,
    ACTIONS(787), 1,
      sym__template_literal_chunk,
    STATE(421), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(789), 3,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21826] = 6,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(709), 1,
      anon_sym_QMARK,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym__tuple_end,
    STATE(642), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21846] = 6,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      sym_ellipsis,
    STATE(41), 1,
      sym__comma,
    STATE(423), 1,
      aux_sym__function_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21866] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21878] = 4,
    ACTIONS(799), 1,
      sym__template_literal_chunk,
    STATE(416), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(789), 3,
      sym__quoted_template_end,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [21894] = 5,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      sym__object_end,
    STATE(615), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21911] = 5,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__comma,
    STATE(439), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21928] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(807), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21939] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(809), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21950] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [21961] = 5,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__object_end,
    STATE(640), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21978] = 5,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym__comma,
    STATE(439), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21995] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22006] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(822), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22017] = 5,
    ACTIONS(824), 1,
      sym__quoted_template_end,
    ACTIONS(826), 1,
      sym__template_literal_chunk,
    STATE(509), 1,
      aux_sym_template_literal_repeat1,
    STATE(665), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22034] = 3,
    ACTIONS(828), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(830), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22047] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(832), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22058] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22069] = 5,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      sym__object_end,
    STATE(580), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22086] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(838), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22097] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(822), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(840), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22119] = 3,
    ACTIONS(842), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(830), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22132] = 5,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(781), 1,
      anon_sym_endif,
    ACTIONS(844), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22149] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(846), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22160] = 5,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(852), 1,
      anon_sym_else,
    ACTIONS(854), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22177] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(856), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22188] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22199] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(858), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22210] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(860), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22221] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(862), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22232] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(864), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22243] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(866), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22254] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(868), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22265] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(870), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22276] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(870), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22287] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(868), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22298] = 3,
    ACTIONS(872), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(830), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22311] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(866), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22322] = 5,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(874), 1,
      sym__strip_marker,
    ACTIONS(876), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22339] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22350] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(840), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22361] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(856), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22372] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(878), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22383] = 5,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(852), 1,
      anon_sym_else,
    ACTIONS(880), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22400] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(882), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22411] = 5,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(785), 1,
      anon_sym_endif,
    ACTIONS(884), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22428] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(878), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22439] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(838), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22450] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(886), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22461] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(882), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22472] = 5,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(763), 1,
      anon_sym_endif,
    ACTIONS(888), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22489] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(864), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22500] = 5,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(890), 1,
      sym__strip_marker,
    ACTIONS(892), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22517] = 3,
    ACTIONS(894), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(830), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22530] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(862), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22541] = 5,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym__object_end,
    STATE(594), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22558] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(886), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22569] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22580] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(860), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22591] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(858), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22602] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(809), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22613] = 4,
    ACTIONS(898), 1,
      sym__template_literal_chunk,
    STATE(490), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(744), 2,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22628] = 5,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(852), 1,
      anon_sym_else,
    ACTIONS(901), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22645] = 5,
    ACTIONS(705), 1,
      anon_sym_if,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym__object_end,
    STATE(609), 1,
      sym__for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22662] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(905), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22675] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(846), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22686] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(907), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [22699] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(807), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22710] = 4,
    ACTIONS(909), 1,
      sym__template_literal_chunk,
    STATE(490), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(789), 2,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22725] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22736] = 3,
    ACTIONS(913), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(830), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22749] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 4,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22760] = 5,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(915), 1,
      sym__strip_marker,
    ACTIONS(917), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22777] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(832), 4,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
      sym__heredoc_identifier,
  [22788] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(919), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22798] = 4,
    ACTIONS(921), 1,
      anon_sym_QMARK,
    ACTIONS(923), 1,
      sym__strip_marker,
    ACTIONS(925), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22812] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(927), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [22824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(929), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22834] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22844] = 4,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(931), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22858] = 4,
    ACTIONS(789), 1,
      sym__quoted_template_end,
    ACTIONS(933), 1,
      sym__template_literal_chunk,
    STATE(567), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22872] = 4,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(854), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22886] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(935), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22896] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 3,
      sym__template_directive_end,
      anon_sym_QMARK,
      sym__strip_marker,
  [22906] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(937), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(939), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22926] = 4,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(901), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22940] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(941), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22950] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(943), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22960] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(945), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22970] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(822), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [22980] = 4,
    ACTIONS(921), 1,
      anon_sym_QMARK,
    ACTIONS(947), 1,
      sym__strip_marker,
    ACTIONS(949), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22994] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23004] = 4,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(951), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23018] = 4,
    ACTIONS(953), 1,
      anon_sym_QMARK,
    ACTIONS(955), 1,
      sym__strip_marker,
    ACTIONS(957), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23032] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(811), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23042] = 4,
    ACTIONS(755), 1,
      anon_sym_for,
    ACTIONS(757), 1,
      anon_sym_if,
    ACTIONS(959), 1,
      sym__strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(809), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23066] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(807), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23086] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym__strip_marker,
  [23096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(846), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23106] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(860), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23116] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(862), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23126] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(864), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23136] = 4,
    ACTIONS(953), 1,
      anon_sym_QMARK,
    ACTIONS(961), 1,
      sym__strip_marker,
    ACTIONS(963), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(866), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23160] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(868), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23170] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(870), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23180] = 4,
    ACTIONS(921), 1,
      anon_sym_QMARK,
    ACTIONS(965), 1,
      sym__strip_marker,
    ACTIONS(967), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23194] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(969), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23204] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(971), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [23216] = 4,
    ACTIONS(921), 1,
      anon_sym_QMARK,
    ACTIONS(973), 1,
      sym__strip_marker,
    ACTIONS(975), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23230] = 4,
    ACTIONS(953), 1,
      anon_sym_QMARK,
    ACTIONS(977), 1,
      sym__strip_marker,
    ACTIONS(979), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23244] = 4,
    ACTIONS(953), 1,
      anon_sym_QMARK,
    ACTIONS(981), 1,
      sym__strip_marker,
    ACTIONS(983), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23258] = 4,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(985), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23272] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(987), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23282] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23292] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(840), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(856), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23312] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(878), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23322] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(882), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23332] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(989), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [23342] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(991), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23352] = 4,
    ACTIONS(953), 1,
      anon_sym_QMARK,
    ACTIONS(993), 1,
      sym__strip_marker,
    ACTIONS(995), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23366] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(997), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23376] = 4,
    ACTIONS(953), 1,
      anon_sym_QMARK,
    ACTIONS(999), 1,
      sym__strip_marker,
    ACTIONS(1001), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23390] = 4,
    ACTIONS(921), 1,
      anon_sym_QMARK,
    ACTIONS(1003), 1,
      sym__strip_marker,
    ACTIONS(1005), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23404] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1007), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23414] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 3,
      sym__template_directive_end,
      anon_sym_QMARK,
      sym__strip_marker,
  [23424] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(886), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23434] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(838), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23444] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(858), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23454] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1009), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23464] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1011), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [23474] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1013), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23484] = 4,
    ACTIONS(921), 1,
      anon_sym_QMARK,
    ACTIONS(1015), 1,
      sym__strip_marker,
    ACTIONS(1017), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23498] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1019), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23508] = 4,
    ACTIONS(744), 1,
      sym__quoted_template_end,
    ACTIONS(1021), 1,
      sym__template_literal_chunk,
    STATE(567), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23522] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(466), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [23532] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1024), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23542] = 4,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(880), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23556] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1026), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23566] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1028), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [23578] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(832), 3,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
      sym__template_directive_start,
  [23588] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(172), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym__strip_marker,
  [23598] = 3,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23609] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1034), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23620] = 3,
    ACTIONS(1036), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23631] = 3,
    ACTIONS(1038), 1,
      sym_identifier,
    ACTIONS(1040), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23642] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23653] = 3,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23664] = 3,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23675] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1048), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23686] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1050), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23697] = 3,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23708] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1054), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23719] = 3,
    ACTIONS(1056), 1,
      anon_sym_RBRACE,
    STATE(518), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23730] = 3,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23741] = 3,
    ACTIONS(1060), 1,
      sym__strip_marker,
    ACTIONS(1062), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23752] = 3,
    ACTIONS(1064), 1,
      sym__strip_marker,
    ACTIONS(1066), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23763] = 3,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23774] = 3,
    ACTIONS(848), 1,
      anon_sym_for,
    ACTIONS(850), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23785] = 3,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23796] = 3,
    ACTIONS(1072), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23807] = 3,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23818] = 3,
    ACTIONS(1076), 1,
      sym__strip_marker,
    ACTIONS(1078), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23829] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1080), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23840] = 3,
    ACTIONS(1082), 1,
      sym__strip_marker,
    ACTIONS(1084), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23851] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1086), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23862] = 3,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23873] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1090), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23884] = 3,
    ACTIONS(1092), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23895] = 3,
    ACTIONS(1094), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23906] = 3,
    ACTIONS(1096), 1,
      sym__strip_marker,
    ACTIONS(1098), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23917] = 3,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23928] = 3,
    ACTIONS(1102), 1,
      sym_identifier,
    ACTIONS(1104), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23939] = 3,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23950] = 3,
    ACTIONS(1108), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23961] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1112), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23972] = 3,
    ACTIONS(1114), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23983] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23994] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24005] = 3,
    ACTIONS(1120), 1,
      sym_identifier,
    ACTIONS(1122), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24016] = 3,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24027] = 3,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24038] = 3,
    ACTIONS(1128), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24049] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1130), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24060] = 3,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24071] = 3,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24082] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1136), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24093] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24104] = 3,
    ACTIONS(1140), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24115] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24126] = 3,
    ACTIONS(1144), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24137] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1146), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24148] = 3,
    ACTIONS(1148), 1,
      sym__strip_marker,
    ACTIONS(1150), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24159] = 3,
    ACTIONS(1152), 1,
      sym__strip_marker,
    ACTIONS(1154), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24170] = 3,
    ACTIONS(1156), 1,
      sym__strip_marker,
    ACTIONS(1158), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24181] = 3,
    ACTIONS(1160), 1,
      sym__strip_marker,
    ACTIONS(1162), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24192] = 3,
    ACTIONS(1164), 1,
      sym__strip_marker,
    ACTIONS(1166), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24203] = 3,
    ACTIONS(1168), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24214] = 3,
    ACTIONS(1170), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24225] = 3,
    ACTIONS(1172), 1,
      sym__strip_marker,
    ACTIONS(1174), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24236] = 3,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24247] = 3,
    ACTIONS(1178), 1,
      sym__strip_marker,
    ACTIONS(1180), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24258] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1182), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24269] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1184), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24280] = 3,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    STATE(551), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24291] = 3,
    ACTIONS(1188), 1,
      sym_identifier,
    ACTIONS(1190), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24302] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24313] = 3,
    ACTIONS(1194), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24324] = 3,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24335] = 3,
    ACTIONS(1198), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24346] = 3,
    ACTIONS(1200), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24357] = 3,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24368] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24379] = 3,
    ACTIONS(1206), 1,
      sym_identifier,
    ACTIONS(1208), 1,
      aux_sym__legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24390] = 3,
    ACTIONS(1210), 1,
      sym__strip_marker,
    ACTIONS(1212), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24401] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1214), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24412] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24423] = 3,
    ACTIONS(1218), 1,
      sym__strip_marker,
    ACTIONS(1220), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24434] = 3,
    ACTIONS(1222), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24445] = 2,
    ACTIONS(1226), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24453] = 2,
    ACTIONS(1220), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24461] = 2,
    ACTIONS(1228), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24469] = 2,
    ACTIONS(1230), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24477] = 2,
    ACTIONS(1212), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24485] = 2,
    ACTIONS(1232), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24493] = 2,
    ACTIONS(1234), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24501] = 2,
    ACTIONS(1236), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24509] = 2,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24517] = 2,
    ACTIONS(1180), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24525] = 2,
    ACTIONS(1098), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24533] = 2,
    ACTIONS(1174), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24541] = 2,
    ACTIONS(1238), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24549] = 2,
    ACTIONS(1240), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24557] = 2,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24565] = 2,
    ACTIONS(1242), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24573] = 2,
    ACTIONS(1244), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24581] = 2,
    ACTIONS(1246), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24589] = 2,
    ACTIONS(1248), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24597] = 2,
    ACTIONS(1250), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24605] = 2,
    ACTIONS(1252), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24613] = 2,
    ACTIONS(1254), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24621] = 2,
    ACTIONS(1256), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24629] = 2,
    ACTIONS(1258), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24637] = 2,
    ACTIONS(1260), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24645] = 2,
    ACTIONS(1262), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24653] = 2,
    ACTIONS(1264), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24661] = 2,
    ACTIONS(1266), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24669] = 2,
    ACTIONS(1268), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24677] = 2,
    ACTIONS(1270), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24685] = 2,
    ACTIONS(1272), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24693] = 2,
    ACTIONS(1274), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24701] = 2,
    ACTIONS(1276), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24709] = 2,
    ACTIONS(1084), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24717] = 2,
    ACTIONS(1078), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24725] = 2,
    ACTIONS(1278), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24733] = 2,
    ACTIONS(1280), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24741] = 2,
    ACTIONS(1282), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24749] = 2,
    ACTIONS(1284), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24757] = 2,
    ACTIONS(1286), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24765] = 2,
    ACTIONS(1288), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24773] = 2,
    ACTIONS(1290), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24781] = 2,
    ACTIONS(1292), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24789] = 2,
    ACTIONS(1294), 1,
      sym__template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24797] = 2,
    ACTIONS(1296), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24805] = 2,
    ACTIONS(1298), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24813] = 2,
    ACTIONS(1300), 1,
      sym__heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24821] = 2,
    ACTIONS(1302), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 214,
  [SMALL_STATE(5)] = 321,
  [SMALL_STATE(6)] = 428,
  [SMALL_STATE(7)] = 535,
  [SMALL_STATE(8)] = 639,
  [SMALL_STATE(9)] = 743,
  [SMALL_STATE(10)] = 847,
  [SMALL_STATE(11)] = 951,
  [SMALL_STATE(12)] = 1055,
  [SMALL_STATE(13)] = 1159,
  [SMALL_STATE(14)] = 1263,
  [SMALL_STATE(15)] = 1367,
  [SMALL_STATE(16)] = 1468,
  [SMALL_STATE(17)] = 1566,
  [SMALL_STATE(18)] = 1664,
  [SMALL_STATE(19)] = 1762,
  [SMALL_STATE(20)] = 1860,
  [SMALL_STATE(21)] = 1958,
  [SMALL_STATE(22)] = 2053,
  [SMALL_STATE(23)] = 2148,
  [SMALL_STATE(24)] = 2243,
  [SMALL_STATE(25)] = 2338,
  [SMALL_STATE(26)] = 2433,
  [SMALL_STATE(27)] = 2528,
  [SMALL_STATE(28)] = 2623,
  [SMALL_STATE(29)] = 2718,
  [SMALL_STATE(30)] = 2810,
  [SMALL_STATE(31)] = 2902,
  [SMALL_STATE(32)] = 2982,
  [SMALL_STATE(33)] = 3074,
  [SMALL_STATE(34)] = 3130,
  [SMALL_STATE(35)] = 3200,
  [SMALL_STATE(36)] = 3268,
  [SMALL_STATE(37)] = 3334,
  [SMALL_STATE(38)] = 3396,
  [SMALL_STATE(39)] = 3452,
  [SMALL_STATE(40)] = 3512,
  [SMALL_STATE(41)] = 3604,
  [SMALL_STATE(42)] = 3696,
  [SMALL_STATE(43)] = 3785,
  [SMALL_STATE(44)] = 3874,
  [SMALL_STATE(45)] = 3963,
  [SMALL_STATE(46)] = 4052,
  [SMALL_STATE(47)] = 4141,
  [SMALL_STATE(48)] = 4230,
  [SMALL_STATE(49)] = 4319,
  [SMALL_STATE(50)] = 4408,
  [SMALL_STATE(51)] = 4497,
  [SMALL_STATE(52)] = 4586,
  [SMALL_STATE(53)] = 4675,
  [SMALL_STATE(54)] = 4764,
  [SMALL_STATE(55)] = 4853,
  [SMALL_STATE(56)] = 4942,
  [SMALL_STATE(57)] = 5031,
  [SMALL_STATE(58)] = 5120,
  [SMALL_STATE(59)] = 5209,
  [SMALL_STATE(60)] = 5298,
  [SMALL_STATE(61)] = 5387,
  [SMALL_STATE(62)] = 5476,
  [SMALL_STATE(63)] = 5565,
  [SMALL_STATE(64)] = 5654,
  [SMALL_STATE(65)] = 5743,
  [SMALL_STATE(66)] = 5832,
  [SMALL_STATE(67)] = 5921,
  [SMALL_STATE(68)] = 6010,
  [SMALL_STATE(69)] = 6099,
  [SMALL_STATE(70)] = 6188,
  [SMALL_STATE(71)] = 6277,
  [SMALL_STATE(72)] = 6366,
  [SMALL_STATE(73)] = 6455,
  [SMALL_STATE(74)] = 6544,
  [SMALL_STATE(75)] = 6633,
  [SMALL_STATE(76)] = 6722,
  [SMALL_STATE(77)] = 6811,
  [SMALL_STATE(78)] = 6900,
  [SMALL_STATE(79)] = 6989,
  [SMALL_STATE(80)] = 7078,
  [SMALL_STATE(81)] = 7167,
  [SMALL_STATE(82)] = 7256,
  [SMALL_STATE(83)] = 7345,
  [SMALL_STATE(84)] = 7434,
  [SMALL_STATE(85)] = 7523,
  [SMALL_STATE(86)] = 7612,
  [SMALL_STATE(87)] = 7701,
  [SMALL_STATE(88)] = 7790,
  [SMALL_STATE(89)] = 7879,
  [SMALL_STATE(90)] = 7968,
  [SMALL_STATE(91)] = 8024,
  [SMALL_STATE(92)] = 8080,
  [SMALL_STATE(93)] = 8136,
  [SMALL_STATE(94)] = 8192,
  [SMALL_STATE(95)] = 8248,
  [SMALL_STATE(96)] = 8331,
  [SMALL_STATE(97)] = 8414,
  [SMALL_STATE(98)] = 8497,
  [SMALL_STATE(99)] = 8580,
  [SMALL_STATE(100)] = 8663,
  [SMALL_STATE(101)] = 8746,
  [SMALL_STATE(102)] = 8829,
  [SMALL_STATE(103)] = 8912,
  [SMALL_STATE(104)] = 8995,
  [SMALL_STATE(105)] = 9078,
  [SMALL_STATE(106)] = 9161,
  [SMALL_STATE(107)] = 9244,
  [SMALL_STATE(108)] = 9327,
  [SMALL_STATE(109)] = 9410,
  [SMALL_STATE(110)] = 9493,
  [SMALL_STATE(111)] = 9576,
  [SMALL_STATE(112)] = 9659,
  [SMALL_STATE(113)] = 9742,
  [SMALL_STATE(114)] = 9825,
  [SMALL_STATE(115)] = 9908,
  [SMALL_STATE(116)] = 9991,
  [SMALL_STATE(117)] = 10074,
  [SMALL_STATE(118)] = 10157,
  [SMALL_STATE(119)] = 10240,
  [SMALL_STATE(120)] = 10323,
  [SMALL_STATE(121)] = 10406,
  [SMALL_STATE(122)] = 10489,
  [SMALL_STATE(123)] = 10572,
  [SMALL_STATE(124)] = 10655,
  [SMALL_STATE(125)] = 10738,
  [SMALL_STATE(126)] = 10821,
  [SMALL_STATE(127)] = 10904,
  [SMALL_STATE(128)] = 10987,
  [SMALL_STATE(129)] = 11070,
  [SMALL_STATE(130)] = 11153,
  [SMALL_STATE(131)] = 11205,
  [SMALL_STATE(132)] = 11271,
  [SMALL_STATE(133)] = 11335,
  [SMALL_STATE(134)] = 11397,
  [SMALL_STATE(135)] = 11455,
  [SMALL_STATE(136)] = 11507,
  [SMALL_STATE(137)] = 11563,
  [SMALL_STATE(138)] = 11639,
  [SMALL_STATE(139)] = 11691,
  [SMALL_STATE(140)] = 11743,
  [SMALL_STATE(141)] = 11795,
  [SMALL_STATE(142)] = 11847,
  [SMALL_STATE(143)] = 11899,
  [SMALL_STATE(144)] = 11945,
  [SMALL_STATE(145)] = 11986,
  [SMALL_STATE(146)] = 12027,
  [SMALL_STATE(147)] = 12068,
  [SMALL_STATE(148)] = 12109,
  [SMALL_STATE(149)] = 12150,
  [SMALL_STATE(150)] = 12191,
  [SMALL_STATE(151)] = 12232,
  [SMALL_STATE(152)] = 12273,
  [SMALL_STATE(153)] = 12314,
  [SMALL_STATE(154)] = 12355,
  [SMALL_STATE(155)] = 12396,
  [SMALL_STATE(156)] = 12437,
  [SMALL_STATE(157)] = 12478,
  [SMALL_STATE(158)] = 12519,
  [SMALL_STATE(159)] = 12560,
  [SMALL_STATE(160)] = 12601,
  [SMALL_STATE(161)] = 12642,
  [SMALL_STATE(162)] = 12683,
  [SMALL_STATE(163)] = 12724,
  [SMALL_STATE(164)] = 12765,
  [SMALL_STATE(165)] = 12806,
  [SMALL_STATE(166)] = 12847,
  [SMALL_STATE(167)] = 12888,
  [SMALL_STATE(168)] = 12929,
  [SMALL_STATE(169)] = 12970,
  [SMALL_STATE(170)] = 13011,
  [SMALL_STATE(171)] = 13052,
  [SMALL_STATE(172)] = 13093,
  [SMALL_STATE(173)] = 13134,
  [SMALL_STATE(174)] = 13175,
  [SMALL_STATE(175)] = 13216,
  [SMALL_STATE(176)] = 13257,
  [SMALL_STATE(177)] = 13300,
  [SMALL_STATE(178)] = 13360,
  [SMALL_STATE(179)] = 13418,
  [SMALL_STATE(180)] = 13464,
  [SMALL_STATE(181)] = 13510,
  [SMALL_STATE(182)] = 13578,
  [SMALL_STATE(183)] = 13630,
  [SMALL_STATE(184)] = 13680,
  [SMALL_STATE(185)] = 13736,
  [SMALL_STATE(186)] = 13773,
  [SMALL_STATE(187)] = 13810,
  [SMALL_STATE(188)] = 13847,
  [SMALL_STATE(189)] = 13884,
  [SMALL_STATE(190)] = 13921,
  [SMALL_STATE(191)] = 13958,
  [SMALL_STATE(192)] = 13995,
  [SMALL_STATE(193)] = 14032,
  [SMALL_STATE(194)] = 14069,
  [SMALL_STATE(195)] = 14106,
  [SMALL_STATE(196)] = 14143,
  [SMALL_STATE(197)] = 14180,
  [SMALL_STATE(198)] = 14217,
  [SMALL_STATE(199)] = 14254,
  [SMALL_STATE(200)] = 14291,
  [SMALL_STATE(201)] = 14328,
  [SMALL_STATE(202)] = 14365,
  [SMALL_STATE(203)] = 14402,
  [SMALL_STATE(204)] = 14439,
  [SMALL_STATE(205)] = 14476,
  [SMALL_STATE(206)] = 14513,
  [SMALL_STATE(207)] = 14550,
  [SMALL_STATE(208)] = 14587,
  [SMALL_STATE(209)] = 14624,
  [SMALL_STATE(210)] = 14661,
  [SMALL_STATE(211)] = 14698,
  [SMALL_STATE(212)] = 14735,
  [SMALL_STATE(213)] = 14772,
  [SMALL_STATE(214)] = 14809,
  [SMALL_STATE(215)] = 14846,
  [SMALL_STATE(216)] = 14883,
  [SMALL_STATE(217)] = 14920,
  [SMALL_STATE(218)] = 14968,
  [SMALL_STATE(219)] = 15012,
  [SMALL_STATE(220)] = 15056,
  [SMALL_STATE(221)] = 15102,
  [SMALL_STATE(222)] = 15152,
  [SMALL_STATE(223)] = 15196,
  [SMALL_STATE(224)] = 15242,
  [SMALL_STATE(225)] = 15296,
  [SMALL_STATE(226)] = 15354,
  [SMALL_STATE(227)] = 15410,
  [SMALL_STATE(228)] = 15464,
  [SMALL_STATE(229)] = 15514,
  [SMALL_STATE(230)] = 15558,
  [SMALL_STATE(231)] = 15606,
  [SMALL_STATE(232)] = 15662,
  [SMALL_STATE(233)] = 15728,
  [SMALL_STATE(234)] = 15786,
  [SMALL_STATE(235)] = 15832,
  [SMALL_STATE(236)] = 15898,
  [SMALL_STATE(237)] = 15944,
  [SMALL_STATE(238)] = 15990,
  [SMALL_STATE(239)] = 16034,
  [SMALL_STATE(240)] = 16078,
  [SMALL_STATE(241)] = 16122,
  [SMALL_STATE(242)] = 16166,
  [SMALL_STATE(243)] = 16210,
  [SMALL_STATE(244)] = 16254,
  [SMALL_STATE(245)] = 16298,
  [SMALL_STATE(246)] = 16342,
  [SMALL_STATE(247)] = 16386,
  [SMALL_STATE(248)] = 16430,
  [SMALL_STATE(249)] = 16467,
  [SMALL_STATE(250)] = 16498,
  [SMALL_STATE(251)] = 16529,
  [SMALL_STATE(252)] = 16564,
  [SMALL_STATE(253)] = 16599,
  [SMALL_STATE(254)] = 16630,
  [SMALL_STATE(255)] = 16661,
  [SMALL_STATE(256)] = 16692,
  [SMALL_STATE(257)] = 16723,
  [SMALL_STATE(258)] = 16754,
  [SMALL_STATE(259)] = 16785,
  [SMALL_STATE(260)] = 16816,
  [SMALL_STATE(261)] = 16847,
  [SMALL_STATE(262)] = 16878,
  [SMALL_STATE(263)] = 16909,
  [SMALL_STATE(264)] = 16940,
  [SMALL_STATE(265)] = 16971,
  [SMALL_STATE(266)] = 17002,
  [SMALL_STATE(267)] = 17033,
  [SMALL_STATE(268)] = 17064,
  [SMALL_STATE(269)] = 17095,
  [SMALL_STATE(270)] = 17126,
  [SMALL_STATE(271)] = 17157,
  [SMALL_STATE(272)] = 17188,
  [SMALL_STATE(273)] = 17219,
  [SMALL_STATE(274)] = 17250,
  [SMALL_STATE(275)] = 17281,
  [SMALL_STATE(276)] = 17312,
  [SMALL_STATE(277)] = 17343,
  [SMALL_STATE(278)] = 17374,
  [SMALL_STATE(279)] = 17405,
  [SMALL_STATE(280)] = 17436,
  [SMALL_STATE(281)] = 17467,
  [SMALL_STATE(282)] = 17498,
  [SMALL_STATE(283)] = 17529,
  [SMALL_STATE(284)] = 17558,
  [SMALL_STATE(285)] = 17587,
  [SMALL_STATE(286)] = 17616,
  [SMALL_STATE(287)] = 17645,
  [SMALL_STATE(288)] = 17674,
  [SMALL_STATE(289)] = 17703,
  [SMALL_STATE(290)] = 17732,
  [SMALL_STATE(291)] = 17761,
  [SMALL_STATE(292)] = 17790,
  [SMALL_STATE(293)] = 17819,
  [SMALL_STATE(294)] = 17848,
  [SMALL_STATE(295)] = 17877,
  [SMALL_STATE(296)] = 17906,
  [SMALL_STATE(297)] = 17935,
  [SMALL_STATE(298)] = 17964,
  [SMALL_STATE(299)] = 17993,
  [SMALL_STATE(300)] = 18022,
  [SMALL_STATE(301)] = 18051,
  [SMALL_STATE(302)] = 18080,
  [SMALL_STATE(303)] = 18109,
  [SMALL_STATE(304)] = 18138,
  [SMALL_STATE(305)] = 18167,
  [SMALL_STATE(306)] = 18196,
  [SMALL_STATE(307)] = 18225,
  [SMALL_STATE(308)] = 18254,
  [SMALL_STATE(309)] = 18283,
  [SMALL_STATE(310)] = 18312,
  [SMALL_STATE(311)] = 18341,
  [SMALL_STATE(312)] = 18370,
  [SMALL_STATE(313)] = 18399,
  [SMALL_STATE(314)] = 18428,
  [SMALL_STATE(315)] = 18457,
  [SMALL_STATE(316)] = 18486,
  [SMALL_STATE(317)] = 18515,
  [SMALL_STATE(318)] = 18544,
  [SMALL_STATE(319)] = 18573,
  [SMALL_STATE(320)] = 18602,
  [SMALL_STATE(321)] = 18631,
  [SMALL_STATE(322)] = 18660,
  [SMALL_STATE(323)] = 18689,
  [SMALL_STATE(324)] = 18718,
  [SMALL_STATE(325)] = 18747,
  [SMALL_STATE(326)] = 18776,
  [SMALL_STATE(327)] = 18805,
  [SMALL_STATE(328)] = 18834,
  [SMALL_STATE(329)] = 18863,
  [SMALL_STATE(330)] = 18892,
  [SMALL_STATE(331)] = 18921,
  [SMALL_STATE(332)] = 18950,
  [SMALL_STATE(333)] = 18979,
  [SMALL_STATE(334)] = 19008,
  [SMALL_STATE(335)] = 19037,
  [SMALL_STATE(336)] = 19066,
  [SMALL_STATE(337)] = 19095,
  [SMALL_STATE(338)] = 19124,
  [SMALL_STATE(339)] = 19153,
  [SMALL_STATE(340)] = 19182,
  [SMALL_STATE(341)] = 19211,
  [SMALL_STATE(342)] = 19240,
  [SMALL_STATE(343)] = 19269,
  [SMALL_STATE(344)] = 19298,
  [SMALL_STATE(345)] = 19327,
  [SMALL_STATE(346)] = 19356,
  [SMALL_STATE(347)] = 19385,
  [SMALL_STATE(348)] = 19411,
  [SMALL_STATE(349)] = 19437,
  [SMALL_STATE(350)] = 19465,
  [SMALL_STATE(351)] = 19490,
  [SMALL_STATE(352)] = 19515,
  [SMALL_STATE(353)] = 19554,
  [SMALL_STATE(354)] = 19593,
  [SMALL_STATE(355)] = 19632,
  [SMALL_STATE(356)] = 19671,
  [SMALL_STATE(357)] = 19710,
  [SMALL_STATE(358)] = 19749,
  [SMALL_STATE(359)] = 19772,
  [SMALL_STATE(360)] = 19795,
  [SMALL_STATE(361)] = 19831,
  [SMALL_STATE(362)] = 19867,
  [SMALL_STATE(363)] = 19903,
  [SMALL_STATE(364)] = 19939,
  [SMALL_STATE(365)] = 19975,
  [SMALL_STATE(366)] = 20011,
  [SMALL_STATE(367)] = 20049,
  [SMALL_STATE(368)] = 20085,
  [SMALL_STATE(369)] = 20121,
  [SMALL_STATE(370)] = 20157,
  [SMALL_STATE(371)] = 20193,
  [SMALL_STATE(372)] = 20231,
  [SMALL_STATE(373)] = 20267,
  [SMALL_STATE(374)] = 20303,
  [SMALL_STATE(375)] = 20339,
  [SMALL_STATE(376)] = 20375,
  [SMALL_STATE(377)] = 20411,
  [SMALL_STATE(378)] = 20447,
  [SMALL_STATE(379)] = 20483,
  [SMALL_STATE(380)] = 20519,
  [SMALL_STATE(381)] = 20555,
  [SMALL_STATE(382)] = 20591,
  [SMALL_STATE(383)] = 20627,
  [SMALL_STATE(384)] = 20663,
  [SMALL_STATE(385)] = 20699,
  [SMALL_STATE(386)] = 20735,
  [SMALL_STATE(387)] = 20771,
  [SMALL_STATE(388)] = 20807,
  [SMALL_STATE(389)] = 20845,
  [SMALL_STATE(390)] = 20883,
  [SMALL_STATE(391)] = 20919,
  [SMALL_STATE(392)] = 20955,
  [SMALL_STATE(393)] = 20991,
  [SMALL_STATE(394)] = 21027,
  [SMALL_STATE(395)] = 21065,
  [SMALL_STATE(396)] = 21098,
  [SMALL_STATE(397)] = 21131,
  [SMALL_STATE(398)] = 21164,
  [SMALL_STATE(399)] = 21197,
  [SMALL_STATE(400)] = 21230,
  [SMALL_STATE(401)] = 21263,
  [SMALL_STATE(402)] = 21283,
  [SMALL_STATE(403)] = 21303,
  [SMALL_STATE(404)] = 21329,
  [SMALL_STATE(405)] = 21351,
  [SMALL_STATE(406)] = 21373,
  [SMALL_STATE(407)] = 21396,
  [SMALL_STATE(408)] = 21419,
  [SMALL_STATE(409)] = 21436,
  [SMALL_STATE(410)] = 21459,
  [SMALL_STATE(411)] = 21482,
  [SMALL_STATE(412)] = 21505,
  [SMALL_STATE(413)] = 21528,
  [SMALL_STATE(414)] = 21551,
  [SMALL_STATE(415)] = 21568,
  [SMALL_STATE(416)] = 21588,
  [SMALL_STATE(417)] = 21604,
  [SMALL_STATE(418)] = 21624,
  [SMALL_STATE(419)] = 21644,
  [SMALL_STATE(420)] = 21664,
  [SMALL_STATE(421)] = 21684,
  [SMALL_STATE(422)] = 21700,
  [SMALL_STATE(423)] = 21712,
  [SMALL_STATE(424)] = 21730,
  [SMALL_STATE(425)] = 21750,
  [SMALL_STATE(426)] = 21770,
  [SMALL_STATE(427)] = 21790,
  [SMALL_STATE(428)] = 21810,
  [SMALL_STATE(429)] = 21826,
  [SMALL_STATE(430)] = 21846,
  [SMALL_STATE(431)] = 21866,
  [SMALL_STATE(432)] = 21878,
  [SMALL_STATE(433)] = 21894,
  [SMALL_STATE(434)] = 21911,
  [SMALL_STATE(435)] = 21928,
  [SMALL_STATE(436)] = 21939,
  [SMALL_STATE(437)] = 21950,
  [SMALL_STATE(438)] = 21961,
  [SMALL_STATE(439)] = 21978,
  [SMALL_STATE(440)] = 21995,
  [SMALL_STATE(441)] = 22006,
  [SMALL_STATE(442)] = 22017,
  [SMALL_STATE(443)] = 22034,
  [SMALL_STATE(444)] = 22047,
  [SMALL_STATE(445)] = 22058,
  [SMALL_STATE(446)] = 22069,
  [SMALL_STATE(447)] = 22086,
  [SMALL_STATE(448)] = 22097,
  [SMALL_STATE(449)] = 22108,
  [SMALL_STATE(450)] = 22119,
  [SMALL_STATE(451)] = 22132,
  [SMALL_STATE(452)] = 22149,
  [SMALL_STATE(453)] = 22160,
  [SMALL_STATE(454)] = 22177,
  [SMALL_STATE(455)] = 22188,
  [SMALL_STATE(456)] = 22199,
  [SMALL_STATE(457)] = 22210,
  [SMALL_STATE(458)] = 22221,
  [SMALL_STATE(459)] = 22232,
  [SMALL_STATE(460)] = 22243,
  [SMALL_STATE(461)] = 22254,
  [SMALL_STATE(462)] = 22265,
  [SMALL_STATE(463)] = 22276,
  [SMALL_STATE(464)] = 22287,
  [SMALL_STATE(465)] = 22298,
  [SMALL_STATE(466)] = 22311,
  [SMALL_STATE(467)] = 22322,
  [SMALL_STATE(468)] = 22339,
  [SMALL_STATE(469)] = 22350,
  [SMALL_STATE(470)] = 22361,
  [SMALL_STATE(471)] = 22372,
  [SMALL_STATE(472)] = 22383,
  [SMALL_STATE(473)] = 22400,
  [SMALL_STATE(474)] = 22411,
  [SMALL_STATE(475)] = 22428,
  [SMALL_STATE(476)] = 22439,
  [SMALL_STATE(477)] = 22450,
  [SMALL_STATE(478)] = 22461,
  [SMALL_STATE(479)] = 22472,
  [SMALL_STATE(480)] = 22489,
  [SMALL_STATE(481)] = 22500,
  [SMALL_STATE(482)] = 22517,
  [SMALL_STATE(483)] = 22530,
  [SMALL_STATE(484)] = 22541,
  [SMALL_STATE(485)] = 22558,
  [SMALL_STATE(486)] = 22569,
  [SMALL_STATE(487)] = 22580,
  [SMALL_STATE(488)] = 22591,
  [SMALL_STATE(489)] = 22602,
  [SMALL_STATE(490)] = 22613,
  [SMALL_STATE(491)] = 22628,
  [SMALL_STATE(492)] = 22645,
  [SMALL_STATE(493)] = 22662,
  [SMALL_STATE(494)] = 22675,
  [SMALL_STATE(495)] = 22686,
  [SMALL_STATE(496)] = 22699,
  [SMALL_STATE(497)] = 22710,
  [SMALL_STATE(498)] = 22725,
  [SMALL_STATE(499)] = 22736,
  [SMALL_STATE(500)] = 22749,
  [SMALL_STATE(501)] = 22760,
  [SMALL_STATE(502)] = 22777,
  [SMALL_STATE(503)] = 22788,
  [SMALL_STATE(504)] = 22798,
  [SMALL_STATE(505)] = 22812,
  [SMALL_STATE(506)] = 22824,
  [SMALL_STATE(507)] = 22834,
  [SMALL_STATE(508)] = 22844,
  [SMALL_STATE(509)] = 22858,
  [SMALL_STATE(510)] = 22872,
  [SMALL_STATE(511)] = 22886,
  [SMALL_STATE(512)] = 22896,
  [SMALL_STATE(513)] = 22906,
  [SMALL_STATE(514)] = 22916,
  [SMALL_STATE(515)] = 22926,
  [SMALL_STATE(516)] = 22940,
  [SMALL_STATE(517)] = 22950,
  [SMALL_STATE(518)] = 22960,
  [SMALL_STATE(519)] = 22970,
  [SMALL_STATE(520)] = 22980,
  [SMALL_STATE(521)] = 22994,
  [SMALL_STATE(522)] = 23004,
  [SMALL_STATE(523)] = 23018,
  [SMALL_STATE(524)] = 23032,
  [SMALL_STATE(525)] = 23042,
  [SMALL_STATE(526)] = 23056,
  [SMALL_STATE(527)] = 23066,
  [SMALL_STATE(528)] = 23076,
  [SMALL_STATE(529)] = 23086,
  [SMALL_STATE(530)] = 23096,
  [SMALL_STATE(531)] = 23106,
  [SMALL_STATE(532)] = 23116,
  [SMALL_STATE(533)] = 23126,
  [SMALL_STATE(534)] = 23136,
  [SMALL_STATE(535)] = 23150,
  [SMALL_STATE(536)] = 23160,
  [SMALL_STATE(537)] = 23170,
  [SMALL_STATE(538)] = 23180,
  [SMALL_STATE(539)] = 23194,
  [SMALL_STATE(540)] = 23204,
  [SMALL_STATE(541)] = 23216,
  [SMALL_STATE(542)] = 23230,
  [SMALL_STATE(543)] = 23244,
  [SMALL_STATE(544)] = 23258,
  [SMALL_STATE(545)] = 23272,
  [SMALL_STATE(546)] = 23282,
  [SMALL_STATE(547)] = 23292,
  [SMALL_STATE(548)] = 23302,
  [SMALL_STATE(549)] = 23312,
  [SMALL_STATE(550)] = 23322,
  [SMALL_STATE(551)] = 23332,
  [SMALL_STATE(552)] = 23342,
  [SMALL_STATE(553)] = 23352,
  [SMALL_STATE(554)] = 23366,
  [SMALL_STATE(555)] = 23376,
  [SMALL_STATE(556)] = 23390,
  [SMALL_STATE(557)] = 23404,
  [SMALL_STATE(558)] = 23414,
  [SMALL_STATE(559)] = 23424,
  [SMALL_STATE(560)] = 23434,
  [SMALL_STATE(561)] = 23444,
  [SMALL_STATE(562)] = 23454,
  [SMALL_STATE(563)] = 23464,
  [SMALL_STATE(564)] = 23474,
  [SMALL_STATE(565)] = 23484,
  [SMALL_STATE(566)] = 23498,
  [SMALL_STATE(567)] = 23508,
  [SMALL_STATE(568)] = 23522,
  [SMALL_STATE(569)] = 23532,
  [SMALL_STATE(570)] = 23542,
  [SMALL_STATE(571)] = 23556,
  [SMALL_STATE(572)] = 23566,
  [SMALL_STATE(573)] = 23578,
  [SMALL_STATE(574)] = 23588,
  [SMALL_STATE(575)] = 23598,
  [SMALL_STATE(576)] = 23609,
  [SMALL_STATE(577)] = 23620,
  [SMALL_STATE(578)] = 23631,
  [SMALL_STATE(579)] = 23642,
  [SMALL_STATE(580)] = 23653,
  [SMALL_STATE(581)] = 23664,
  [SMALL_STATE(582)] = 23675,
  [SMALL_STATE(583)] = 23686,
  [SMALL_STATE(584)] = 23697,
  [SMALL_STATE(585)] = 23708,
  [SMALL_STATE(586)] = 23719,
  [SMALL_STATE(587)] = 23730,
  [SMALL_STATE(588)] = 23741,
  [SMALL_STATE(589)] = 23752,
  [SMALL_STATE(590)] = 23763,
  [SMALL_STATE(591)] = 23774,
  [SMALL_STATE(592)] = 23785,
  [SMALL_STATE(593)] = 23796,
  [SMALL_STATE(594)] = 23807,
  [SMALL_STATE(595)] = 23818,
  [SMALL_STATE(596)] = 23829,
  [SMALL_STATE(597)] = 23840,
  [SMALL_STATE(598)] = 23851,
  [SMALL_STATE(599)] = 23862,
  [SMALL_STATE(600)] = 23873,
  [SMALL_STATE(601)] = 23884,
  [SMALL_STATE(602)] = 23895,
  [SMALL_STATE(603)] = 23906,
  [SMALL_STATE(604)] = 23917,
  [SMALL_STATE(605)] = 23928,
  [SMALL_STATE(606)] = 23939,
  [SMALL_STATE(607)] = 23950,
  [SMALL_STATE(608)] = 23961,
  [SMALL_STATE(609)] = 23972,
  [SMALL_STATE(610)] = 23983,
  [SMALL_STATE(611)] = 23994,
  [SMALL_STATE(612)] = 24005,
  [SMALL_STATE(613)] = 24016,
  [SMALL_STATE(614)] = 24027,
  [SMALL_STATE(615)] = 24038,
  [SMALL_STATE(616)] = 24049,
  [SMALL_STATE(617)] = 24060,
  [SMALL_STATE(618)] = 24071,
  [SMALL_STATE(619)] = 24082,
  [SMALL_STATE(620)] = 24093,
  [SMALL_STATE(621)] = 24104,
  [SMALL_STATE(622)] = 24115,
  [SMALL_STATE(623)] = 24126,
  [SMALL_STATE(624)] = 24137,
  [SMALL_STATE(625)] = 24148,
  [SMALL_STATE(626)] = 24159,
  [SMALL_STATE(627)] = 24170,
  [SMALL_STATE(628)] = 24181,
  [SMALL_STATE(629)] = 24192,
  [SMALL_STATE(630)] = 24203,
  [SMALL_STATE(631)] = 24214,
  [SMALL_STATE(632)] = 24225,
  [SMALL_STATE(633)] = 24236,
  [SMALL_STATE(634)] = 24247,
  [SMALL_STATE(635)] = 24258,
  [SMALL_STATE(636)] = 24269,
  [SMALL_STATE(637)] = 24280,
  [SMALL_STATE(638)] = 24291,
  [SMALL_STATE(639)] = 24302,
  [SMALL_STATE(640)] = 24313,
  [SMALL_STATE(641)] = 24324,
  [SMALL_STATE(642)] = 24335,
  [SMALL_STATE(643)] = 24346,
  [SMALL_STATE(644)] = 24357,
  [SMALL_STATE(645)] = 24368,
  [SMALL_STATE(646)] = 24379,
  [SMALL_STATE(647)] = 24390,
  [SMALL_STATE(648)] = 24401,
  [SMALL_STATE(649)] = 24412,
  [SMALL_STATE(650)] = 24423,
  [SMALL_STATE(651)] = 24434,
  [SMALL_STATE(652)] = 24445,
  [SMALL_STATE(653)] = 24453,
  [SMALL_STATE(654)] = 24461,
  [SMALL_STATE(655)] = 24469,
  [SMALL_STATE(656)] = 24477,
  [SMALL_STATE(657)] = 24485,
  [SMALL_STATE(658)] = 24493,
  [SMALL_STATE(659)] = 24501,
  [SMALL_STATE(660)] = 24509,
  [SMALL_STATE(661)] = 24517,
  [SMALL_STATE(662)] = 24525,
  [SMALL_STATE(663)] = 24533,
  [SMALL_STATE(664)] = 24541,
  [SMALL_STATE(665)] = 24549,
  [SMALL_STATE(666)] = 24557,
  [SMALL_STATE(667)] = 24565,
  [SMALL_STATE(668)] = 24573,
  [SMALL_STATE(669)] = 24581,
  [SMALL_STATE(670)] = 24589,
  [SMALL_STATE(671)] = 24597,
  [SMALL_STATE(672)] = 24605,
  [SMALL_STATE(673)] = 24613,
  [SMALL_STATE(674)] = 24621,
  [SMALL_STATE(675)] = 24629,
  [SMALL_STATE(676)] = 24637,
  [SMALL_STATE(677)] = 24645,
  [SMALL_STATE(678)] = 24653,
  [SMALL_STATE(679)] = 24661,
  [SMALL_STATE(680)] = 24669,
  [SMALL_STATE(681)] = 24677,
  [SMALL_STATE(682)] = 24685,
  [SMALL_STATE(683)] = 24693,
  [SMALL_STATE(684)] = 24701,
  [SMALL_STATE(685)] = 24709,
  [SMALL_STATE(686)] = 24717,
  [SMALL_STATE(687)] = 24725,
  [SMALL_STATE(688)] = 24733,
  [SMALL_STATE(689)] = 24741,
  [SMALL_STATE(690)] = 24749,
  [SMALL_STATE(691)] = 24757,
  [SMALL_STATE(692)] = 24765,
  [SMALL_STATE(693)] = 24773,
  [SMALL_STATE(694)] = 24781,
  [SMALL_STATE(695)] = 24789,
  [SMALL_STATE(696)] = 24797,
  [SMALL_STATE(697)] = 24805,
  [SMALL_STATE(698)] = 24813,
  [SMALL_STATE(699)] = 24821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(176),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(75),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(187),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(199),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(207),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(215),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(32),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(7),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(111),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(674),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(674),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(388),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3, .production_id = 12),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2, .production_id = 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2, .production_id = 17),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3, .production_id = 12),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2, .production_id = 9),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2, .production_id = 9),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 20),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 20),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 3, .production_id = 27),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(70),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(612),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(55),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(605),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1, .production_id = 10),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1, .production_id = 10),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1, .production_id = 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1, .production_id = 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1, .production_id = 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1, .production_id = 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8, .production_id = 47),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8, .production_id = 47),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7, .production_id = 44),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7, .production_id = 44),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7, .production_id = 42),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7, .production_id = 42),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6, .production_id = 42),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6, .production_id = 42),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5, .production_id = 38),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5, .production_id = 38),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4, .production_id = 30),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4, .production_id = 30),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4, .production_id = 29),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4, .production_id = 29),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 11),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, .production_id = 11),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_index, 3, .production_id = 19),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_index, 3, .production_id = 19),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 28),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 28),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 18),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 18),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, .production_id = 11),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, .production_id = 11),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__legacy_index, 2, .production_id = 19),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__legacy_index, 2, .production_id = 19),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(56),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(646),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(87),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(638),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(61),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(578),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5, .production_id = 36),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5, .production_id = 36),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 6),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 6),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 21),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2, .production_id = 21),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 1, .production_id = 5),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 1, .production_id = 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_intro, 5, .production_id = 41),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_intro, 5, .production_id = 41),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_intro, 7, .production_id = 46),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_intro, 7, .production_id = 46),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(428),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(22),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(525),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(432),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(28),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(497),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(25),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 1, .production_id = 17),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(403),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8), SHIFT_REPEAT(563),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8), SHIFT_REPEAT(442),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(416),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(421),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, .production_id = 35),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, .production_id = 35), SHIFT_REPEAT(81),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1, .production_id = 5),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arguments, 2, .production_id = 27),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2, .production_id = 12),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_end, 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_end, 4),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 5, .production_id = 40),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2, .production_id = 22), SHIFT_REPEAT(48),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2, .production_id = 22),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_end, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_end, 5),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3, .production_id = 16),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2, .production_id = 15),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3, .production_id = 26),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 4, .production_id = 33),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3, .production_id = 25),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 4, .production_id = 26),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_end, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_end, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4, .production_id = 24),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4, .production_id = 31),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3, .production_id = 24),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2, .production_id = 16),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(490),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_arguments_repeat1, 2, .production_id = 34),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5, .production_id = 31),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 5, .production_id = 32),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_cond, 2, .production_id = 37),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 5, .production_id = 39),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_else_intro, 4),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 10, .production_id = 49),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 7),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_else_intro, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 6, .production_id = 43),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 23),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 4, .production_id = 32),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 14),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 13),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_if_intro, 6, .production_id = 39),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_else_intro, 5),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 7, .production_id = 43),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 7, .production_id = 45),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, .production_id = 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 8, .production_id = 48),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 8, .production_id = 45),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(567),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 9, .production_id = 48),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_for_start, 9, .production_id = 49),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2, .production_id = 21),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
