#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  anon_sym_use = 2,
  anon_sym_seq = 3,
  anon_sym_COMMA = 4,
  anon_sym_rout = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_seq_name = 8,
  anon_sym_put = 9,
  anon_sym_EQ = 10,
  anon_sym_debug = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_trans = 13,
  anon_sym_pers = 14,
  anon_sym_sub = 15,
  anon_sym_lab = 16,
  anon_sym_jump = 17,
  anon_sym_write = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_STAR = 21,
  anon_sym_GT = 22,
  anon_sym_LT = 23,
  anon_sym_DOT = 24,
  sym_debug_literal = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym_key_in = 28,
  sym_key_out = 29,
  sym_eos = 30,
  sym_bind = 31,
  aux_sym_string_token1 = 32,
  sym_iden = 33,
  sym_number = 34,
  sym_source_file = 35,
  sym_unit = 36,
  sym_import = 37,
  sym_sequence = 38,
  sym_routine = 39,
  sym_param_interface = 40,
  sym_param_def = 41,
  sym_param_name = 42,
  sym_rout_name = 43,
  sym_seq_entry = 44,
  sym_statement = 45,
  sym_put = 46,
  sym_debug = 47,
  sym_trans = 48,
  sym_pers = 49,
  sym_sub = 50,
  sym_lab = 51,
  sym_jump = 52,
  sym_write = 53,
  sym_expr = 54,
  sym_binary = 55,
  sym_paran = 56,
  sym_op = 57,
  sym_label = 58,
  sym_variable = 59,
  sym_debug_string = 60,
  sym_debug_variable = 61,
  sym_open_scope = 62,
  sym_close_scope = 63,
  sym_string = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_sequence_repeat1 = 66,
  aux_sym_routine_repeat1 = 67,
  aux_sym_param_interface_repeat1 = 68,
  aux_sym_debug_repeat1 = 69,
  aux_sym_sub_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_use] = "use",
  [anon_sym_seq] = "seq",
  [anon_sym_COMMA] = ",",
  [anon_sym_rout] = "rout",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_seq_name] = "seq_name",
  [anon_sym_put] = "put",
  [anon_sym_EQ] = "=",
  [anon_sym_debug] = "debug",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_trans] = "trans",
  [anon_sym_pers] = "pers",
  [anon_sym_sub] = "sub",
  [anon_sym_lab] = "lab",
  [anon_sym_jump] = "jump",
  [anon_sym_write] = "write",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_DOT] = ".",
  [sym_debug_literal] = "debug_literal",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_key_in] = "key_in",
  [sym_key_out] = "key_out",
  [sym_eos] = "eos",
  [sym_bind] = "bind",
  [aux_sym_string_token1] = "string_token1",
  [sym_iden] = "iden",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_unit] = "unit",
  [sym_import] = "import",
  [sym_sequence] = "sequence",
  [sym_routine] = "routine",
  [sym_param_interface] = "param_interface",
  [sym_param_def] = "param_def",
  [sym_param_name] = "param_name",
  [sym_rout_name] = "rout_name",
  [sym_seq_entry] = "seq_entry",
  [sym_statement] = "statement",
  [sym_put] = "put",
  [sym_debug] = "debug",
  [sym_trans] = "trans",
  [sym_pers] = "pers",
  [sym_sub] = "sub",
  [sym_lab] = "lab",
  [sym_jump] = "jump",
  [sym_write] = "write",
  [sym_expr] = "expr",
  [sym_binary] = "binary",
  [sym_paran] = "paran",
  [sym_op] = "op",
  [sym_label] = "label",
  [sym_variable] = "variable",
  [sym_debug_string] = "debug_string",
  [sym_debug_variable] = "debug_variable",
  [sym_open_scope] = "open_scope",
  [sym_close_scope] = "close_scope",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_routine_repeat1] = "routine_repeat1",
  [aux_sym_param_interface_repeat1] = "param_interface_repeat1",
  [aux_sym_debug_repeat1] = "debug_repeat1",
  [aux_sym_sub_repeat1] = "sub_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_rout] = anon_sym_rout,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_seq_name] = sym_seq_name,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_trans] = anon_sym_trans,
  [anon_sym_pers] = anon_sym_pers,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_lab] = anon_sym_lab,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_debug_literal] = sym_debug_literal,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_key_in] = sym_key_in,
  [sym_key_out] = sym_key_out,
  [sym_eos] = sym_eos,
  [sym_bind] = sym_bind,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_iden] = sym_iden,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_unit] = sym_unit,
  [sym_import] = sym_import,
  [sym_sequence] = sym_sequence,
  [sym_routine] = sym_routine,
  [sym_param_interface] = sym_param_interface,
  [sym_param_def] = sym_param_def,
  [sym_param_name] = sym_param_name,
  [sym_rout_name] = sym_rout_name,
  [sym_seq_entry] = sym_seq_entry,
  [sym_statement] = sym_statement,
  [sym_put] = sym_put,
  [sym_debug] = sym_debug,
  [sym_trans] = sym_trans,
  [sym_pers] = sym_pers,
  [sym_sub] = sym_sub,
  [sym_lab] = sym_lab,
  [sym_jump] = sym_jump,
  [sym_write] = sym_write,
  [sym_expr] = sym_expr,
  [sym_binary] = sym_binary,
  [sym_paran] = sym_paran,
  [sym_op] = sym_op,
  [sym_label] = sym_label,
  [sym_variable] = sym_variable,
  [sym_debug_string] = sym_debug_string,
  [sym_debug_variable] = sym_debug_variable,
  [sym_open_scope] = sym_open_scope,
  [sym_close_scope] = sym_close_scope,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_routine_repeat1] = aux_sym_routine_repeat1,
  [aux_sym_param_interface_repeat1] = aux_sym_param_interface_repeat1,
  [aux_sym_debug_repeat1] = aux_sym_debug_repeat1,
  [aux_sym_sub_repeat1] = aux_sym_sub_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rout] = {
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
  [sym_seq_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_debug_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_key_in] = {
    .visible = true,
    .named = true,
  },
  [sym_key_out] = {
    .visible = true,
    .named = true,
  },
  [sym_eos] = {
    .visible = true,
    .named = true,
  },
  [sym_bind] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_iden] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_routine] = {
    .visible = true,
    .named = true,
  },
  [sym_param_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_param_def] = {
    .visible = true,
    .named = true,
  },
  [sym_param_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rout_name] = {
    .visible = true,
    .named = true,
  },
  [sym_seq_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put] = {
    .visible = true,
    .named = true,
  },
  [sym_debug] = {
    .visible = true,
    .named = true,
  },
  [sym_trans] = {
    .visible = true,
    .named = true,
  },
  [sym_pers] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_lab] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_write] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_paran] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_string] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_open_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_close_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_routine_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_interface_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_debug_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sub_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_left = 2,
  field_op = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_left] = "left",
  [field_op] = "op",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0},
  [1] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
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
  [79] = 31,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'j') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'q') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_rout);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_seq_name);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_seq_name);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_pers);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_lab);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_key_in);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_key_out);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_bind);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_iden);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
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
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
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
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
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
  [102] = {.lex_state = 76},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_rout] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_seq_name] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_trans] = ACTIONS(1),
    [anon_sym_pers] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_lab] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_key_in] = ACTIONS(1),
    [sym_key_out] = ACTIONS(1),
    [sym_eos] = ACTIONS(1),
    [sym_bind] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(98),
    [sym_unit] = STATE(13),
    [sym_import] = STATE(50),
    [sym_sequence] = STATE(50),
    [sym_routine] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_seq] = ACTIONS(9),
    [anon_sym_rout] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_close_scope,
    STATE(4), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(91), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [48] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(91), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [96] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(91), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [144] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(91), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [192] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_put,
    ACTIONS(39), 1,
      anon_sym_debug,
    ACTIONS(42), 1,
      anon_sym_trans,
    ACTIONS(45), 1,
      anon_sym_pers,
    ACTIONS(48), 1,
      anon_sym_sub,
    ACTIONS(51), 1,
      anon_sym_lab,
    ACTIONS(54), 1,
      anon_sym_jump,
    ACTIONS(57), 1,
      anon_sym_write,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(91), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [237] = 1,
    ACTIONS(62), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      anon_sym_RBRACE,
      sym_eos,
      sym_bind,
      sym_iden,
  [253] = 2,
    STATE(22), 1,
      sym_op,
    ACTIONS(64), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [271] = 1,
    ACTIONS(66), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [286] = 1,
    ACTIONS(68), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [301] = 1,
    ACTIONS(70), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [316] = 1,
    ACTIONS(72), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [331] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_seq,
    ACTIONS(11), 1,
      anon_sym_rout,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(50), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [356] = 1,
    ACTIONS(76), 10,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_write,
      anon_sym_RBRACE,
  [369] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(34), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [394] = 7,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_use,
    ACTIONS(94), 1,
      anon_sym_seq,
    ACTIONS(97), 1,
      anon_sym_rout,
    STATE(16), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(50), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [419] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(36), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [444] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(37), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [469] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_number,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [494] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(42), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [519] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(38), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [544] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(8), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [569] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(39), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [594] = 1,
    ACTIONS(102), 10,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_write,
      anon_sym_RBRACE,
  [607] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(33), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [632] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(32), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [657] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(41), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [682] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(40), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [707] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_number,
    STATE(30), 1,
      sym_expr,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [732] = 4,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_op,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      sym_iden,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [751] = 1,
    ACTIONS(110), 10,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_write,
      anon_sym_RBRACE,
  [764] = 3,
    ACTIONS(112), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [779] = 3,
    ACTIONS(114), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [794] = 3,
    ACTIONS(116), 1,
      anon_sym_EQ,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [809] = 3,
    ACTIONS(118), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [824] = 3,
    ACTIONS(120), 1,
      sym_bind,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [839] = 3,
    ACTIONS(122), 1,
      sym_bind,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [854] = 3,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [869] = 3,
    ACTIONS(126), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [884] = 3,
    ACTIONS(128), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [899] = 3,
    ACTIONS(130), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [914] = 3,
    ACTIONS(132), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [929] = 6,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      sym_debug_literal,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      aux_sym_string_token1,
    STATE(69), 1,
      sym_debug_variable,
    STATE(44), 2,
      sym_debug_string,
      aux_sym_debug_repeat1,
  [949] = 5,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      sym_debug_literal,
    STATE(69), 1,
      sym_debug_variable,
    STATE(45), 2,
      sym_debug_string,
      aux_sym_debug_repeat1,
  [966] = 5,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      sym_debug_literal,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_debug_variable,
    STATE(45), 2,
      sym_debug_string,
      aux_sym_debug_repeat1,
  [983] = 3,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 2,
      sym_key_in,
      sym_key_out,
    STATE(58), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [995] = 1,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1003] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 2,
      sym_key_in,
      sym_key_out,
    STATE(48), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [1015] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1023] = 1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1031] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1039] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1047] = 2,
    ACTIONS(175), 2,
      sym_seq_name,
      sym_iden,
    ACTIONS(173), 3,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      sym_number,
  [1057] = 1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1065] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1073] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1081] = 5,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_iden,
    STATE(49), 1,
      sym_close_scope,
    STATE(60), 1,
      aux_sym_sequence_repeat1,
    STATE(71), 1,
      sym_seq_entry,
  [1097] = 3,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 2,
      sym_key_in,
      sym_key_out,
    STATE(48), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [1109] = 5,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_iden,
    STATE(56), 1,
      sym_close_scope,
    STATE(57), 1,
      aux_sym_sequence_repeat1,
    STATE(71), 1,
      sym_seq_entry,
  [1125] = 4,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      sym_iden,
    STATE(60), 1,
      aux_sym_sequence_repeat1,
    STATE(71), 1,
      sym_seq_entry,
  [1138] = 4,
    ACTIONS(192), 1,
      sym_eos,
    ACTIONS(194), 1,
      sym_bind,
    ACTIONS(196), 1,
      sym_iden,
    STATE(82), 1,
      sym_label,
  [1151] = 4,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      sym_iden,
    STATE(63), 1,
      aux_sym_sub_repeat1,
    STATE(94), 1,
      sym_param_name,
  [1164] = 4,
    ACTIONS(200), 1,
      sym_iden,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_sub_repeat1,
    STATE(94), 1,
      sym_param_name,
  [1177] = 4,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_open_scope,
    STATE(81), 1,
      sym_param_interface,
  [1190] = 4,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_iden,
    STATE(65), 1,
      aux_sym_sub_repeat1,
    STATE(94), 1,
      sym_param_name,
  [1203] = 1,
    ACTIONS(213), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [1209] = 3,
    ACTIONS(196), 1,
      sym_iden,
    ACTIONS(215), 1,
      sym_eos,
    STATE(97), 1,
      sym_label,
  [1219] = 1,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_iden,
  [1225] = 2,
    ACTIONS(221), 1,
      sym_debug_literal,
    ACTIONS(219), 2,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [1233] = 2,
    STATE(92), 1,
      sym_variable,
    ACTIONS(80), 2,
      sym_seq_name,
      sym_iden,
  [1241] = 2,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1249] = 2,
    ACTIONS(229), 1,
      sym_debug_literal,
    ACTIONS(227), 2,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [1257] = 2,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_open_scope,
  [1264] = 2,
    ACTIONS(233), 1,
      sym_iden,
    STATE(64), 1,
      sym_rout_name,
  [1271] = 2,
    ACTIONS(233), 1,
      sym_iden,
    STATE(95), 1,
      sym_rout_name,
  [1278] = 2,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_string,
  [1285] = 2,
    ACTIONS(200), 1,
      sym_iden,
    STATE(90), 1,
      sym_param_name,
  [1292] = 1,
    ACTIONS(235), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [1297] = 1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1302] = 1,
    ACTIONS(237), 2,
      sym_eos,
      sym_bind,
  [1307] = 2,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_open_scope,
  [1314] = 2,
    ACTIONS(239), 1,
      sym_eos,
    ACTIONS(241), 1,
      sym_bind,
  [1321] = 1,
    ACTIONS(243), 2,
      sym_eos,
      sym_bind,
  [1326] = 1,
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1331] = 1,
    ACTIONS(245), 2,
      anon_sym_RPAREN,
      sym_iden,
  [1336] = 1,
    ACTIONS(247), 1,
      sym_eos,
  [1340] = 1,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
  [1344] = 1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
  [1348] = 1,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
  [1352] = 1,
    ACTIONS(255), 1,
      sym_eos,
  [1356] = 1,
    ACTIONS(257), 1,
      sym_eos,
  [1360] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1364] = 1,
    ACTIONS(261), 1,
      sym_eos,
  [1368] = 1,
    ACTIONS(263), 1,
      sym_bind,
  [1372] = 1,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
  [1376] = 1,
    ACTIONS(267), 1,
      sym_eos,
  [1380] = 1,
    ACTIONS(269), 1,
      sym_eos,
  [1384] = 1,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
  [1388] = 1,
    ACTIONS(273), 1,
      sym_eos,
  [1392] = 1,
    ACTIONS(275), 1,
      sym_eos,
  [1396] = 1,
    ACTIONS(277), 1,
      sym_seq_name,
  [1400] = 1,
    ACTIONS(279), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 369,
  [SMALL_STATE(16)] = 394,
  [SMALL_STATE(17)] = 419,
  [SMALL_STATE(18)] = 444,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 494,
  [SMALL_STATE(21)] = 519,
  [SMALL_STATE(22)] = 544,
  [SMALL_STATE(23)] = 569,
  [SMALL_STATE(24)] = 594,
  [SMALL_STATE(25)] = 607,
  [SMALL_STATE(26)] = 632,
  [SMALL_STATE(27)] = 657,
  [SMALL_STATE(28)] = 682,
  [SMALL_STATE(29)] = 707,
  [SMALL_STATE(30)] = 732,
  [SMALL_STATE(31)] = 751,
  [SMALL_STATE(32)] = 764,
  [SMALL_STATE(33)] = 779,
  [SMALL_STATE(34)] = 794,
  [SMALL_STATE(35)] = 809,
  [SMALL_STATE(36)] = 824,
  [SMALL_STATE(37)] = 839,
  [SMALL_STATE(38)] = 854,
  [SMALL_STATE(39)] = 869,
  [SMALL_STATE(40)] = 884,
  [SMALL_STATE(41)] = 899,
  [SMALL_STATE(42)] = 914,
  [SMALL_STATE(43)] = 929,
  [SMALL_STATE(44)] = 949,
  [SMALL_STATE(45)] = 966,
  [SMALL_STATE(46)] = 983,
  [SMALL_STATE(47)] = 995,
  [SMALL_STATE(48)] = 1003,
  [SMALL_STATE(49)] = 1015,
  [SMALL_STATE(50)] = 1023,
  [SMALL_STATE(51)] = 1031,
  [SMALL_STATE(52)] = 1039,
  [SMALL_STATE(53)] = 1047,
  [SMALL_STATE(54)] = 1057,
  [SMALL_STATE(55)] = 1065,
  [SMALL_STATE(56)] = 1073,
  [SMALL_STATE(57)] = 1081,
  [SMALL_STATE(58)] = 1097,
  [SMALL_STATE(59)] = 1109,
  [SMALL_STATE(60)] = 1125,
  [SMALL_STATE(61)] = 1138,
  [SMALL_STATE(62)] = 1151,
  [SMALL_STATE(63)] = 1164,
  [SMALL_STATE(64)] = 1177,
  [SMALL_STATE(65)] = 1190,
  [SMALL_STATE(66)] = 1203,
  [SMALL_STATE(67)] = 1209,
  [SMALL_STATE(68)] = 1219,
  [SMALL_STATE(69)] = 1225,
  [SMALL_STATE(70)] = 1233,
  [SMALL_STATE(71)] = 1241,
  [SMALL_STATE(72)] = 1249,
  [SMALL_STATE(73)] = 1257,
  [SMALL_STATE(74)] = 1264,
  [SMALL_STATE(75)] = 1271,
  [SMALL_STATE(76)] = 1278,
  [SMALL_STATE(77)] = 1285,
  [SMALL_STATE(78)] = 1292,
  [SMALL_STATE(79)] = 1297,
  [SMALL_STATE(80)] = 1302,
  [SMALL_STATE(81)] = 1307,
  [SMALL_STATE(82)] = 1314,
  [SMALL_STATE(83)] = 1321,
  [SMALL_STATE(84)] = 1326,
  [SMALL_STATE(85)] = 1331,
  [SMALL_STATE(86)] = 1336,
  [SMALL_STATE(87)] = 1340,
  [SMALL_STATE(88)] = 1344,
  [SMALL_STATE(89)] = 1348,
  [SMALL_STATE(90)] = 1352,
  [SMALL_STATE(91)] = 1356,
  [SMALL_STATE(92)] = 1360,
  [SMALL_STATE(93)] = 1364,
  [SMALL_STATE(94)] = 1368,
  [SMALL_STATE(95)] = 1372,
  [SMALL_STATE(96)] = 1376,
  [SMALL_STATE(97)] = 1380,
  [SMALL_STATE(98)] = 1384,
  [SMALL_STATE(99)] = 1388,
  [SMALL_STATE(100)] = 1392,
  [SMALL_STATE(101)] = 1396,
  [SMALL_STATE(102)] = 1400,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(19),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(17),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(75),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(67),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(61),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_scope, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_debug_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_debug_repeat1, 2), SHIFT_REPEAT(69),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_debug_repeat1, 2), SHIFT_REPEAT(70),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(77),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_scope, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(68),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(80),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_entry, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_string, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_string, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_variable, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_variable, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rout_name, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [271] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_snug(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
