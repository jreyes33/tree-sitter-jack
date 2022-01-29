#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  anon_sym_DQUOTE = 26,
  aux_sym_string_constant_token1 = 27,
  sym_integer_constant = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  anon_sym_this = 31,
  sym_identifier = 32,
  sym_comment = 33,
  sym_class_declaration = 34,
  sym_class_body = 35,
  sym__class_var_declaration = 36,
  sym_static_declaration = 37,
  sym_field_declaration = 38,
  sym__subroutine_declaration = 39,
  sym_constructor_declaration = 40,
  sym_function_declaration = 41,
  sym_method_declaration = 42,
  sym__subroutine = 43,
  sym_return_type = 44,
  sym_type = 45,
  sym_parameter_list = 46,
  sym_parameter = 47,
  sym_subroutine_body = 48,
  sym_var_declaration = 49,
  sym_statements = 50,
  sym__statement = 51,
  sym_let_statement = 52,
  sym_if_statement = 53,
  sym__else = 54,
  sym_while_statement = 55,
  sym_do_statement = 56,
  sym_return_statement = 57,
  sym_subroutine_call = 58,
  sym_member_expression = 59,
  sym_expression_list = 60,
  sym_expression = 61,
  sym_term = 62,
  sym_string_constant = 63,
  sym_keyword_constant = 64,
  aux_sym_class_body_repeat1 = 65,
  aux_sym_class_body_repeat2 = 66,
  aux_sym_static_declaration_repeat1 = 67,
  aux_sym_parameter_list_repeat1 = 68,
  aux_sym_subroutine_body_repeat1 = 69,
  aux_sym_statements_repeat1 = 70,
  aux_sym_expression_list_repeat1 = 71,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(101);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
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
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(118);
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
      if (lookahead == 's') ADVANCE(120);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer_constant);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
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
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
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
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 113},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer_constant] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_class_declaration] = STATE(123),
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
    STATE(87), 1,
      sym_statements,
    STATE(3), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(10), 7,
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
    STATE(112), 1,
      sym_statements,
    STATE(19), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(10), 7,
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
    STATE(18), 5,
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
    STATE(17), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    STATE(20), 5,
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
    STATE(122), 1,
      sym_statements,
    STATE(10), 7,
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
    STATE(109), 1,
      sym_statements,
    STATE(10), 7,
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
    STATE(111), 1,
      sym_statements,
    STATE(10), 7,
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
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_while,
    ACTIONS(54), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_return,
    STATE(9), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [285] = 8,
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
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(9), 7,
      sym__statement,
      sym_let_statement,
      sym_if_statement,
      sym_while_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [316] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_integer_constant,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(69), 1,
      sym_term,
    STATE(99), 1,
      sym_expression,
    STATE(67), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(68), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [347] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_integer_constant,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_expression,
    STATE(69), 1,
      sym_term,
    STATE(67), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(68), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [378] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_integer_constant,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(69), 1,
      sym_term,
    STATE(76), 1,
      sym_expression,
    STATE(67), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(68), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [406] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_integer_constant,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(69), 1,
      sym_term,
    STATE(84), 1,
      sym_expression,
    STATE(67), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(68), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [434] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_integer_constant,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(69), 1,
      sym_term,
    STATE(83), 1,
      sym_expression,
    STATE(67), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(68), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [462] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_integer_constant,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(69), 1,
      sym_term,
    STATE(94), 1,
      sym_expression,
    STATE(67), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(68), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [490] = 5,
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
    STATE(17), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
  [512] = 6,
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
    STATE(21), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_var,
    STATE(19), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    ACTIONS(82), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [554] = 6,
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
    STATE(21), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [577] = 6,
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
    STATE(21), 5,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      sym_method_declaration,
      aux_sym_class_body_repeat2,
  [600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_else,
    STATE(31), 1,
      sym__else,
    ACTIONS(100), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_else,
    STATE(34), 1,
      sym__else,
    ACTIONS(104), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_void,
    STATE(51), 1,
      sym__subroutine,
    STATE(110), 1,
      sym_return_type,
    STATE(114), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_void,
    STATE(48), 1,
      sym__subroutine,
    STATE(110), 1,
      sym_return_type,
    STATE(114), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_void,
    STATE(54), 1,
      sym__subroutine,
    STATE(110), 1,
      sym_return_type,
    STATE(114), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_parameter,
    STATE(100), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym_parameter,
    STATE(100), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(107), 1,
      sym_type,
    ACTIONS(108), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_static_declaration_repeat1,
  [1062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(77), 1,
      sym_member_expression,
    STATE(121), 1,
      sym_subroutine_call,
  [1075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_expression_list_repeat1,
  [1088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_expression_list_repeat1,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_expression_list_repeat1,
  [1114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_static_declaration_repeat1,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_static_declaration_repeat1,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
  [1166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_static_declaration_repeat1,
  [1179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_static_declaration_repeat1,
  [1192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_parameter_list_repeat1,
  [1232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_static_declaration_repeat1,
  [1245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      aux_sym_static_declaration_repeat1,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_class_body,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_expression_list,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_parameter_list,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_subroutine_body,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_EQ,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [1351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
  [1372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SEMI,
  [1386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
  [1393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
  [1400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
  [1407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_identifier,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SEMI,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
  [1435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
  [1442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DOT,
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SEMI,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_SEMI,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [1477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
  [1484] = 2,
    ACTIONS(259), 1,
      aux_sym_string_constant_token1,
    ACTIONS(261), 1,
      sym_comment,
  [1491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_SEMI,
  [1512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
  [1519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
  [1526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_identifier,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
  [1547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
  [1554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [1561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_identifier,
  [1568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_identifier,
  [1582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
  [1589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_identifier,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [1617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
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
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 434,
  [SMALL_STATE(16)] = 462,
  [SMALL_STATE(17)] = 490,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 554,
  [SMALL_STATE(21)] = 577,
  [SMALL_STATE(22)] = 600,
  [SMALL_STATE(23)] = 618,
  [SMALL_STATE(24)] = 636,
  [SMALL_STATE(25)] = 658,
  [SMALL_STATE(26)] = 680,
  [SMALL_STATE(27)] = 702,
  [SMALL_STATE(28)] = 715,
  [SMALL_STATE(29)] = 728,
  [SMALL_STATE(30)] = 747,
  [SMALL_STATE(31)] = 759,
  [SMALL_STATE(32)] = 771,
  [SMALL_STATE(33)] = 783,
  [SMALL_STATE(34)] = 795,
  [SMALL_STATE(35)] = 807,
  [SMALL_STATE(36)] = 819,
  [SMALL_STATE(37)] = 831,
  [SMALL_STATE(38)] = 843,
  [SMALL_STATE(39)] = 855,
  [SMALL_STATE(40)] = 867,
  [SMALL_STATE(41)] = 879,
  [SMALL_STATE(42)] = 891,
  [SMALL_STATE(43)] = 903,
  [SMALL_STATE(44)] = 915,
  [SMALL_STATE(45)] = 931,
  [SMALL_STATE(46)] = 944,
  [SMALL_STATE(47)] = 957,
  [SMALL_STATE(48)] = 970,
  [SMALL_STATE(49)] = 980,
  [SMALL_STATE(50)] = 990,
  [SMALL_STATE(51)] = 1000,
  [SMALL_STATE(52)] = 1010,
  [SMALL_STATE(53)] = 1020,
  [SMALL_STATE(54)] = 1030,
  [SMALL_STATE(55)] = 1040,
  [SMALL_STATE(56)] = 1049,
  [SMALL_STATE(57)] = 1062,
  [SMALL_STATE(58)] = 1075,
  [SMALL_STATE(59)] = 1088,
  [SMALL_STATE(60)] = 1101,
  [SMALL_STATE(61)] = 1114,
  [SMALL_STATE(62)] = 1127,
  [SMALL_STATE(63)] = 1140,
  [SMALL_STATE(64)] = 1153,
  [SMALL_STATE(65)] = 1166,
  [SMALL_STATE(66)] = 1179,
  [SMALL_STATE(67)] = 1192,
  [SMALL_STATE(68)] = 1201,
  [SMALL_STATE(69)] = 1210,
  [SMALL_STATE(70)] = 1219,
  [SMALL_STATE(71)] = 1232,
  [SMALL_STATE(72)] = 1245,
  [SMALL_STATE(73)] = 1258,
  [SMALL_STATE(74)] = 1266,
  [SMALL_STATE(75)] = 1274,
  [SMALL_STATE(76)] = 1284,
  [SMALL_STATE(77)] = 1292,
  [SMALL_STATE(78)] = 1302,
  [SMALL_STATE(79)] = 1312,
  [SMALL_STATE(80)] = 1322,
  [SMALL_STATE(81)] = 1330,
  [SMALL_STATE(82)] = 1337,
  [SMALL_STATE(83)] = 1344,
  [SMALL_STATE(84)] = 1351,
  [SMALL_STATE(85)] = 1358,
  [SMALL_STATE(86)] = 1365,
  [SMALL_STATE(87)] = 1372,
  [SMALL_STATE(88)] = 1379,
  [SMALL_STATE(89)] = 1386,
  [SMALL_STATE(90)] = 1393,
  [SMALL_STATE(91)] = 1400,
  [SMALL_STATE(92)] = 1407,
  [SMALL_STATE(93)] = 1414,
  [SMALL_STATE(94)] = 1421,
  [SMALL_STATE(95)] = 1428,
  [SMALL_STATE(96)] = 1435,
  [SMALL_STATE(97)] = 1442,
  [SMALL_STATE(98)] = 1449,
  [SMALL_STATE(99)] = 1456,
  [SMALL_STATE(100)] = 1463,
  [SMALL_STATE(101)] = 1470,
  [SMALL_STATE(102)] = 1477,
  [SMALL_STATE(103)] = 1484,
  [SMALL_STATE(104)] = 1491,
  [SMALL_STATE(105)] = 1498,
  [SMALL_STATE(106)] = 1505,
  [SMALL_STATE(107)] = 1512,
  [SMALL_STATE(108)] = 1519,
  [SMALL_STATE(109)] = 1526,
  [SMALL_STATE(110)] = 1533,
  [SMALL_STATE(111)] = 1540,
  [SMALL_STATE(112)] = 1547,
  [SMALL_STATE(113)] = 1554,
  [SMALL_STATE(114)] = 1561,
  [SMALL_STATE(115)] = 1568,
  [SMALL_STATE(116)] = 1575,
  [SMALL_STATE(117)] = 1582,
  [SMALL_STATE(118)] = 1589,
  [SMALL_STATE(119)] = 1596,
  [SMALL_STATE(120)] = 1603,
  [SMALL_STATE(121)] = 1610,
  [SMALL_STATE(122)] = 1617,
  [SMALL_STATE(123)] = 1624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(92),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(91),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(90),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(57),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(45),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(46),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2), SHIFT_REPEAT(47),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(26),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(25),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(24),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(44),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2), SHIFT_REPEAT(104),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_constant, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
