#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_constant_token1 = 29,
  sym_integer_constant = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  anon_sym_this = 33,
  sym_identifier = 34,
  sym_comment = 35,
  sym_class_declaration = 36,
  sym_class_body = 37,
  sym__class_var_declaration = 38,
  sym_static_declaration = 39,
  sym_field_declaration = 40,
  sym__subroutine_declaration = 41,
  sym_constructor_declaration = 42,
  sym_function_declaration = 43,
  sym_method_declaration = 44,
  sym__subroutine = 45,
  sym_return_type = 46,
  sym_type = 47,
  sym_parameter_list = 48,
  sym_parameter = 49,
  sym_subroutine_body = 50,
  sym_var_declaration = 51,
  sym_statements = 52,
  sym__statement = 53,
  sym_let_statement = 54,
  sym_if_statement = 55,
  sym__else = 56,
  sym_while_statement = 57,
  sym_do_statement = 58,
  sym_return_statement = 59,
  sym_subroutine_call = 60,
  sym_member_expression = 61,
  sym_expression_list = 62,
  sym_expression = 63,
  sym_term = 64,
  sym__subscript = 65,
  sym_string_constant = 66,
  sym_keyword_constant = 67,
  aux_sym_class_body_repeat1 = 68,
  aux_sym_class_body_repeat2 = 69,
  aux_sym_static_declaration_repeat1 = 70,
  aux_sym_parameter_list_repeat1 = 71,
  aux_sym_subroutine_body_repeat1 = 72,
  aux_sym_statements_repeat1 = 73,
  aux_sym_expression_list_repeat1 = 74,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_constant_token1] = "string_constant_token1",
  [sym_integer_constant] = "integer_constant",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym_member_expression] = "member_expression",
  [sym_expression_list] = "expression_list",
  [sym_expression] = "expression",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_constant_token1] = aux_sym_string_constant_token1,
  [sym_integer_constant] = sym_integer_constant,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym_member_expression] = sym_member_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_expression] = sym_expression,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '"') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
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
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
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
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 115},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer_constant] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_class_declaration] = STATE(128),
    [anon_sym_class] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    STATE(95), 1,
      sym_statements,
    STATE(3), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(9), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [41] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_statements,
    STATE(20), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(9), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [82] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_static,
    ACTIONS(27), 1,
      anon_sym_field,
    ACTIONS(29), 1,
      anon_sym_constructor,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_method,
    STATE(5), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    STATE(21), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [117] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_static,
    ACTIONS(27), 1,
      anon_sym_field,
    ACTIONS(29), 1,
      anon_sym_constructor,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_method,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(19), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    STATE(22), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [152] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_statements,
    STATE(9), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [186] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_statements,
    STATE(9), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [220] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_statements,
    STATE(9), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [254] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(11), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [285] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(63), 1,
      sym_term,
    STATE(90), 1,
      sym_member_expression,
    STATE(122), 1,
      sym_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_let,
    ACTIONS(60), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_while,
    ACTIONS(66), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_return,
    STATE(11), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [351] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_term,
    STATE(69), 1,
      sym_expression,
    STATE(90), 1,
      sym_member_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [386] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(63), 1,
      sym_term,
    STATE(90), 1,
      sym_member_expression,
    STATE(98), 1,
      sym_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [418] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(63), 1,
      sym_term,
    STATE(88), 1,
      sym_expression,
    STATE(90), 1,
      sym_member_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [450] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(63), 1,
      sym_term,
    STATE(90), 1,
      sym_member_expression,
    STATE(112), 1,
      sym_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [482] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(63), 1,
      sym_term,
    STATE(90), 1,
      sym_member_expression,
    STATE(111), 1,
      sym_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [514] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(63), 1,
      sym_term,
    STATE(90), 1,
      sym_member_expression,
    STATE(110), 1,
      sym_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [546] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_integer_constant,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(63), 1,
      sym_term,
    STATE(90), 1,
      sym_member_expression,
    STATE(99), 1,
      sym_expression,
    ACTIONS(51), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
    STATE(66), 3,
      sym_subroutine_call,
      sym_string_constant,
      sym_keyword_constant,
  [578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_static,
    ACTIONS(79), 1,
      anon_sym_field,
    ACTIONS(74), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
    STATE(19), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
  [600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_var,
    STATE(20), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    ACTIONS(82), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [619] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_constructor,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_method,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(23), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_constructor,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_method,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(23), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [665] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_constructor,
    ACTIONS(94), 1,
      anon_sym_function,
    ACTIONS(97), 1,
      anon_sym_method,
    STATE(23), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_else,
    STATE(37), 1,
      sym__else,
    ACTIONS(100), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [706] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_void,
    STATE(58), 1,
      sym__subroutine,
    STATE(113), 1,
      sym_type,
    STATE(119), 1,
      sym_return_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_void,
    STATE(68), 1,
      sym__subroutine,
    STATE(113), 1,
      sym_type,
    STATE(119), 1,
      sym_return_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_void,
    STATE(62), 1,
      sym__subroutine,
    STATE(113), 1,
      sym_type,
    STATE(119), 1,
      sym_return_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_else,
    STATE(40), 1,
      sym__else,
    ACTIONS(108), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym__subscript,
    ACTIONS(110), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [822] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_parameter,
    STATE(114), 1,
      sym_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(91), 1,
      sym_parameter,
    STATE(114), 1,
      sym_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(97), 1,
      sym_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(92), 1,
      sym_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym_type,
    ACTIONS(106), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [1100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_expression_list_repeat1,
  [1273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
  [1286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym_static_declaration_repeat1,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_EQ,
    STATE(115), 1,
      sym__subscript,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym_static_declaration_repeat1,
  [1325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_static_declaration_repeat1,
  [1338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(90), 1,
      sym_member_expression,
    STATE(126), 1,
      sym_subroutine_call,
  [1351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym_static_declaration_repeat1,
  [1364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_parameter_list_repeat1,
  [1377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_expression_list_repeat1,
  [1390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      aux_sym_static_declaration_repeat1,
  [1403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_parameter_list_repeat1,
  [1416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym_static_declaration_repeat1,
  [1429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_static_declaration_repeat1,
  [1442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_expression_list_repeat1,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_class_body,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_parameter_list,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_subroutine_body,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_expression_list,
  [1519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_identifier,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_identifier,
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SEMI,
  [1576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
  [1632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_identifier,
  [1639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_identifier,
  [1646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
  [1653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SEMI,
  [1660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
  [1674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_identifier,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_EQ,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [1709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
  [1730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
  [1758] = 2,
    ACTIONS(301), 1,
      aux_sym_string_constant_token1,
    ACTIONS(303), 1,
      sym_comment,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_DOT,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
  [1793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
  [1800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 450,
  [SMALL_STATE(16)] = 482,
  [SMALL_STATE(17)] = 514,
  [SMALL_STATE(18)] = 546,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 600,
  [SMALL_STATE(21)] = 619,
  [SMALL_STATE(22)] = 642,
  [SMALL_STATE(23)] = 665,
  [SMALL_STATE(24)] = 688,
  [SMALL_STATE(25)] = 706,
  [SMALL_STATE(26)] = 728,
  [SMALL_STATE(27)] = 750,
  [SMALL_STATE(28)] = 772,
  [SMALL_STATE(29)] = 790,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 822,
  [SMALL_STATE(32)] = 841,
  [SMALL_STATE(33)] = 854,
  [SMALL_STATE(34)] = 866,
  [SMALL_STATE(35)] = 878,
  [SMALL_STATE(36)] = 890,
  [SMALL_STATE(37)] = 902,
  [SMALL_STATE(38)] = 914,
  [SMALL_STATE(39)] = 926,
  [SMALL_STATE(40)] = 938,
  [SMALL_STATE(41)] = 950,
  [SMALL_STATE(42)] = 962,
  [SMALL_STATE(43)] = 974,
  [SMALL_STATE(44)] = 986,
  [SMALL_STATE(45)] = 998,
  [SMALL_STATE(46)] = 1010,
  [SMALL_STATE(47)] = 1022,
  [SMALL_STATE(48)] = 1034,
  [SMALL_STATE(49)] = 1050,
  [SMALL_STATE(50)] = 1061,
  [SMALL_STATE(51)] = 1074,
  [SMALL_STATE(52)] = 1087,
  [SMALL_STATE(53)] = 1100,
  [SMALL_STATE(54)] = 1110,
  [SMALL_STATE(55)] = 1120,
  [SMALL_STATE(56)] = 1130,
  [SMALL_STATE(57)] = 1140,
  [SMALL_STATE(58)] = 1150,
  [SMALL_STATE(59)] = 1160,
  [SMALL_STATE(60)] = 1170,
  [SMALL_STATE(61)] = 1180,
  [SMALL_STATE(62)] = 1190,
  [SMALL_STATE(63)] = 1200,
  [SMALL_STATE(64)] = 1210,
  [SMALL_STATE(65)] = 1220,
  [SMALL_STATE(66)] = 1230,
  [SMALL_STATE(67)] = 1240,
  [SMALL_STATE(68)] = 1250,
  [SMALL_STATE(69)] = 1260,
  [SMALL_STATE(70)] = 1273,
  [SMALL_STATE(71)] = 1286,
  [SMALL_STATE(72)] = 1299,
  [SMALL_STATE(73)] = 1312,
  [SMALL_STATE(74)] = 1325,
  [SMALL_STATE(75)] = 1338,
  [SMALL_STATE(76)] = 1351,
  [SMALL_STATE(77)] = 1364,
  [SMALL_STATE(78)] = 1377,
  [SMALL_STATE(79)] = 1390,
  [SMALL_STATE(80)] = 1403,
  [SMALL_STATE(81)] = 1416,
  [SMALL_STATE(82)] = 1429,
  [SMALL_STATE(83)] = 1442,
  [SMALL_STATE(84)] = 1455,
  [SMALL_STATE(85)] = 1465,
  [SMALL_STATE(86)] = 1475,
  [SMALL_STATE(87)] = 1483,
  [SMALL_STATE(88)] = 1493,
  [SMALL_STATE(89)] = 1501,
  [SMALL_STATE(90)] = 1509,
  [SMALL_STATE(91)] = 1519,
  [SMALL_STATE(92)] = 1527,
  [SMALL_STATE(93)] = 1534,
  [SMALL_STATE(94)] = 1541,
  [SMALL_STATE(95)] = 1548,
  [SMALL_STATE(96)] = 1555,
  [SMALL_STATE(97)] = 1562,
  [SMALL_STATE(98)] = 1569,
  [SMALL_STATE(99)] = 1576,
  [SMALL_STATE(100)] = 1583,
  [SMALL_STATE(101)] = 1590,
  [SMALL_STATE(102)] = 1597,
  [SMALL_STATE(103)] = 1604,
  [SMALL_STATE(104)] = 1611,
  [SMALL_STATE(105)] = 1618,
  [SMALL_STATE(106)] = 1625,
  [SMALL_STATE(107)] = 1632,
  [SMALL_STATE(108)] = 1639,
  [SMALL_STATE(109)] = 1646,
  [SMALL_STATE(110)] = 1653,
  [SMALL_STATE(111)] = 1660,
  [SMALL_STATE(112)] = 1667,
  [SMALL_STATE(113)] = 1674,
  [SMALL_STATE(114)] = 1681,
  [SMALL_STATE(115)] = 1688,
  [SMALL_STATE(116)] = 1695,
  [SMALL_STATE(117)] = 1702,
  [SMALL_STATE(118)] = 1709,
  [SMALL_STATE(119)] = 1716,
  [SMALL_STATE(120)] = 1723,
  [SMALL_STATE(121)] = 1730,
  [SMALL_STATE(122)] = 1737,
  [SMALL_STATE(123)] = 1744,
  [SMALL_STATE(124)] = 1751,
  [SMALL_STATE(125)] = 1758,
  [SMALL_STATE(126)] = 1765,
  [SMALL_STATE(127)] = 1772,
  [SMALL_STATE(128)] = 1779,
  [SMALL_STATE(129)] = 1786,
  [SMALL_STATE(130)] = 1793,
  [SMALL_STATE(131)] = 1800,
  [SMALL_STATE(132)] = 1807,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(106),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(104),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(96),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(75),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(51),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(50),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2), SHIFT_REPEAT(52),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(26),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(25),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subscript, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_constant, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(14),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 4),
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
