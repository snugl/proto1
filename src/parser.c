#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_put = 8,
  anon_sym_EQ = 9,
  anon_sym_debug = 10,
  anon_sym_trans = 11,
  anon_sym_pers = 12,
  anon_sym_sub = 13,
  anon_sym_lab = 14,
  anon_sym_jump = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_DOT = 21,
  sym_key_in = 22,
  sym_key_out = 23,
  sym_eos = 24,
  sym_bind = 25,
  sym_open_scope = 26,
  sym_close_scope = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_string_token1 = 29,
  sym_iden = 30,
  sym_number = 31,
  sym_source_file = 32,
  sym_unit = 33,
  sym_import = 34,
  sym_sequence = 35,
  sym_routine = 36,
  sym_param_interface = 37,
  sym_param_def = 38,
  sym_statement = 39,
  sym_put = 40,
  sym_debug = 41,
  sym_trans = 42,
  sym_pers = 43,
  sym_sub = 44,
  sym_lab = 45,
  sym_jump = 46,
  sym_expr = 47,
  sym_binary = 48,
  sym_paran = 49,
  sym_op = 50,
  sym_string = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_sequence_repeat1 = 53,
  aux_sym_routine_repeat1 = 54,
  aux_sym_param_interface_repeat1 = 55,
  aux_sym_sub_repeat1 = 56,
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
  [anon_sym_put] = "put",
  [anon_sym_EQ] = "=",
  [anon_sym_debug] = "debug",
  [anon_sym_trans] = "trans",
  [anon_sym_pers] = "pers",
  [anon_sym_sub] = "sub",
  [anon_sym_lab] = "lab",
  [anon_sym_jump] = "jump",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_DOT] = ".",
  [sym_key_in] = "key_in",
  [sym_key_out] = "key_out",
  [sym_eos] = "eos",
  [sym_bind] = "bind",
  [sym_open_scope] = "open_scope",
  [sym_close_scope] = "close_scope",
  [anon_sym_SQUOTE] = "'",
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
  [sym_statement] = "statement",
  [sym_put] = "put",
  [sym_debug] = "debug",
  [sym_trans] = "trans",
  [sym_pers] = "pers",
  [sym_sub] = "sub",
  [sym_lab] = "lab",
  [sym_jump] = "jump",
  [sym_expr] = "expr",
  [sym_binary] = "binary",
  [sym_paran] = "paran",
  [sym_op] = "op",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_routine_repeat1] = "routine_repeat1",
  [aux_sym_param_interface_repeat1] = "param_interface_repeat1",
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
  [anon_sym_put] = anon_sym_put,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_trans] = anon_sym_trans,
  [anon_sym_pers] = anon_sym_pers,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_lab] = anon_sym_lab,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_key_in] = sym_key_in,
  [sym_key_out] = sym_key_out,
  [sym_eos] = sym_eos,
  [sym_bind] = sym_bind,
  [sym_open_scope] = sym_open_scope,
  [sym_close_scope] = sym_close_scope,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [sym_statement] = sym_statement,
  [sym_put] = sym_put,
  [sym_debug] = sym_debug,
  [sym_trans] = sym_trans,
  [sym_pers] = sym_pers,
  [sym_sub] = sym_sub,
  [sym_lab] = sym_lab,
  [sym_jump] = sym_jump,
  [sym_expr] = sym_expr,
  [sym_binary] = sym_binary,
  [sym_paran] = sym_paran,
  [sym_op] = sym_op,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_routine_repeat1] = aux_sym_routine_repeat1,
  [aux_sym_param_interface_repeat1] = aux_sym_param_interface_repeat1,
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
  [sym_open_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_close_scope] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [12] = 7,
  [13] = 13,
  [14] = 9,
  [15] = 15,
  [16] = 8,
  [17] = 10,
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
  [28] = 22,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 34,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'j') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'q') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_rout);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_pers);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_lab);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_key_in);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_key_out);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_bind);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_open_scope);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_close_scope);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_close_scope);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_iden);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_iden);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
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
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
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
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 72},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
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
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_trans] = ACTIONS(1),
    [anon_sym_pers] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_lab] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_key_in] = ACTIONS(1),
    [sym_key_out] = ACTIONS(1),
    [sym_eos] = ACTIONS(1),
    [sym_bind] = ACTIONS(1),
    [sym_open_scope] = ACTIONS(1),
    [sym_close_scope] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_unit] = STATE(13),
    [sym_import] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_routine] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
    [anon_sym_seq] = ACTIONS(7),
    [anon_sym_rout] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_put,
    ACTIONS(13), 1,
      anon_sym_debug,
    ACTIONS(15), 1,
      anon_sym_trans,
    ACTIONS(17), 1,
      anon_sym_pers,
    ACTIONS(19), 1,
      anon_sym_sub,
    ACTIONS(21), 1,
      anon_sym_lab,
    ACTIONS(23), 1,
      anon_sym_jump,
    ACTIONS(25), 1,
      sym_close_scope,
    STATE(3), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(68), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [38] = 10,
    ACTIONS(11), 1,
      anon_sym_put,
    ACTIONS(13), 1,
      anon_sym_debug,
    ACTIONS(15), 1,
      anon_sym_trans,
    ACTIONS(17), 1,
      anon_sym_pers,
    ACTIONS(19), 1,
      anon_sym_sub,
    ACTIONS(21), 1,
      anon_sym_lab,
    ACTIONS(23), 1,
      anon_sym_jump,
    ACTIONS(27), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(68), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [76] = 10,
    ACTIONS(11), 1,
      anon_sym_put,
    ACTIONS(13), 1,
      anon_sym_debug,
    ACTIONS(15), 1,
      anon_sym_trans,
    ACTIONS(17), 1,
      anon_sym_pers,
    ACTIONS(19), 1,
      anon_sym_sub,
    ACTIONS(21), 1,
      anon_sym_lab,
    ACTIONS(23), 1,
      anon_sym_jump,
    ACTIONS(27), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(68), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [114] = 10,
    ACTIONS(11), 1,
      anon_sym_put,
    ACTIONS(13), 1,
      anon_sym_debug,
    ACTIONS(15), 1,
      anon_sym_trans,
    ACTIONS(17), 1,
      anon_sym_pers,
    ACTIONS(19), 1,
      anon_sym_sub,
    ACTIONS(21), 1,
      anon_sym_lab,
    ACTIONS(23), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(68), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [152] = 10,
    ACTIONS(31), 1,
      anon_sym_put,
    ACTIONS(34), 1,
      anon_sym_debug,
    ACTIONS(37), 1,
      anon_sym_trans,
    ACTIONS(40), 1,
      anon_sym_pers,
    ACTIONS(43), 1,
      anon_sym_sub,
    ACTIONS(46), 1,
      anon_sym_lab,
    ACTIONS(49), 1,
      anon_sym_jump,
    ACTIONS(52), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(68), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [190] = 2,
    STATE(34), 1,
      sym_op,
    ACTIONS(54), 10,
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
  [206] = 1,
    ACTIONS(56), 10,
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
  [219] = 1,
    ACTIONS(58), 10,
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
  [232] = 1,
    ACTIONS(60), 10,
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
  [245] = 5,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(68), 1,
      sym_iden,
    STATE(40), 1,
      sym_op,
    ACTIONS(66), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [266] = 3,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_op,
    ACTIONS(70), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [283] = 6,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(7), 1,
      anon_sym_seq,
    ACTIONS(9), 1,
      anon_sym_rout,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(45), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [305] = 2,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [319] = 6,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_use,
    ACTIONS(81), 1,
      anon_sym_seq,
    ACTIONS(84), 1,
      anon_sym_rout,
    STATE(15), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(45), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [341] = 2,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [355] = 2,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [369] = 3,
    ACTIONS(93), 1,
      sym_bind,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [384] = 3,
    ACTIONS(95), 1,
      anon_sym_EQ,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [399] = 1,
    ACTIONS(97), 8,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [410] = 3,
    ACTIONS(99), 1,
      sym_bind,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [425] = 3,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [440] = 3,
    ACTIONS(103), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [455] = 3,
    ACTIONS(105), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [470] = 3,
    ACTIONS(107), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [485] = 3,
    ACTIONS(109), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [500] = 3,
    ACTIONS(111), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [515] = 3,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_op,
    ACTIONS(91), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [530] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(22), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [547] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(28), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [564] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(18), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [581] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(21), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [598] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(24), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [615] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(7), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [632] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(26), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [649] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(25), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [666] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(27), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [683] = 5,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_iden,
    ACTIONS(125), 1,
      sym_number,
    STATE(11), 1,
      sym_expr,
    STATE(17), 2,
      sym_binary,
      sym_paran,
  [700] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(19), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [717] = 5,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_iden,
    ACTIONS(125), 1,
      sym_number,
    STATE(12), 1,
      sym_expr,
    STATE(17), 2,
      sym_binary,
      sym_paran,
  [734] = 5,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_iden,
    ACTIONS(119), 1,
      sym_number,
    STATE(23), 1,
      sym_expr,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [751] = 3,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 2,
      sym_key_in,
      sym_key_out,
    STATE(44), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [763] = 3,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 2,
      sym_key_in,
      sym_key_out,
    STATE(42), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [775] = 3,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      sym_key_in,
      sym_key_out,
    STATE(44), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [787] = 1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [794] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [801] = 1,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [808] = 1,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [815] = 1,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [822] = 1,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [829] = 1,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [836] = 1,
    ACTIONS(152), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [842] = 3,
    ACTIONS(154), 1,
      sym_close_scope,
    ACTIONS(156), 1,
      sym_iden,
    STATE(55), 1,
      aux_sym_sequence_repeat1,
  [852] = 2,
    ACTIONS(160), 1,
      sym_number,
    ACTIONS(158), 2,
      anon_sym_LPAREN,
      sym_iden,
  [860] = 3,
    ACTIONS(162), 1,
      sym_close_scope,
    ACTIONS(164), 1,
      sym_iden,
    STATE(55), 1,
      aux_sym_sequence_repeat1,
  [870] = 3,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      sym_iden,
    STATE(58), 1,
      aux_sym_sub_repeat1,
  [880] = 3,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_open_scope,
    STATE(72), 1,
      sym_param_interface,
  [890] = 3,
    ACTIONS(169), 1,
      sym_iden,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_sub_repeat1,
  [900] = 2,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 2,
      sym_close_scope,
      sym_iden,
  [908] = 3,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 1,
      sym_iden,
    STATE(60), 1,
      aux_sym_sub_repeat1,
  [918] = 3,
    ACTIONS(156), 1,
      sym_iden,
    ACTIONS(186), 1,
      sym_close_scope,
    STATE(53), 1,
      aux_sym_sequence_repeat1,
  [928] = 2,
    ACTIONS(188), 1,
      sym_eos,
    ACTIONS(190), 1,
      sym_bind,
  [935] = 2,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym_string,
  [942] = 1,
    ACTIONS(162), 2,
      sym_close_scope,
      sym_iden,
  [947] = 1,
    ACTIONS(194), 2,
      anon_sym_RPAREN,
      sym_iden,
  [952] = 1,
    ACTIONS(196), 1,
      sym_open_scope,
  [956] = 1,
    ACTIONS(198), 1,
      sym_eos,
  [960] = 1,
    ACTIONS(200), 1,
      sym_eos,
  [964] = 1,
    ACTIONS(202), 1,
      sym_eos,
  [968] = 1,
    ACTIONS(204), 1,
      sym_open_scope,
  [972] = 1,
    ACTIONS(206), 1,
      sym_open_scope,
  [976] = 1,
    ACTIONS(208), 1,
      sym_open_scope,
  [980] = 1,
    ACTIONS(210), 1,
      sym_iden,
  [984] = 1,
    ACTIONS(212), 1,
      sym_eos,
  [988] = 1,
    ACTIONS(214), 1,
      sym_iden,
  [992] = 1,
    ACTIONS(216), 1,
      sym_eos,
  [996] = 1,
    ACTIONS(218), 1,
      sym_bind,
  [1000] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [1004] = 1,
    ACTIONS(222), 1,
      sym_eos,
  [1008] = 1,
    ACTIONS(224), 1,
      aux_sym_string_token1,
  [1012] = 1,
    ACTIONS(226), 1,
      sym_iden,
  [1016] = 1,
    ACTIONS(228), 1,
      sym_iden,
  [1020] = 1,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
  [1024] = 1,
    ACTIONS(232), 1,
      sym_eos,
  [1028] = 1,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
  [1032] = 1,
    ACTIONS(236), 1,
      sym_iden,
  [1036] = 1,
    ACTIONS(238), 1,
      sym_iden,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 283,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 341,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 369,
  [SMALL_STATE(19)] = 384,
  [SMALL_STATE(20)] = 399,
  [SMALL_STATE(21)] = 410,
  [SMALL_STATE(22)] = 425,
  [SMALL_STATE(23)] = 440,
  [SMALL_STATE(24)] = 455,
  [SMALL_STATE(25)] = 470,
  [SMALL_STATE(26)] = 485,
  [SMALL_STATE(27)] = 500,
  [SMALL_STATE(28)] = 515,
  [SMALL_STATE(29)] = 530,
  [SMALL_STATE(30)] = 547,
  [SMALL_STATE(31)] = 564,
  [SMALL_STATE(32)] = 581,
  [SMALL_STATE(33)] = 598,
  [SMALL_STATE(34)] = 615,
  [SMALL_STATE(35)] = 632,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 666,
  [SMALL_STATE(38)] = 683,
  [SMALL_STATE(39)] = 700,
  [SMALL_STATE(40)] = 717,
  [SMALL_STATE(41)] = 734,
  [SMALL_STATE(42)] = 751,
  [SMALL_STATE(43)] = 763,
  [SMALL_STATE(44)] = 775,
  [SMALL_STATE(45)] = 787,
  [SMALL_STATE(46)] = 794,
  [SMALL_STATE(47)] = 801,
  [SMALL_STATE(48)] = 808,
  [SMALL_STATE(49)] = 815,
  [SMALL_STATE(50)] = 822,
  [SMALL_STATE(51)] = 829,
  [SMALL_STATE(52)] = 836,
  [SMALL_STATE(53)] = 842,
  [SMALL_STATE(54)] = 852,
  [SMALL_STATE(55)] = 860,
  [SMALL_STATE(56)] = 870,
  [SMALL_STATE(57)] = 880,
  [SMALL_STATE(58)] = 890,
  [SMALL_STATE(59)] = 900,
  [SMALL_STATE(60)] = 908,
  [SMALL_STATE(61)] = 918,
  [SMALL_STATE(62)] = 928,
  [SMALL_STATE(63)] = 935,
  [SMALL_STATE(64)] = 942,
  [SMALL_STATE(65)] = 947,
  [SMALL_STATE(66)] = 952,
  [SMALL_STATE(67)] = 956,
  [SMALL_STATE(68)] = 960,
  [SMALL_STATE(69)] = 964,
  [SMALL_STATE(70)] = 968,
  [SMALL_STATE(71)] = 972,
  [SMALL_STATE(72)] = 976,
  [SMALL_STATE(73)] = 980,
  [SMALL_STATE(74)] = 984,
  [SMALL_STATE(75)] = 988,
  [SMALL_STATE(76)] = 992,
  [SMALL_STATE(77)] = 996,
  [SMALL_STATE(78)] = 1000,
  [SMALL_STATE(79)] = 1004,
  [SMALL_STATE(80)] = 1008,
  [SMALL_STATE(81)] = 1012,
  [SMALL_STATE(82)] = 1016,
  [SMALL_STATE(83)] = 1020,
  [SMALL_STATE(84)] = 1024,
  [SMALL_STATE(85)] = 1028,
  [SMALL_STATE(86)] = 1032,
  [SMALL_STATE(87)] = 1036,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(39),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(41),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(32),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(31),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(81),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(82),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(87),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_repeat1, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paran, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(86),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(59),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(77),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
