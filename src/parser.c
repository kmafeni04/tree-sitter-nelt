/* Automatically generated by tree-sitter v0.25.3 (2a835ee029dca1c325e6f1c01dbce40396f6123e) */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 2
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 3
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  aux_sym_content_token1 = 1,
  aux_sym_content_token2 = 2,
  anon_sym_POUND = 3,
  anon_sym_POUND2 = 4,
  anon_sym_LBRACE_PERCENT = 5,
  aux_sym_nelt_expr_token1 = 6,
  anon_sym_PERCENT = 7,
  anon_sym_PERCENT_RBRACE = 8,
  anon_sym_LBRACE_LBRACE = 9,
  aux_sym_nelt_val_token1 = 10,
  anon_sym_RBRACE = 11,
  anon_sym_RBRACE_RBRACE = 12,
  anon_sym_LBRACE_LBRACE_DASH = 13,
  anon_sym_LBRACE_POUND = 14,
  aux_sym_nelt_comment_token1 = 15,
  anon_sym_POUND_RBRACE = 16,
  sym_template = 17,
  sym_content = 18,
  sym_nelt_tags = 19,
  sym_nelt_expr = 20,
  sym_nelt_val = 21,
  sym_nelt_comment = 22,
  aux_sym_template_repeat1 = 23,
  aux_sym_content_repeat1 = 24,
  aux_sym_nelt_expr_repeat1 = 25,
  aux_sym_nelt_val_repeat1 = 26,
  aux_sym_nelt_comment_repeat1 = 27,
  alias_sym_comment = 28,
  alias_sym_expr = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_content_token1] = "content_token1",
  [aux_sym_content_token2] = "content_token2",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND2] = "# ",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_nelt_expr_token1] = "nelt_expr_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_nelt_val_token1] = "nelt_val_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_nelt_comment_token1] = "nelt_comment_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_nelt_tags] = "nelt_tags",
  [sym_nelt_expr] = "nelt_expr",
  [sym_nelt_val] = "nelt_val",
  [sym_nelt_comment] = "nelt_comment",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_nelt_expr_repeat1] = "nelt_expr_repeat1",
  [aux_sym_nelt_val_repeat1] = "nelt_val_repeat1",
  [aux_sym_nelt_comment_repeat1] = "nelt_comment_repeat1",
  [alias_sym_comment] = "comment",
  [alias_sym_expr] = "expr",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [aux_sym_content_token2] = aux_sym_content_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND2] = anon_sym_POUND2,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [aux_sym_nelt_expr_token1] = aux_sym_nelt_expr_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_nelt_val_token1] = aux_sym_nelt_val_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_nelt_comment_token1] = aux_sym_nelt_comment_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_nelt_tags] = sym_nelt_tags,
  [sym_nelt_expr] = sym_nelt_expr,
  [sym_nelt_val] = sym_nelt_val,
  [sym_nelt_comment] = sym_nelt_comment,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_nelt_expr_repeat1] = aux_sym_nelt_expr_repeat1,
  [aux_sym_nelt_val_repeat1] = aux_sym_nelt_val_repeat1,
  [aux_sym_nelt_comment_repeat1] = aux_sym_nelt_comment_repeat1,
  [alias_sym_comment] = alias_sym_comment,
  [alias_sym_expr] = alias_sym_expr,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nelt_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nelt_val_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nelt_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_nelt_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_nelt_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_nelt_val] = {
    .visible = true,
    .named = true,
  },
  [sym_nelt_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nelt_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nelt_val_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nelt_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_expr] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_expr,
  },
  [2] = {
    [1] = alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_nelt_expr_repeat1, 2,
    aux_sym_nelt_expr_repeat1,
    alias_sym_expr,
  aux_sym_nelt_val_repeat1, 2,
    aux_sym_nelt_val_repeat1,
    alias_sym_expr,
  aux_sym_nelt_comment_repeat1, 2,
    aux_sym_nelt_comment_repeat1,
    alias_sym_comment,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '{') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_content_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_content_token2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_nelt_expr_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_nelt_expr_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_nelt_val_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_nelt_val_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_nelt_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_nelt_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_content_token2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_template] = STATE(25),
    [sym_content] = STATE(2),
    [sym_nelt_tags] = STATE(2),
    [sym_nelt_expr] = STATE(6),
    [sym_nelt_val] = STATE(6),
    [sym_nelt_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [aux_sym_content_token2] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_POUND2] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [STATE(2)] = {
    [sym_content] = STATE(3),
    [sym_nelt_tags] = STATE(3),
    [sym_nelt_expr] = STATE(6),
    [sym_nelt_val] = STATE(6),
    [sym_nelt_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_content_token1] = ACTIONS(5),
    [aux_sym_content_token2] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_POUND2] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [STATE(3)] = {
    [sym_content] = STATE(3),
    [sym_nelt_tags] = STATE(3),
    [sym_nelt_expr] = STATE(6),
    [sym_nelt_val] = STATE(6),
    [sym_nelt_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_content_token1] = ACTIONS(17),
    [aux_sym_content_token2] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_POUND2] = ACTIONS(17),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(20),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(23),
    [anon_sym_LBRACE_POUND] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(31), 4,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
    ACTIONS(33), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [19] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(37), 4,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
    ACTIONS(40), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [38] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 8,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [52] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 8,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [66] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 8,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [80] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 8,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [94] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 8,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [108] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 8,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [122] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 8,
      aux_sym_content_token1,
      aux_sym_content_token2,
      anon_sym_POUND,
      anon_sym_POUND2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_POUND,
  [136] = 4,
    ACTIONS(70), 1,
      aux_sym_nelt_expr_token1,
    ACTIONS(72), 1,
      anon_sym_PERCENT,
    ACTIONS(74), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(16), 1,
      aux_sym_nelt_expr_repeat1,
  [149] = 4,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_nelt_comment_token1,
    ACTIONS(80), 1,
      anon_sym_POUND_RBRACE,
    STATE(21), 1,
      aux_sym_nelt_comment_repeat1,
  [162] = 4,
    ACTIONS(82), 1,
      aux_sym_nelt_val_token1,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(17), 1,
      aux_sym_nelt_val_repeat1,
  [175] = 4,
    ACTIONS(70), 1,
      aux_sym_nelt_expr_token1,
    ACTIONS(72), 1,
      anon_sym_PERCENT,
    ACTIONS(88), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(18), 1,
      aux_sym_nelt_expr_repeat1,
  [188] = 4,
    ACTIONS(82), 1,
      aux_sym_nelt_val_token1,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(19), 1,
      aux_sym_nelt_val_repeat1,
  [201] = 4,
    ACTIONS(92), 1,
      aux_sym_nelt_expr_token1,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(98), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(18), 1,
      aux_sym_nelt_expr_repeat1,
  [214] = 4,
    ACTIONS(100), 1,
      aux_sym_nelt_val_token1,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(19), 1,
      aux_sym_nelt_val_repeat1,
  [227] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_nelt_comment_token1,
    ACTIONS(114), 1,
      anon_sym_POUND_RBRACE,
    STATE(20), 1,
      aux_sym_nelt_comment_repeat1,
  [240] = 4,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_nelt_comment_token1,
    ACTIONS(116), 1,
      anon_sym_POUND_RBRACE,
    STATE(20), 1,
      aux_sym_nelt_comment_repeat1,
  [253] = 2,
    ACTIONS(118), 1,
      aux_sym_nelt_expr_token1,
    ACTIONS(120), 2,
      anon_sym_PERCENT,
      anon_sym_PERCENT_RBRACE,
  [261] = 2,
    ACTIONS(122), 1,
      aux_sym_nelt_val_token1,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_RBRACE,
  [269] = 2,
    ACTIONS(128), 1,
      aux_sym_nelt_comment_token1,
    ACTIONS(126), 2,
      anon_sym_POUND,
      anon_sym_POUND_RBRACE,
  [277] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 201,
  [SMALL_STATE(19)] = 214,
  [SMALL_STATE(20)] = 227,
  [SMALL_STATE(21)] = 240,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 277,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nelt_tags, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nelt_tags, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nelt_expr, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nelt_expr, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nelt_val, 3, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nelt_val, 3, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nelt_comment, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nelt_comment, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nelt_comment, 3, 0, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nelt_comment, 3, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nelt_val, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nelt_val, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nelt_expr, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nelt_expr, 3, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nelt_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nelt_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nelt_expr_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nelt_val_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nelt_val_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nelt_val_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nelt_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nelt_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nelt_comment_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nelt_expr_repeat1, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nelt_expr_repeat1, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nelt_val_repeat1, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nelt_val_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nelt_comment_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nelt_comment_repeat1, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nelt(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
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
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
