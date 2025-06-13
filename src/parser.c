#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
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
  [12] = 12,
  [13] = 13,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 11,
  [18] = 12,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 32,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
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
  [42] = {.lex_state = 2},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
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
    [sym_source_file] = STATE(87),
    [sym_unit] = STATE(9),
    [sym_import] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_routine] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_seq] = ACTIONS(9),
    [anon_sym_rout] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(86), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [41] = 11,
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
    ACTIONS(31), 1,
      sym_close_scope,
    STATE(4), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(86), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [82] = 11,
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
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(86), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [123] = 11,
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
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(86), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [164] = 11,
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
    ACTIONS(59), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(86), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [205] = 2,
    STATE(34), 1,
      sym_op,
    ACTIONS(61), 10,
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
  [221] = 7,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_use,
    ACTIONS(71), 1,
      anon_sym_seq,
    ACTIONS(74), 1,
      anon_sym_rout,
    STATE(8), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(47), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [246] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_seq,
    ACTIONS(11), 1,
      anon_sym_rout,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(47), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [271] = 1,
    ACTIONS(79), 10,
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
  [284] = 1,
    ACTIONS(81), 10,
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
  [297] = 1,
    ACTIONS(83), 10,
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
  [310] = 5,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      sym_iden,
    STATE(39), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [331] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_op,
    ACTIONS(93), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [348] = 1,
    ACTIONS(95), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [360] = 1,
    ACTIONS(97), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [372] = 2,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [386] = 2,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [400] = 2,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_iden,
  [414] = 3,
    ACTIONS(105), 1,
      anon_sym_EQ,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [429] = 3,
    ACTIONS(109), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [444] = 3,
    ACTIONS(111), 1,
      sym_bind,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [459] = 3,
    ACTIONS(113), 1,
      sym_bind,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [474] = 3,
    ACTIONS(115), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [489] = 3,
    ACTIONS(117), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [504] = 3,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [519] = 3,
    ACTIONS(121), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [534] = 3,
    ACTIONS(123), 1,
      sym_eos,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [549] = 3,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_op,
    ACTIONS(107), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [564] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_expr,
    ACTIONS(129), 2,
      sym_iden,
      sym_number,
    STATE(19), 2,
      sym_binary,
      sym_paran,
  [579] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [594] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [609] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [624] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [639] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [654] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [669] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [684] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [699] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_expr,
    ACTIONS(129), 2,
      sym_iden,
      sym_number,
    STATE(19), 2,
      sym_binary,
      sym_paran,
  [714] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [729] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [744] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_expr,
    ACTIONS(133), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [759] = 1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [767] = 3,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 2,
      sym_key_in,
      sym_key_out,
    STATE(44), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [779] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 2,
      sym_key_in,
      sym_key_out,
    STATE(50), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [791] = 1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [799] = 1,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [807] = 1,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [815] = 1,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [823] = 3,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 2,
      sym_key_in,
      sym_key_out,
    STATE(44), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [835] = 1,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [843] = 1,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [851] = 3,
    ACTIONS(160), 1,
      sym_close_scope,
    ACTIONS(162), 1,
      sym_iden,
    STATE(61), 1,
      aux_sym_sequence_repeat1,
  [861] = 1,
    ACTIONS(164), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [867] = 1,
    ACTIONS(166), 3,
      anon_sym_LPAREN,
      sym_iden,
      sym_number,
  [873] = 3,
    ACTIONS(168), 1,
      sym_close_scope,
    ACTIONS(170), 1,
      sym_iden,
    STATE(56), 1,
      aux_sym_sequence_repeat1,
  [883] = 3,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      sym_iden,
    STATE(59), 1,
      aux_sym_sub_repeat1,
  [893] = 2,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 2,
      sym_close_scope,
      sym_iden,
  [901] = 3,
    ACTIONS(175), 1,
      sym_iden,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_sub_repeat1,
  [911] = 3,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      sym_iden,
    STATE(60), 1,
      aux_sym_sub_repeat1,
  [921] = 3,
    ACTIONS(162), 1,
      sym_iden,
    ACTIONS(188), 1,
      sym_close_scope,
    STATE(56), 1,
      aux_sym_sequence_repeat1,
  [931] = 3,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_open_scope,
    STATE(88), 1,
      sym_param_interface,
  [941] = 1,
    ACTIONS(168), 2,
      sym_close_scope,
      sym_iden,
  [946] = 1,
    ACTIONS(194), 2,
      anon_sym_RPAREN,
      sym_iden,
  [951] = 2,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym_string,
  [958] = 2,
    ACTIONS(198), 1,
      sym_eos,
    ACTIONS(200), 1,
      sym_bind,
  [965] = 1,
    ACTIONS(202), 1,
      sym_iden,
  [969] = 1,
    ACTIONS(204), 1,
      sym_iden,
  [973] = 1,
    ACTIONS(206), 1,
      sym_eos,
  [977] = 1,
    ACTIONS(208), 1,
      aux_sym_string_token1,
  [981] = 1,
    ACTIONS(210), 1,
      sym_eos,
  [985] = 1,
    ACTIONS(212), 1,
      sym_open_scope,
  [989] = 1,
    ACTIONS(214), 1,
      sym_eos,
  [993] = 1,
    ACTIONS(216), 1,
      sym_bind,
  [997] = 1,
    ACTIONS(218), 1,
      sym_iden,
  [1001] = 1,
    ACTIONS(220), 1,
      sym_open_scope,
  [1005] = 1,
    ACTIONS(222), 1,
      sym_iden,
  [1009] = 1,
    ACTIONS(224), 1,
      sym_eos,
  [1013] = 1,
    ACTIONS(226), 1,
      sym_iden,
  [1017] = 1,
    ACTIONS(228), 1,
      sym_eos,
  [1021] = 1,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
  [1025] = 1,
    ACTIONS(232), 1,
      sym_iden,
  [1029] = 1,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
  [1033] = 1,
    ACTIONS(236), 1,
      sym_eos,
  [1037] = 1,
    ACTIONS(238), 1,
      sym_open_scope,
  [1041] = 1,
    ACTIONS(240), 1,
      sym_eos,
  [1045] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [1049] = 1,
    ACTIONS(244), 1,
      sym_open_scope,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 221,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 271,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 310,
  [SMALL_STATE(14)] = 331,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 360,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 400,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 429,
  [SMALL_STATE(22)] = 444,
  [SMALL_STATE(23)] = 459,
  [SMALL_STATE(24)] = 474,
  [SMALL_STATE(25)] = 489,
  [SMALL_STATE(26)] = 504,
  [SMALL_STATE(27)] = 519,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 549,
  [SMALL_STATE(30)] = 564,
  [SMALL_STATE(31)] = 579,
  [SMALL_STATE(32)] = 594,
  [SMALL_STATE(33)] = 609,
  [SMALL_STATE(34)] = 624,
  [SMALL_STATE(35)] = 639,
  [SMALL_STATE(36)] = 654,
  [SMALL_STATE(37)] = 669,
  [SMALL_STATE(38)] = 684,
  [SMALL_STATE(39)] = 699,
  [SMALL_STATE(40)] = 714,
  [SMALL_STATE(41)] = 729,
  [SMALL_STATE(42)] = 744,
  [SMALL_STATE(43)] = 759,
  [SMALL_STATE(44)] = 767,
  [SMALL_STATE(45)] = 779,
  [SMALL_STATE(46)] = 791,
  [SMALL_STATE(47)] = 799,
  [SMALL_STATE(48)] = 807,
  [SMALL_STATE(49)] = 815,
  [SMALL_STATE(50)] = 823,
  [SMALL_STATE(51)] = 835,
  [SMALL_STATE(52)] = 843,
  [SMALL_STATE(53)] = 851,
  [SMALL_STATE(54)] = 861,
  [SMALL_STATE(55)] = 867,
  [SMALL_STATE(56)] = 873,
  [SMALL_STATE(57)] = 883,
  [SMALL_STATE(58)] = 893,
  [SMALL_STATE(59)] = 901,
  [SMALL_STATE(60)] = 911,
  [SMALL_STATE(61)] = 921,
  [SMALL_STATE(62)] = 931,
  [SMALL_STATE(63)] = 941,
  [SMALL_STATE(64)] = 946,
  [SMALL_STATE(65)] = 951,
  [SMALL_STATE(66)] = 958,
  [SMALL_STATE(67)] = 965,
  [SMALL_STATE(68)] = 969,
  [SMALL_STATE(69)] = 973,
  [SMALL_STATE(70)] = 977,
  [SMALL_STATE(71)] = 981,
  [SMALL_STATE(72)] = 985,
  [SMALL_STATE(73)] = 989,
  [SMALL_STATE(74)] = 993,
  [SMALL_STATE(75)] = 997,
  [SMALL_STATE(76)] = 1001,
  [SMALL_STATE(77)] = 1005,
  [SMALL_STATE(78)] = 1009,
  [SMALL_STATE(79)] = 1013,
  [SMALL_STATE(80)] = 1017,
  [SMALL_STATE(81)] = 1021,
  [SMALL_STATE(82)] = 1025,
  [SMALL_STATE(83)] = 1029,
  [SMALL_STATE(84)] = 1033,
  [SMALL_STATE(85)] = 1037,
  [SMALL_STATE(86)] = 1041,
  [SMALL_STATE(87)] = 1045,
  [SMALL_STATE(88)] = 1049,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(38),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(40),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(41),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(31),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(75),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(68),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(79),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sub_repeat1, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paran, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(77),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(58),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(74),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
