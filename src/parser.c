#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym__identifier = 1,
  sym_comment = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_anonymous_leaf_token1 = 4,
  sym_escape_sequence = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLON = 8,
  anon_sym_BANG = 9,
  anon_sym__ = 10,
  sym_query = 11,
  sym_pattern = 12,
  sym__pattern = 13,
  sym_anonymous_leaf = 14,
  sym_named_node = 15,
  sym_node_name = 16,
  sym_child = 17,
  sym_field_name = 18,
  sym_negated_child = 19,
  sym_wildcard_node = 20,
  aux_sym_query_repeat1 = 21,
  aux_sym_anonymous_leaf_repeat1 = 22,
  aux_sym_named_node_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_anonymous_leaf_token1] = "anonymous_leaf_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym__] = "_",
  [sym_query] = "query",
  [sym_pattern] = "pattern",
  [sym__pattern] = "_pattern",
  [sym_anonymous_leaf] = "anonymous_leaf",
  [sym_named_node] = "named_node",
  [sym_node_name] = "node_name",
  [sym_child] = "child",
  [sym_field_name] = "field_name",
  [sym_negated_child] = "negated_child",
  [sym_wildcard_node] = "wildcard_node",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_anonymous_leaf_repeat1] = "anonymous_leaf_repeat1",
  [aux_sym_named_node_repeat1] = "named_node_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_anonymous_leaf_token1] = aux_sym_anonymous_leaf_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym__] = anon_sym__,
  [sym_query] = sym_query,
  [sym_pattern] = sym_pattern,
  [sym__pattern] = sym__pattern,
  [sym_anonymous_leaf] = sym_anonymous_leaf,
  [sym_named_node] = sym_named_node,
  [sym_node_name] = sym_node_name,
  [sym_child] = sym_child,
  [sym_field_name] = sym_field_name,
  [sym_negated_child] = sym_negated_child,
  [sym_wildcard_node] = sym_wildcard_node,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_anonymous_leaf_repeat1] = aux_sym_anonymous_leaf_repeat1,
  [aux_sym_named_node_repeat1] = aux_sym_named_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_anonymous_leaf_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_anonymous_leaf] = {
    .visible = true,
    .named = true,
  },
  [sym_named_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [sym_child] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_negated_child] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_anonymous_leaf_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_node_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_pattern = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_pattern] = "pattern",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 0, .inherited = true},
  [1] =
    {field_pattern, 0},
  [2] =
    {field_pattern, 2, .inherited = true},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_anonymous_leaf_token1);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_anonymous_leaf_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(26),
    [sym_pattern] = STATE(5),
    [sym__pattern] = STATE(23),
    [sym_anonymous_leaf] = STATE(7),
    [sym_named_node] = STATE(7),
    [sym_wildcard_node] = STATE(7),
    [aux_sym_query_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym__] = ACTIONS(11),
  },
  [2] = {
    [sym__pattern] = STATE(17),
    [sym_anonymous_leaf] = STATE(7),
    [sym_named_node] = STATE(7),
    [sym_child] = STATE(2),
    [sym_field_name] = STATE(28),
    [sym_negated_child] = STATE(2),
    [sym_wildcard_node] = STATE(7),
    [aux_sym_named_node_repeat1] = STATE(2),
    [sym__identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym__] = ACTIONS(27),
  },
  [3] = {
    [sym__pattern] = STATE(17),
    [sym_anonymous_leaf] = STATE(7),
    [sym_named_node] = STATE(7),
    [sym_child] = STATE(2),
    [sym_field_name] = STATE(28),
    [sym_negated_child] = STATE(2),
    [sym_wildcard_node] = STATE(7),
    [aux_sym_named_node_repeat1] = STATE(2),
    [sym__identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym__] = ACTIONS(36),
  },
  [4] = {
    [sym__pattern] = STATE(17),
    [sym_anonymous_leaf] = STATE(7),
    [sym_named_node] = STATE(7),
    [sym_child] = STATE(3),
    [sym_field_name] = STATE(28),
    [sym_negated_child] = STATE(3),
    [sym_wildcard_node] = STATE(7),
    [aux_sym_named_node_repeat1] = STATE(3),
    [sym__identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_BANG] = ACTIONS(34),
    [anon_sym__] = ACTIONS(36),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym__,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym__pattern,
    STATE(6), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(7), 3,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [28] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym__,
    STATE(23), 1,
      sym__pattern,
    STATE(6), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(7), 3,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [71] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [86] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [101] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym__,
    STATE(19), 1,
      sym__pattern,
    STATE(7), 3,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(79), 5,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_BANG,
  [182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(87), 4,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(91), 4,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(95), 4,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(99), 4,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [253] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(105), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [267] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(110), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [281] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(114), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__identifier,
    ACTIONS(120), 1,
      anon_sym__,
    STATE(4), 1,
      sym_node_name,
  [318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__identifier,
    STATE(18), 1,
      sym_field_name,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 281,
  [SMALL_STATE(23)] = 295,
  [SMALL_STATE(24)] = 305,
  [SMALL_STATE(25)] = 318,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 342,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(14),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(21),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(24),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(25),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(21),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(24),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_name, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_child, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated_child, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 3, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tsq(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
