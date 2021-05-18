#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 31
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
  sym_group = 20,
  sym_named_node = 21,
  sym_node_name = 22,
  sym_child = 23,
  sym_field_name = 24,
  sym_negated_child = 25,
  sym_wildcard_node = 26,
  aux_sym_query_repeat1 = 27,
  aux_sym_alternation_repeat1 = 28,
  aux_sym_anonymous_leaf_repeat1 = 29,
  aux_sym_named_node_repeat1 = 30,
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
  [sym_group] = "group",
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
  [sym_group] = sym_group,
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
  [sym_group] = {
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
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
    [sym_query] = STATE(36),
    [sym_pattern] = STATE(9),
    [sym__pattern] = STATE(29),
    [sym_alternation] = STATE(18),
    [sym_anonymous_leaf] = STATE(18),
    [sym_group] = STATE(18),
    [sym_named_node] = STATE(18),
    [sym_wildcard_node] = STATE(18),
    [aux_sym_query_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym__] = ACTIONS(13),
  },
  [2] = {
    [sym__pattern] = STATE(24),
    [sym_alternation] = STATE(18),
    [sym_anonymous_leaf] = STATE(18),
    [sym_group] = STATE(18),
    [sym_named_node] = STATE(18),
    [sym_child] = STATE(3),
    [sym_field_name] = STATE(35),
    [sym_negated_child] = STATE(3),
    [sym_wildcard_node] = STATE(18),
    [aux_sym_named_node_repeat1] = STATE(3),
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
    [sym__pattern] = STATE(24),
    [sym_alternation] = STATE(18),
    [sym_anonymous_leaf] = STATE(18),
    [sym_group] = STATE(18),
    [sym_named_node] = STATE(18),
    [sym_child] = STATE(3),
    [sym_field_name] = STATE(35),
    [sym_negated_child] = STATE(3),
    [sym_wildcard_node] = STATE(18),
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
    [sym__pattern] = STATE(24),
    [sym_alternation] = STATE(18),
    [sym_anonymous_leaf] = STATE(18),
    [sym_group] = STATE(18),
    [sym_named_node] = STATE(18),
    [sym_child] = STATE(2),
    [sym_field_name] = STATE(35),
    [sym_negated_child] = STATE(2),
    [sym_wildcard_node] = STATE(18),
    [aux_sym_named_node_repeat1] = STATE(2),
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
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__identifier,
    ACTIONS(47), 1,
      anon_sym__,
    STATE(4), 1,
      sym_node_name,
    STATE(29), 1,
      sym__pattern,
    STATE(8), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [36] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym__,
    STATE(29), 1,
      sym__pattern,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [70] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym__,
    STATE(30), 1,
      sym__pattern,
    STATE(7), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [103] = 9,
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
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__pattern,
    STATE(6), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [136] = 9,
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
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__pattern,
    STATE(6), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [169] = 9,
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
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__pattern,
    STATE(7), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [202] = 8,
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
    STATE(30), 1,
      sym__pattern,
    STATE(10), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [232] = 3,
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
  [250] = 3,
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
  [268] = 3,
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
  [286] = 3,
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
  [304] = 3,
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
  [322] = 3,
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
  [340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_capture,
    ACTIONS(109), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [360] = 7,
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
    STATE(27), 1,
      sym__pattern,
    STATE(18), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(127), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_BANG,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(131), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(135), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(139), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(143), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 5,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym__,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [552] = 4,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(155), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [566] = 4,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(160), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [580] = 4,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(164), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__identifier,
    STATE(26), 1,
      sym_field_name,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 232,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 340,
  [SMALL_STATE(19)] = 360,
  [SMALL_STATE(20)] = 386,
  [SMALL_STATE(21)] = 404,
  [SMALL_STATE(22)] = 422,
  [SMALL_STATE(23)] = 439,
  [SMALL_STATE(24)] = 455,
  [SMALL_STATE(25)] = 470,
  [SMALL_STATE(26)] = 485,
  [SMALL_STATE(27)] = 500,
  [SMALL_STATE(28)] = 515,
  [SMALL_STATE(29)] = 529,
  [SMALL_STATE(30)] = 541,
  [SMALL_STATE(31)] = 552,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 580,
  [SMALL_STATE(34)] = 594,
  [SMALL_STATE(35)] = 604,
  [SMALL_STATE(36)] = 611,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(32),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(32),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(32),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(5),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternation, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_child, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated_child, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 3, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 1, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2), SHIFT_REPEAT(31),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
