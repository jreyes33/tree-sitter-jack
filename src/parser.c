#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_class = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_static = 4,
  anon_sym_COMMA = 5,
  anon_sym_SEMI = 6,
  anon_sym_field = 7,
  anon_sym_constructor = 8,
  anon_sym_function = 9,
  anon_sym_method = 10,
  anon_sym_void = 11,
  anon_sym_int = 12,
  anon_sym_char = 13,
  anon_sym_boolean = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_var = 17,
  anon_sym_let = 18,
  anon_sym_EQ = 19,
  anon_sym_if = 20,
  anon_sym_else = 21,
  anon_sym_while = 22,
  anon_sym_do = 23,
  anon_sym_return = 24,
  anon_sym_DOT = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_AMP = 30,
  anon_sym_PIPE = 31,
  anon_sym_LT = 32,
  anon_sym_GT = 33,
  anon_sym_TILDE = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_string_constant_token1 = 38,
  sym_integer_constant = 39,
  anon_sym_true = 40,
  anon_sym_false = 41,
  anon_sym_null = 42,
  anon_sym_this = 43,
  sym_identifier = 44,
  sym_comment = 45,
  sym_class_declaration = 46,
  sym_class_body = 47,
  sym__class_var_declaration = 48,
  sym_static_declaration = 49,
  sym_field_declaration = 50,
  sym__subroutine_declaration = 51,
  sym_constructor_declaration = 52,
  sym_function_declaration = 53,
  sym_method_declaration = 54,
  sym__subroutine = 55,
  sym_return_type = 56,
  sym_type = 57,
  sym_parameter_list = 58,
  sym_parameter = 59,
  sym_subroutine_body = 60,
  sym_var_declaration = 61,
  sym_statements = 62,
  sym__statement = 63,
  sym_let_statement = 64,
  sym_if_statement = 65,
  sym__else = 66,
  sym_while_statement = 67,
  sym_do_statement = 68,
  sym_return_statement = 69,
  sym_subroutine_call = 70,
  sym__callee = 71,
  sym_member_expression = 72,
  sym_expression_list = 73,
  sym_expression = 74,
  sym_op = 75,
  sym_unary_op = 76,
  sym_term = 77,
  sym__subscript = 78,
  sym_string_constant = 79,
  sym_keyword_constant = 80,
  aux_sym_class_body_repeat1 = 81,
  aux_sym_class_body_repeat2 = 82,
  aux_sym_static_declaration_repeat1 = 83,
  aux_sym_parameter_list_repeat1 = 84,
  aux_sym_subroutine_body_repeat1 = 85,
  aux_sym_statements_repeat1 = 86,
  aux_sym_expression_list_repeat1 = 87,
  aux_sym_expression_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_static] = "static",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_field] = "field",
  [anon_sym_constructor] = "constructor",
  [anon_sym_function] = "function",
  [anon_sym_method] = "method",
  [anon_sym_void] = "void",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_boolean] = "boolean",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_var] = "var",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_return] = "return",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_constant_token1] = "string_constant_token1",
  [sym_integer_constant] = "integer_constant",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_this] = "this",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym__class_var_declaration] = "_class_var_declaration",
  [sym_static_declaration] = "static_declaration",
  [sym_field_declaration] = "field_declaration",
  [sym__subroutine_declaration] = "_subroutine_declaration",
  [sym_constructor_declaration] = "constructor_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_method_declaration] = "method_declaration",
  [sym__subroutine] = "_subroutine",
  [sym_return_type] = "return_type",
  [sym_type] = "type",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_subroutine_body] = "subroutine_body",
  [sym_var_declaration] = "var_declaration",
  [sym_statements] = "statements",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym_if_statement] = "if_statement",
  [sym__else] = "_else",
  [sym_while_statement] = "while_statement",
  [sym_do_statement] = "do_statement",
  [sym_return_statement] = "return_statement",
  [sym_subroutine_call] = "subroutine_call",
  [sym__callee] = "_callee",
  [sym_member_expression] = "member_expression",
  [sym_expression_list] = "expression_list",
  [sym_expression] = "expression",
  [sym_op] = "op",
  [sym_unary_op] = "unary_op",
  [sym_term] = "term",
  [sym__subscript] = "_subscript",
  [sym_string_constant] = "string_constant",
  [sym_keyword_constant] = "keyword_constant",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_class_body_repeat2] = "class_body_repeat2",
  [aux_sym_static_declaration_repeat1] = "static_declaration_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_subroutine_body_repeat1] = "subroutine_body_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_constant_token1] = aux_sym_string_constant_token1,
  [sym_integer_constant] = sym_integer_constant,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_this] = anon_sym_this,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_body] = sym_class_body,
  [sym__class_var_declaration] = sym__class_var_declaration,
  [sym_static_declaration] = sym_static_declaration,
  [sym_field_declaration] = sym_field_declaration,
  [sym__subroutine_declaration] = sym__subroutine_declaration,
  [sym_constructor_declaration] = sym_constructor_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_method_declaration] = sym_method_declaration,
  [sym__subroutine] = sym__subroutine,
  [sym_return_type] = sym_return_type,
  [sym_type] = sym_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_subroutine_body] = sym_subroutine_body,
  [sym_var_declaration] = sym_var_declaration,
  [sym_statements] = sym_statements,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__else] = sym__else,
  [sym_while_statement] = sym_while_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_subroutine_call] = sym_subroutine_call,
  [sym__callee] = sym__callee,
  [sym_member_expression] = sym_member_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_expression] = sym_expression,
  [sym_op] = sym_op,
  [sym_unary_op] = sym_unary_op,
  [sym_term] = sym_term,
  [sym__subscript] = sym__subscript,
  [sym_string_constant] = sym_string_constant,
  [sym_keyword_constant] = sym_keyword_constant,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_class_body_repeat2] = aux_sym_class_body_repeat2,
  [aux_sym_static_declaration_repeat1] = aux_sym_static_declaration_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_subroutine_body_repeat1] = aux_sym_subroutine_body_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
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
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym__class_var_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_static_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_constructor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine] = {
    .visible = false,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_body] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__else] = {
    .visible = false,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_call] = {
    .visible = true,
    .named = true,
  },
  [sym__callee] = {
    .visible = false,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym__subscript] = {
    .visible = false,
    .named = true,
  },
  [sym_string_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_static_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subroutine_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == ']') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(116);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(166);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(166);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_integer_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 127},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer_constant] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_class_declaration] = STATE(142),
    [anon_sym_class] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(104), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [47] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(81), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [94] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(119), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [138] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(107), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [182] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(108), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [226] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(124), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [270] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(96), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [314] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(120), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [358] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(20), 1,
      sym_term,
    STATE(127), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [402] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    STATE(114), 1,
      sym_statements,
    STATE(15), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(25), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [443] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym__subscript,
    ACTIONS(37), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [476] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(30), 1,
      sym_term,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [517] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_integer_constant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_op,
    STATE(36), 1,
      sym_term,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
    STATE(28), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(17), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [558] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_statements,
    STATE(42), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(25), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [599] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_static,
    ACTIONS(53), 1,
      anon_sym_field,
    ACTIONS(55), 1,
      anon_sym_constructor,
    ACTIONS(57), 1,
      anon_sym_function,
    ACTIONS(59), 1,
      anon_sym_method,
    STATE(37), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    STATE(41), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [634] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_op,
    STATE(18), 1,
      aux_sym_expression_repeat1,
    ACTIONS(61), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(63), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_op,
    STATE(18), 1,
      aux_sym_expression_repeat1,
    ACTIONS(67), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(69), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [692] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_static,
    ACTIONS(53), 1,
      anon_sym_field,
    ACTIONS(55), 1,
      anon_sym_constructor,
    ACTIONS(57), 1,
      anon_sym_function,
    ACTIONS(59), 1,
      anon_sym_method,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(16), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    STATE(43), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [727] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_op,
    STATE(17), 1,
      aux_sym_expression_repeat1,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(63), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [756] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_statements,
    STATE(25), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [790] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_statements,
    STATE(25), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [824] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      sym_statements,
    STATE(25), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(85), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [879] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(31), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(91), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(95), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(37), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(99), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_SLASH,
    ACTIONS(67), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1015] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(110), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_while,
    ACTIONS(116), 1,
      anon_sym_do,
    ACTIONS(119), 1,
      anon_sym_return,
    STATE(31), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    ACTIONS(122), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    ACTIONS(126), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(130), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_SLASH,
    ACTIONS(134), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(138), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_static,
    ACTIONS(147), 1,
      anon_sym_field,
    ACTIONS(142), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
    STATE(37), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      sym_integer_constant,
    ACTIONS(152), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
      sym_identifier,
  [1191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
      sym_integer_constant,
    ACTIONS(156), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
      sym_identifier,
  [1209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_constructor,
    ACTIONS(163), 1,
      anon_sym_function,
    ACTIONS(166), 1,
      anon_sym_method,
    STATE(40), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [1232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_constructor,
    ACTIONS(57), 1,
      anon_sym_function,
    ACTIONS(59), 1,
      anon_sym_method,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(40), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [1255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_var,
    STATE(42), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    ACTIONS(171), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_constructor,
    ACTIONS(57), 1,
      anon_sym_function,
    ACTIONS(59), 1,
      anon_sym_method,
    STATE(40), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [1297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_else,
    STATE(65), 1,
      sym__else,
    ACTIONS(176), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_else,
    STATE(62), 1,
      sym__else,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_void,
    STATE(77), 1,
      sym__subroutine,
    STATE(132), 1,
      sym_return_type,
    STATE(133), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_void,
    STATE(73), 1,
      sym__subroutine,
    STATE(132), 1,
      sym_return_type,
    STATE(133), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_void,
    STATE(74), 1,
      sym__subroutine,
    STATE(132), 1,
      sym_return_type,
    STATE(133), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_parameter,
    STATE(121), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(94), 1,
      sym_parameter,
    STATE(121), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(135), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(112), 1,
      sym_type,
    ACTIONS(184), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(106), 1,
      sym_subroutine_call,
    STATE(93), 2,
      sym__callee,
      sym_member_expression,
  [1743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_parameter_list_repeat1,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_static_declaration_repeat1,
  [1789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_expression_list_repeat1,
  [1802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_static_declaration_repeat1,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_static_declaration_repeat1,
  [1828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_expression_list_repeat1,
  [1841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_expression_list_repeat1,
  [1854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_static_declaration_repeat1,
  [1867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_parameter_list_repeat1,
  [1880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_parameter_list_repeat1,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_static_declaration_repeat1,
  [1906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_static_declaration_repeat1,
  [1919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_EQ,
    STATE(131), 1,
      sym__subscript,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_static_declaration_repeat1,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_expression_list,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_class_body,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_parameter_list,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_subroutine_body,
  [2001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_identifier,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_SEMI,
  [2048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [2062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
  [2076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
  [2083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
  [2090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [2097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
  [2104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
  [2111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
  [2118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
  [2125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
  [2132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_identifier,
  [2139] = 2,
    ACTIONS(319), 1,
      aux_sym_string_constant_token1,
    ACTIONS(321), 1,
      sym_comment,
  [2146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [2153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
  [2167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
  [2181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
  [2188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_identifier,
  [2195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [2202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
  [2209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
  [2216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [2223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [2230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_EQ,
  [2237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
  [2244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
  [2251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
  [2258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_identifier,
  [2265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_identifier,
  [2272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
  [2279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [2286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [2293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
  [2300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
  [2307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 314,
  [SMALL_STATE(10)] = 358,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 517,
  [SMALL_STATE(15)] = 558,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 663,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 727,
  [SMALL_STATE(21)] = 756,
  [SMALL_STATE(22)] = 790,
  [SMALL_STATE(23)] = 824,
  [SMALL_STATE(24)] = 858,
  [SMALL_STATE(25)] = 879,
  [SMALL_STATE(26)] = 910,
  [SMALL_STATE(27)] = 931,
  [SMALL_STATE(28)] = 952,
  [SMALL_STATE(29)] = 973,
  [SMALL_STATE(30)] = 994,
  [SMALL_STATE(31)] = 1015,
  [SMALL_STATE(32)] = 1046,
  [SMALL_STATE(33)] = 1067,
  [SMALL_STATE(34)] = 1088,
  [SMALL_STATE(35)] = 1109,
  [SMALL_STATE(36)] = 1130,
  [SMALL_STATE(37)] = 1151,
  [SMALL_STATE(38)] = 1173,
  [SMALL_STATE(39)] = 1191,
  [SMALL_STATE(40)] = 1209,
  [SMALL_STATE(41)] = 1232,
  [SMALL_STATE(42)] = 1255,
  [SMALL_STATE(43)] = 1274,
  [SMALL_STATE(44)] = 1297,
  [SMALL_STATE(45)] = 1315,
  [SMALL_STATE(46)] = 1333,
  [SMALL_STATE(47)] = 1355,
  [SMALL_STATE(48)] = 1377,
  [SMALL_STATE(49)] = 1399,
  [SMALL_STATE(50)] = 1412,
  [SMALL_STATE(51)] = 1425,
  [SMALL_STATE(52)] = 1444,
  [SMALL_STATE(53)] = 1456,
  [SMALL_STATE(54)] = 1468,
  [SMALL_STATE(55)] = 1480,
  [SMALL_STATE(56)] = 1496,
  [SMALL_STATE(57)] = 1508,
  [SMALL_STATE(58)] = 1520,
  [SMALL_STATE(59)] = 1532,
  [SMALL_STATE(60)] = 1544,
  [SMALL_STATE(61)] = 1556,
  [SMALL_STATE(62)] = 1568,
  [SMALL_STATE(63)] = 1580,
  [SMALL_STATE(64)] = 1592,
  [SMALL_STATE(65)] = 1604,
  [SMALL_STATE(66)] = 1616,
  [SMALL_STATE(67)] = 1628,
  [SMALL_STATE(68)] = 1640,
  [SMALL_STATE(69)] = 1653,
  [SMALL_STATE(70)] = 1666,
  [SMALL_STATE(71)] = 1679,
  [SMALL_STATE(72)] = 1689,
  [SMALL_STATE(73)] = 1699,
  [SMALL_STATE(74)] = 1709,
  [SMALL_STATE(75)] = 1719,
  [SMALL_STATE(76)] = 1729,
  [SMALL_STATE(77)] = 1743,
  [SMALL_STATE(78)] = 1753,
  [SMALL_STATE(79)] = 1763,
  [SMALL_STATE(80)] = 1776,
  [SMALL_STATE(81)] = 1789,
  [SMALL_STATE(82)] = 1802,
  [SMALL_STATE(83)] = 1815,
  [SMALL_STATE(84)] = 1828,
  [SMALL_STATE(85)] = 1841,
  [SMALL_STATE(86)] = 1854,
  [SMALL_STATE(87)] = 1867,
  [SMALL_STATE(88)] = 1880,
  [SMALL_STATE(89)] = 1893,
  [SMALL_STATE(90)] = 1906,
  [SMALL_STATE(91)] = 1919,
  [SMALL_STATE(92)] = 1932,
  [SMALL_STATE(93)] = 1945,
  [SMALL_STATE(94)] = 1955,
  [SMALL_STATE(95)] = 1963,
  [SMALL_STATE(96)] = 1973,
  [SMALL_STATE(97)] = 1981,
  [SMALL_STATE(98)] = 1991,
  [SMALL_STATE(99)] = 2001,
  [SMALL_STATE(100)] = 2009,
  [SMALL_STATE(101)] = 2017,
  [SMALL_STATE(102)] = 2027,
  [SMALL_STATE(103)] = 2034,
  [SMALL_STATE(104)] = 2041,
  [SMALL_STATE(105)] = 2048,
  [SMALL_STATE(106)] = 2055,
  [SMALL_STATE(107)] = 2062,
  [SMALL_STATE(108)] = 2069,
  [SMALL_STATE(109)] = 2076,
  [SMALL_STATE(110)] = 2083,
  [SMALL_STATE(111)] = 2090,
  [SMALL_STATE(112)] = 2097,
  [SMALL_STATE(113)] = 2104,
  [SMALL_STATE(114)] = 2111,
  [SMALL_STATE(115)] = 2118,
  [SMALL_STATE(116)] = 2125,
  [SMALL_STATE(117)] = 2132,
  [SMALL_STATE(118)] = 2139,
  [SMALL_STATE(119)] = 2146,
  [SMALL_STATE(120)] = 2153,
  [SMALL_STATE(121)] = 2160,
  [SMALL_STATE(122)] = 2167,
  [SMALL_STATE(123)] = 2174,
  [SMALL_STATE(124)] = 2181,
  [SMALL_STATE(125)] = 2188,
  [SMALL_STATE(126)] = 2195,
  [SMALL_STATE(127)] = 2202,
  [SMALL_STATE(128)] = 2209,
  [SMALL_STATE(129)] = 2216,
  [SMALL_STATE(130)] = 2223,
  [SMALL_STATE(131)] = 2230,
  [SMALL_STATE(132)] = 2237,
  [SMALL_STATE(133)] = 2244,
  [SMALL_STATE(134)] = 2251,
  [SMALL_STATE(135)] = 2258,
  [SMALL_STATE(136)] = 2265,
  [SMALL_STATE(137)] = 2272,
  [SMALL_STATE(138)] = 2279,
  [SMALL_STATE(139)] = 2286,
  [SMALL_STATE(140)] = 2293,
  [SMALL_STATE(141)] = 2300,
  [SMALL_STATE(142)] = 2307,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__callee, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(39),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_constant, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_constant, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_constant, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(117),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(116),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(115),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(76),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subscript, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subscript, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine_call, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(68),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(69),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(48),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(47),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(46),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2), SHIFT_REPEAT(70),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 3),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(55),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(8),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2), SHIFT_REPEAT(125),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jack(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
