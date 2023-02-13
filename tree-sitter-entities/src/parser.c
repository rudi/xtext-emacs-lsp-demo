#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_entity = 1,
  anon_sym_extends = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_string = 8,
  anon_sym_int = 9,
  anon_sym_boolean = 10,
  sym_ID = 11,
  sym_INT = 12,
  sym_comment = 13,
  sym_model = 14,
  sym_entity = 15,
  sym_attribute = 16,
  sym_attributetype = 17,
  sym_elementtype = 18,
  sym_basictype = 19,
  sym_entitytype = 20,
  aux_sym_model_repeat1 = 21,
  aux_sym_entity_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_entity] = "entity",
  [anon_sym_extends] = "extends",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_boolean] = "boolean",
  [sym_ID] = "ID",
  [sym_INT] = "INT",
  [sym_comment] = "comment",
  [sym_model] = "model",
  [sym_entity] = "entity",
  [sym_attribute] = "attribute",
  [sym_attributetype] = "attributetype",
  [sym_elementtype] = "elementtype",
  [sym_basictype] = "basictype",
  [sym_entitytype] = "entitytype",
  [aux_sym_model_repeat1] = "model_repeat1",
  [aux_sym_entity_repeat1] = "entity_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_boolean] = anon_sym_boolean,
  [sym_ID] = sym_ID,
  [sym_INT] = sym_INT,
  [sym_comment] = sym_comment,
  [sym_model] = sym_model,
  [sym_entity] = sym_entity,
  [sym_attribute] = sym_attribute,
  [sym_attributetype] = sym_attributetype,
  [sym_elementtype] = sym_elementtype,
  [sym_basictype] = sym_basictype,
  [sym_entitytype] = sym_entitytype,
  [aux_sym_model_repeat1] = aux_sym_model_repeat1,
  [aux_sym_entity_repeat1] = aux_sym_entity_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
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
  [anon_sym_SEMI] = {
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
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [sym_ID] = {
    .visible = true,
    .named = true,
  },
  [sym_INT] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attributetype] = {
    .visible = true,
    .named = true,
  },
  [sym_elementtype] = {
    .visible = true,
    .named = true,
  },
  [sym_basictype] = {
    .visible = true,
    .named = true,
  },
  [sym_entitytype] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_model_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_array = 1,
  field_length = 2,
  field_name = 3,
  field_supertype = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_length] = "length",
  [field_name] = "name",
  [field_supertype] = "supertype",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_supertype, 3},
  [3] =
    {field_name, 1},
    {field_type, 0},
  [5] =
    {field_array, 1},
    {field_array, 2},
  [7] =
    {field_array, 1},
    {field_array, 3},
    {field_length, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'a') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'g') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'n') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'n') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_ID);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_INT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [sym_INT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_model] = STATE(25),
    [sym_entity] = STATE(8),
    [aux_sym_model_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_attribute] = STATE(3),
    [sym_attributetype] = STATE(20),
    [sym_elementtype] = STATE(10),
    [sym_basictype] = STATE(13),
    [sym_entitytype] = STATE(13),
    [aux_sym_entity_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_boolean] = ACTIONS(11),
    [sym_ID] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_attribute] = STATE(3),
    [sym_attributetype] = STATE(20),
    [sym_elementtype] = STATE(10),
    [sym_basictype] = STATE(13),
    [sym_entitytype] = STATE(13),
    [aux_sym_entity_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_boolean] = ACTIONS(17),
    [sym_ID] = ACTIONS(20),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_attribute] = STATE(2),
    [sym_attributetype] = STATE(20),
    [sym_elementtype] = STATE(10),
    [sym_basictype] = STATE(13),
    [sym_entitytype] = STATE(13),
    [aux_sym_entity_repeat1] = STATE(2),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_boolean] = ACTIONS(11),
    [sym_ID] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_attribute] = STATE(6),
    [sym_attributetype] = STATE(20),
    [sym_elementtype] = STATE(10),
    [sym_basictype] = STATE(13),
    [sym_entitytype] = STATE(13),
    [aux_sym_entity_repeat1] = STATE(6),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_boolean] = ACTIONS(11),
    [sym_ID] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_attribute] = STATE(3),
    [sym_attributetype] = STATE(20),
    [sym_elementtype] = STATE(10),
    [sym_basictype] = STATE(13),
    [sym_entitytype] = STATE(13),
    [aux_sym_entity_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_boolean] = ACTIONS(11),
    [sym_ID] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 4,
      anon_sym_string,
      anon_sym_int,
      anon_sym_boolean,
      sym_ID,
  [13] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_entity,
      aux_sym_model_repeat1,
  [27] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_entity,
    STATE(9), 2,
      sym_entity,
      aux_sym_model_repeat1,
  [41] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      sym_ID,
  [51] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_LBRACK,
      sym_ID,
  [59] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      anon_sym_LBRACK,
      sym_ID,
  [67] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_LBRACK,
      sym_ID,
  [75] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_entity,
  [83] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    ACTIONS(54), 1,
      sym_INT,
  [93] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_entity,
  [101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_entity,
  [109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_extends,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
  [119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_entity,
  [127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_ID,
  [134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_ID,
  [141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
  [148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SEMI,
  [155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_ID,
  [162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_ID,
  [176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
  [183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_ID,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 13,
  [SMALL_STATE(9)] = 27,
  [SMALL_STATE(10)] = 41,
  [SMALL_STATE(11)] = 51,
  [SMALL_STATE(12)] = 59,
  [SMALL_STATE(13)] = 67,
  [SMALL_STATE(14)] = 75,
  [SMALL_STATE(15)] = 83,
  [SMALL_STATE(16)] = 93,
  [SMALL_STATE(17)] = 101,
  [SMALL_STATE(18)] = 109,
  [SMALL_STATE(19)] = 119,
  [SMALL_STATE(20)] = 127,
  [SMALL_STATE(21)] = 134,
  [SMALL_STATE(22)] = 141,
  [SMALL_STATE(23)] = 148,
  [SMALL_STATE(24)] = 155,
  [SMALL_STATE(25)] = 162,
  [SMALL_STATE(26)] = 169,
  [SMALL_STATE(27)] = 176,
  [SMALL_STATE(28)] = 183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_repeat1, 2), SHIFT_REPEAT(11),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_repeat1, 2), SHIFT_REPEAT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, .production_id = 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributetype, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basictype, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entitytype, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementtype, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 4, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 5, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 6, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 7, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributetype, 3, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributetype, 4, .production_id = 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_entities(void) {
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
