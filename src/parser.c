#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym__identifier = 1,
  sym_comment = 2,
  sym_capture = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_anonymous_leaf_token1 = 7,
  sym_escape_sequence = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COLON = 11,
  anon_sym_BANG = 12,
  anon_sym__ = 13,
  sym_query = 14,
  sym_pattern = 15,
  sym__pattern = 16,
  sym_alternation = 17,
  sym_choice = 18,
  sym_anonymous_leaf = 19,
  sym_named_node = 20,
  sym_node_name = 21,
  sym_child = 22,
  sym_field_name = 23,
  sym_negated_child = 24,
  sym_wildcard_node = 25,
  aux_sym_query_repeat1 = 26,
  aux_sym_alternation_repeat1 = 27,
  aux_sym_anonymous_leaf_repeat1 = 28,
  aux_sym_named_node_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_comment] = "comment",
  [sym_capture] = "capture",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_alternation] = "alternation",
  [sym_choice] = "choice",
  [sym_anonymous_leaf] = "anonymous_leaf",
  [sym_named_node] = "named_node",
  [sym_node_name] = "node_name",
  [sym_child] = "child",
  [sym_field_name] = "field_name",
  [sym_negated_child] = "negated_child",
  [sym_wildcard_node] = "wildcard_node",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_anonymous_leaf_repeat1] = "anonymous_leaf_repeat1",
  [aux_sym_named_node_repeat1] = "named_node_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_comment] = sym_comment,
  [sym_capture] = sym_capture,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_alternation] = sym_alternation,
  [sym_choice] = sym_choice,
  [sym_anonymous_leaf] = sym_anonymous_leaf,
  [sym_named_node] = sym_named_node,
  [sym_node_name] = sym_node_name,
  [sym_child] = sym_child,
  [sym_field_name] = sym_field_name,
  [sym_negated_child] = sym_negated_child,
  [sym_wildcard_node] = sym_wildcard_node,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_alternation_repeat1] = aux_sym_alternation_repeat1,
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
  [sym_capture] = {
    .visible = true,
    .named = true,
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
  [sym_alternation] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
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
  [aux_sym_alternation_repeat1] = {
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
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == ';') ADVANCE(7);
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
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_capture);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_anonymous_leaf_token1);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_anonymous_leaf_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_capture] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(32),
    [sym_pattern] = STATE(8),
    [sym__pattern] = STATE(25),
    [sym_alternation] = STATE(10),
    [sym_anonymous_leaf] = STATE(10),
    [sym_named_node] = STATE(10),
    [sym_wildcard_node] = STATE(10),
    [aux_sym_query_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym__] = ACTIONS(13),
  },
  [2] = {
    [sym__pattern] = STATE(22),
    [sym_alternation] = STATE(10),
    [sym_anonymous_leaf] = STATE(10),
    [sym_named_node] = STATE(10),
    [sym_child] = STATE(4),
    [sym_field_name] = STATE(34),
    [sym_negated_child] = STATE(4),
    [sym_wildcard_node] = STATE(10),
    [aux_sym_named_node_repeat1] = STATE(4),
    [sym__identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym__] = ACTIONS(21),
  },
  [3] = {
    [sym__pattern] = STATE(22),
    [sym_alternation] = STATE(10),
    [sym_anonymous_leaf] = STATE(10),
    [sym_named_node] = STATE(10),
    [sym_child] = STATE(3),
    [sym_field_name] = STATE(34),
    [sym_negated_child] = STATE(3),
    [sym_wildcard_node] = STATE(10),
    [aux_sym_named_node_repeat1] = STATE(3),
    [sym__identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym__] = ACTIONS(40),
  },
  [4] = {
    [sym__pattern] = STATE(22),
    [sym_alternation] = STATE(10),
    [sym_anonymous_leaf] = STATE(10),
    [sym_named_node] = STATE(10),
    [sym_child] = STATE(3),
    [sym_field_name] = STATE(34),
    [sym_negated_child] = STATE(3),
    [sym_wildcard_node] = STATE(10),
    [aux_sym_named_node_repeat1] = STATE(3),
    [sym__identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym__] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym__,
    STATE(26), 1,
      sym__pattern,
    STATE(5), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(10), 4,
      sym_alternation,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [32] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym__,
    STATE(25), 1,
      sym__pattern,
    STATE(6), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(10), 4,
      sym_alternation,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [64] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__pattern,
    STATE(5), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(10), 4,
      sym_alternation,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [96] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym__pattern,
    STATE(6), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(10), 4,
      sym_alternation,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [128] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    STATE(26), 1,
      sym__pattern,
    STATE(7), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(10), 4,
      sym_alternation,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_capture,
    ACTIONS(79), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    STATE(24), 1,
      sym__pattern,
    STATE(10), 4,
      sym_alternation,
      sym_anonymous_leaf,
      sym_named_node,
      sym_wildcard_node,
  [345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(117), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_BANG,
  [361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(121), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(125), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(129), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(133), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [443] = 4,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(143), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [457] = 4,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(147), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [471] = 4,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(152), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__identifier,
    ACTIONS(156), 1,
      anon_sym__,
    STATE(2), 1,
      sym_node_name,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__identifier,
    STATE(23), 1,
      sym_field_name,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 361,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 391,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 432,
  [SMALL_STATE(27)] = 443,
  [SMALL_STATE(28)] = 457,
  [SMALL_STATE(29)] = 471,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 498,
  [SMALL_STATE(32)] = 508,
  [SMALL_STATE(33)] = 515,
  [SMALL_STATE(34)] = 522,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(27),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(31),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(27),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(30),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(27),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternation, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_name, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_child, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated_child, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 3, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 1, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2), SHIFT_REPEAT(28),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
