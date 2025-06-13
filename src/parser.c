#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'j') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'q') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_rout);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_pers);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_lab);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_key_in);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_key_out);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_bind);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_open_scope);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_close_scope);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_iden);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_iden);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
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
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
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
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
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
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 61},
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
  [81] = {.lex_state = 2},
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
    [sym_source_file] = STATE(61),
    [sym_unit] = STATE(11),
    [sym_import] = STATE(36),
    [sym_sequence] = STATE(36),
    [sym_routine] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    STATE(3), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(67), 7,
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
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(67), 7,
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
    ACTIONS(31), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(67), 7,
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
    STATE(67), 7,
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
    STATE(67), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [205] = 2,
    STATE(31), 1,
      sym_op,
    ACTIONS(61), 12,
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
  [223] = 1,
    ACTIONS(63), 12,
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
  [238] = 1,
    ACTIONS(65), 12,
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
  [253] = 1,
    ACTIONS(67), 12,
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
  [268] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_seq,
    ACTIONS(11), 1,
      anon_sym_rout,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(36), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [293] = 7,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_use,
    ACTIONS(79), 1,
      anon_sym_seq,
    ACTIONS(82), 1,
      anon_sym_rout,
    STATE(12), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(36), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [318] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_op,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      sym_iden,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [337] = 1,
    ACTIONS(91), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [349] = 1,
    ACTIONS(93), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [361] = 3,
    ACTIONS(95), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [376] = 3,
    ACTIONS(97), 1,
      sym_eos,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [391] = 3,
    ACTIONS(99), 1,
      sym_bind,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [406] = 3,
    ACTIONS(101), 1,
      sym_eos,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [421] = 3,
    ACTIONS(103), 1,
      sym_eos,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [436] = 3,
    ACTIONS(105), 1,
      sym_eos,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [451] = 3,
    ACTIONS(107), 1,
      sym_eos,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [466] = 3,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [481] = 3,
    ACTIONS(111), 1,
      sym_bind,
    STATE(31), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [496] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(13), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [513] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(16), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [530] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(17), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [547] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(18), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [564] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(24), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [581] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(23), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [598] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(7), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [615] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(20), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [632] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(19), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [649] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(22), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [666] = 5,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_iden,
    ACTIONS(117), 1,
      sym_number,
    STATE(21), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [683] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [691] = 1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [699] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 2,
      sym_key_in,
      sym_key_out,
    STATE(38), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [711] = 1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [719] = 1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [727] = 3,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      sym_key_in,
      sym_key_out,
    STATE(45), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [739] = 1,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [747] = 1,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [755] = 1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [763] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 2,
      sym_key_in,
      sym_key_out,
    STATE(38), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [775] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      sym_iden,
    STATE(51), 1,
      aux_sym_sub_repeat1,
  [785] = 3,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_open_scope,
    STATE(68), 1,
      sym_param_interface,
  [795] = 3,
    ACTIONS(152), 1,
      sym_close_scope,
    ACTIONS(154), 1,
      sym_iden,
    STATE(54), 1,
      aux_sym_sequence_repeat1,
  [805] = 2,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 2,
      sym_close_scope,
      sym_iden,
  [813] = 3,
    ACTIONS(154), 1,
      sym_iden,
    ACTIONS(160), 1,
      sym_close_scope,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
  [823] = 3,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      sym_iden,
    STATE(51), 1,
      aux_sym_sub_repeat1,
  [833] = 1,
    ACTIONS(167), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [839] = 2,
    ACTIONS(171), 1,
      sym_number,
    ACTIONS(169), 2,
      anon_sym_LPAREN,
      sym_iden,
  [847] = 3,
    ACTIONS(173), 1,
      sym_close_scope,
    ACTIONS(175), 1,
      sym_iden,
    STATE(54), 1,
      aux_sym_sequence_repeat1,
  [857] = 3,
    ACTIONS(146), 1,
      sym_iden,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_sub_repeat1,
  [867] = 2,
    ACTIONS(180), 1,
      sym_eos,
    ACTIONS(182), 1,
      sym_bind,
  [874] = 2,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      sym_string,
  [881] = 1,
    ACTIONS(173), 2,
      sym_close_scope,
      sym_iden,
  [886] = 1,
    ACTIONS(186), 2,
      anon_sym_RPAREN,
      sym_iden,
  [891] = 1,
    ACTIONS(188), 1,
      sym_eos,
  [895] = 1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
  [899] = 1,
    ACTIONS(192), 1,
      sym_iden,
  [903] = 1,
    ACTIONS(194), 1,
      sym_open_scope,
  [907] = 1,
    ACTIONS(196), 1,
      sym_open_scope,
  [911] = 1,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
  [915] = 1,
    ACTIONS(200), 1,
      sym_iden,
  [919] = 1,
    ACTIONS(202), 1,
      sym_eos,
  [923] = 1,
    ACTIONS(204), 1,
      sym_open_scope,
  [927] = 1,
    ACTIONS(206), 1,
      sym_eos,
  [931] = 1,
    ACTIONS(208), 1,
      aux_sym_string_token1,
  [935] = 1,
    ACTIONS(210), 1,
      sym_eos,
  [939] = 1,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
  [943] = 1,
    ACTIONS(214), 1,
      sym_eos,
  [947] = 1,
    ACTIONS(216), 1,
      sym_bind,
  [951] = 1,
    ACTIONS(218), 1,
      sym_iden,
  [955] = 1,
    ACTIONS(220), 1,
      sym_open_scope,
  [959] = 1,
    ACTIONS(222), 1,
      sym_iden,
  [963] = 1,
    ACTIONS(224), 1,
      sym_eos,
  [967] = 1,
    ACTIONS(226), 1,
      sym_iden,
  [971] = 1,
    ACTIONS(228), 1,
      sym_eos,
  [975] = 1,
    ACTIONS(230), 1,
      sym_iden,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 293,
  [SMALL_STATE(13)] = 318,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 376,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 406,
  [SMALL_STATE(20)] = 421,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 496,
  [SMALL_STATE(26)] = 513,
  [SMALL_STATE(27)] = 530,
  [SMALL_STATE(28)] = 547,
  [SMALL_STATE(29)] = 564,
  [SMALL_STATE(30)] = 581,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 615,
  [SMALL_STATE(33)] = 632,
  [SMALL_STATE(34)] = 649,
  [SMALL_STATE(35)] = 666,
  [SMALL_STATE(36)] = 683,
  [SMALL_STATE(37)] = 691,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 711,
  [SMALL_STATE(40)] = 719,
  [SMALL_STATE(41)] = 727,
  [SMALL_STATE(42)] = 739,
  [SMALL_STATE(43)] = 747,
  [SMALL_STATE(44)] = 755,
  [SMALL_STATE(45)] = 763,
  [SMALL_STATE(46)] = 775,
  [SMALL_STATE(47)] = 785,
  [SMALL_STATE(48)] = 795,
  [SMALL_STATE(49)] = 805,
  [SMALL_STATE(50)] = 813,
  [SMALL_STATE(51)] = 823,
  [SMALL_STATE(52)] = 833,
  [SMALL_STATE(53)] = 839,
  [SMALL_STATE(54)] = 847,
  [SMALL_STATE(55)] = 857,
  [SMALL_STATE(56)] = 867,
  [SMALL_STATE(57)] = 874,
  [SMALL_STATE(58)] = 881,
  [SMALL_STATE(59)] = 886,
  [SMALL_STATE(60)] = 891,
  [SMALL_STATE(61)] = 895,
  [SMALL_STATE(62)] = 899,
  [SMALL_STATE(63)] = 903,
  [SMALL_STATE(64)] = 907,
  [SMALL_STATE(65)] = 911,
  [SMALL_STATE(66)] = 915,
  [SMALL_STATE(67)] = 919,
  [SMALL_STATE(68)] = 923,
  [SMALL_STATE(69)] = 927,
  [SMALL_STATE(70)] = 931,
  [SMALL_STATE(71)] = 935,
  [SMALL_STATE(72)] = 939,
  [SMALL_STATE(73)] = 943,
  [SMALL_STATE(74)] = 947,
  [SMALL_STATE(75)] = 951,
  [SMALL_STATE(76)] = 955,
  [SMALL_STATE(77)] = 959,
  [SMALL_STATE(78)] = 963,
  [SMALL_STATE(79)] = 967,
  [SMALL_STATE(80)] = 971,
  [SMALL_STATE(81)] = 975,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(26),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(27),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(28),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(66),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(62),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(81),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(77),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(74),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(49),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
