#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 661
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 184
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  sym_lowercase_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_ = 4,
  anon_sym_priv = 5,
  anon_sym_pub = 6,
  anon_sym_LPAREN = 7,
  anon_sym_readonly = 8,
  anon_sym_RPAREN = 9,
  anon_sym_type = 10,
  anon_sym_struct = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_enum = 15,
  anon_sym_COMMA = 16,
  anon_sym_let = 17,
  anon_sym_EQ = 18,
  anon_sym_func = 19,
  anon_sym_interface = 20,
  anon_sym__ = 21,
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH_LPAREN = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  aux_sym_integer_literal_token1 = 26,
  sym_float_literal = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_char_literal_token1 = 29,
  sym_unescaped_string_fragment = 30,
  sym_escape_seqence = 31,
  anon_sym_DASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_STAR_STAR = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_STAR_EQ = 37,
  anon_sym_SLASH_EQ = 38,
  anon_sym_PERCENT = 39,
  anon_sym_PLUS_EQ = 40,
  anon_sym_DASH_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_LT = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_AMP_AMP = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_DOT_DOT = 50,
  anon_sym_fn = 51,
  anon_sym_LBRACK = 52,
  anon_sym_RBRACK = 53,
  aux_sym_accessor_token1 = 54,
  anon_sym_match = 55,
  anon_sym_EQ_GT = 56,
  anon_sym_if = 57,
  anon_sym_else = 58,
  anon_sym_break = 59,
  anon_sym_continue = 60,
  anon_sym_COLON_EQ = 61,
  anon_sym_var = 62,
  anon_sym_while = 63,
  anon_sym_return = 64,
  anon_sym_as = 65,
  anon_sym_PIPE = 66,
  anon_sym_DASH_GT = 67,
  sym_mutability = 68,
  sym_uppercase_identifier = 69,
  sym_colon_colon_uppercase_identifier = 70,
  sym_colon_colon_lowercase_identifier = 71,
  sym_identifier = 72,
  sym_dot_identifier = 73,
  sym_package_identifier = 74,
  sym_comment = 75,
  sym_structure = 76,
  sym_structure_item = 77,
  sym_visibility = 78,
  sym_pub_attribute = 79,
  sym_type_defintion = 80,
  sym_struct_definition = 81,
  sym_struct_filed_declaration = 82,
  sym_enum_definition = 83,
  sym_enum_constructor = 84,
  sym_value_definition = 85,
  sym_function_definition = 86,
  sym_interface_definition = 87,
  sym_interface_method_declaration = 88,
  sym_expression = 89,
  sym_simple_expression = 90,
  sym_atomic_expression = 91,
  sym_string_interpolation = 92,
  sym_interpolator = 93,
  sym_literal = 94,
  sym_boolean_literal = 95,
  sym_integer_literal = 96,
  sym_char_literal = 97,
  sym_string_literal = 98,
  sym_string_fragement = 99,
  sym_unary_expression = 100,
  sym_binary_expression = 101,
  sym_struct_expression = 102,
  sym_struct_field_expression = 103,
  sym_struct_filed_expression = 104,
  sym_labeled_expression = 105,
  sym_labeled_expression_pun = 106,
  sym_block_expression = 107,
  sym_nonempty_block_expression = 108,
  sym_anonymous_lambda_expression = 109,
  sym_constructor_expression = 110,
  sym_apply_expression = 111,
  sym_array_access_expression = 112,
  sym_dot_apply_expression = 113,
  sym_access_expression = 114,
  sym_accessor = 115,
  sym_method_expression = 116,
  sym_unit_expression = 117,
  sym_tuple_expression = 118,
  sym_constraint_expression = 119,
  sym_array_expression = 120,
  sym_match_expression = 121,
  sym_case_clause = 122,
  sym_if_expression = 123,
  sym_else_clause = 124,
  sym_statement_expression = 125,
  sym_let_expression = 126,
  sym_shorthand_let_expression = 127,
  sym_shorthand_let_pattern = 128,
  sym_var_expression = 129,
  sym_assign_expression = 130,
  sym_left_value = 131,
  sym_named_lambda_expression = 132,
  sym_while_expression = 133,
  sym_return_expression = 134,
  sym_pattern = 135,
  sym_as_pattern = 136,
  sym_or_pattern = 137,
  sym_simple_pattern = 138,
  sym_constructor_pattern = 139,
  sym_tuple_pattern = 140,
  sym_constraint_pattern = 141,
  sym_array_pattern = 142,
  sym_array_sub_pattern = 143,
  sym_dotdot_pattern = 144,
  sym_struct_pattern = 145,
  sym_struct_filed_pattern = 146,
  sym_filed_single_pattern = 147,
  sym_labeled_pattern = 148,
  sym_labeled_pattern_pun = 149,
  sym_type = 150,
  sym_tuple_type = 151,
  sym_function_type = 152,
  sym_apply_type = 153,
  sym_type_arguments = 154,
  sym_type_parameters = 155,
  sym_type_annotation = 156,
  sym_retuern_type = 157,
  sym_parameter = 158,
  sym_parameters = 159,
  sym_any = 160,
  sym_pub = 161,
  sym_qualified_identifier = 162,
  sym_qualified_type_identifier = 163,
  sym_function_identifier = 164,
  sym_type_identifier = 165,
  sym_constraints = 166,
  sym_constraint = 167,
  aux_sym_structure_repeat1 = 168,
  aux_sym_struct_definition_repeat1 = 169,
  aux_sym_enum_definition_repeat1 = 170,
  aux_sym_enum_constructor_repeat1 = 171,
  aux_sym_interface_definition_repeat1 = 172,
  aux_sym_string_interpolation_repeat1 = 173,
  aux_sym_string_interpolation_repeat2 = 174,
  aux_sym_struct_field_expression_repeat1 = 175,
  aux_sym_block_expression_repeat1 = 176,
  aux_sym_apply_expression_repeat1 = 177,
  aux_sym_match_expression_repeat1 = 178,
  aux_sym_constructor_pattern_repeat1 = 179,
  aux_sym_struct_filed_pattern_repeat1 = 180,
  aux_sym_type_parameters_repeat1 = 181,
  aux_sym_parameters_repeat1 = 182,
  aux_sym_constraints_repeat1 = 183,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_lowercase_identifier] = "lowercase_identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_priv] = "priv",
  [anon_sym_pub] = "pub",
  [anon_sym_LPAREN] = "(",
  [anon_sym_readonly] = "readonly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_func] = "func",
  [anon_sym_interface] = "interface",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [sym_float_literal] = "float_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [sym_unescaped_string_fragment] = "unescaped_string_fragment",
  [sym_escape_seqence] = "escape_seqence",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_accessor_token1] = "accessor_token1",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_var] = "var",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [sym_mutability] = "mutability",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_colon_colon_uppercase_identifier] = "colon_colon_uppercase_identifier",
  [sym_colon_colon_lowercase_identifier] = "colon_colon_lowercase_identifier",
  [sym_identifier] = "identifier",
  [sym_dot_identifier] = "dot_identifier",
  [sym_package_identifier] = "package_identifier",
  [sym_comment] = "comment",
  [sym_structure] = "structure",
  [sym_structure_item] = "structure_item",
  [sym_visibility] = "visibility",
  [sym_pub_attribute] = "pub_attribute",
  [sym_type_defintion] = "type_defintion",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_filed_declaration] = "struct_filed_declaration",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_constructor] = "enum_constructor",
  [sym_value_definition] = "value_definition",
  [sym_function_definition] = "function_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_interface_method_declaration] = "interface_method_declaration",
  [sym_expression] = "expression",
  [sym_simple_expression] = "simple_expression",
  [sym_atomic_expression] = "atomic_expression",
  [sym_string_interpolation] = "string_interpolation",
  [sym_interpolator] = "interpolator",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_fragement] = "string_fragement",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_struct_expression] = "struct_expression",
  [sym_struct_field_expression] = "struct_field_expression",
  [sym_struct_filed_expression] = "struct_filed_expression",
  [sym_labeled_expression] = "labeled_expression",
  [sym_labeled_expression_pun] = "labeled_expression_pun",
  [sym_block_expression] = "block_expression",
  [sym_nonempty_block_expression] = "nonempty_block_expression",
  [sym_anonymous_lambda_expression] = "anonymous_lambda_expression",
  [sym_constructor_expression] = "constructor_expression",
  [sym_apply_expression] = "apply_expression",
  [sym_array_access_expression] = "array_access_expression",
  [sym_dot_apply_expression] = "dot_apply_expression",
  [sym_access_expression] = "access_expression",
  [sym_accessor] = "accessor",
  [sym_method_expression] = "method_expression",
  [sym_unit_expression] = "unit_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym_constraint_expression] = "constraint_expression",
  [sym_array_expression] = "array_expression",
  [sym_match_expression] = "match_expression",
  [sym_case_clause] = "case_clause",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_statement_expression] = "statement_expression",
  [sym_let_expression] = "let_expression",
  [sym_shorthand_let_expression] = "shorthand_let_expression",
  [sym_shorthand_let_pattern] = "shorthand_let_pattern",
  [sym_var_expression] = "var_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_left_value] = "left_value",
  [sym_named_lambda_expression] = "named_lambda_expression",
  [sym_while_expression] = "while_expression",
  [sym_return_expression] = "return_expression",
  [sym_pattern] = "pattern",
  [sym_as_pattern] = "as_pattern",
  [sym_or_pattern] = "or_pattern",
  [sym_simple_pattern] = "simple_pattern",
  [sym_constructor_pattern] = "constructor_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_constraint_pattern] = "constraint_pattern",
  [sym_array_pattern] = "array_pattern",
  [sym_array_sub_pattern] = "array_sub_pattern",
  [sym_dotdot_pattern] = "dotdot_pattern",
  [sym_struct_pattern] = "struct_pattern",
  [sym_struct_filed_pattern] = "struct_filed_pattern",
  [sym_filed_single_pattern] = "filed_single_pattern",
  [sym_labeled_pattern] = "labeled_pattern",
  [sym_labeled_pattern_pun] = "labeled_pattern_pun",
  [sym_type] = "type",
  [sym_tuple_type] = "tuple_type",
  [sym_function_type] = "function_type",
  [sym_apply_type] = "apply_type",
  [sym_type_arguments] = "type_arguments",
  [sym_type_parameters] = "type_parameters",
  [sym_type_annotation] = "type_annotation",
  [sym_retuern_type] = "retuern_type",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_any] = "any",
  [sym_pub] = "pub",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_qualified_type_identifier] = "qualified_type_identifier",
  [sym_function_identifier] = "function_identifier",
  [sym_type_identifier] = "type_identifier",
  [sym_constraints] = "constraints",
  [sym_constraint] = "constraint",
  [aux_sym_structure_repeat1] = "structure_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_enum_constructor_repeat1] = "enum_constructor_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_string_interpolation_repeat1] = "string_interpolation_repeat1",
  [aux_sym_string_interpolation_repeat2] = "string_interpolation_repeat2",
  [aux_sym_struct_field_expression_repeat1] = "struct_field_expression_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
  [aux_sym_apply_expression_repeat1] = "apply_expression_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_constructor_pattern_repeat1] = "constructor_pattern_repeat1",
  [aux_sym_struct_filed_pattern_repeat1] = "struct_filed_pattern_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_lowercase_identifier] = sym_lowercase_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_priv] = anon_sym_priv,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [sym_unescaped_string_fragment] = sym_unescaped_string_fragment,
  [sym_escape_seqence] = sym_escape_seqence,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_accessor_token1] = aux_sym_accessor_token1,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_mutability] = sym_mutability,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_colon_colon_uppercase_identifier] = sym_colon_colon_uppercase_identifier,
  [sym_colon_colon_lowercase_identifier] = sym_colon_colon_lowercase_identifier,
  [sym_identifier] = sym_identifier,
  [sym_dot_identifier] = sym_dot_identifier,
  [sym_package_identifier] = sym_package_identifier,
  [sym_comment] = sym_comment,
  [sym_structure] = sym_structure,
  [sym_structure_item] = sym_structure_item,
  [sym_visibility] = sym_visibility,
  [sym_pub_attribute] = sym_pub_attribute,
  [sym_type_defintion] = sym_type_defintion,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_filed_declaration] = sym_struct_filed_declaration,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_constructor] = sym_enum_constructor,
  [sym_value_definition] = sym_value_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_interface_method_declaration] = sym_interface_method_declaration,
  [sym_expression] = sym_expression,
  [sym_simple_expression] = sym_simple_expression,
  [sym_atomic_expression] = sym_atomic_expression,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_interpolator] = sym_interpolator,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_fragement] = sym_string_fragement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_struct_expression] = sym_struct_expression,
  [sym_struct_field_expression] = sym_struct_field_expression,
  [sym_struct_filed_expression] = sym_struct_filed_expression,
  [sym_labeled_expression] = sym_labeled_expression,
  [sym_labeled_expression_pun] = sym_labeled_expression_pun,
  [sym_block_expression] = sym_block_expression,
  [sym_nonempty_block_expression] = sym_nonempty_block_expression,
  [sym_anonymous_lambda_expression] = sym_anonymous_lambda_expression,
  [sym_constructor_expression] = sym_constructor_expression,
  [sym_apply_expression] = sym_apply_expression,
  [sym_array_access_expression] = sym_array_access_expression,
  [sym_dot_apply_expression] = sym_dot_apply_expression,
  [sym_access_expression] = sym_access_expression,
  [sym_accessor] = sym_accessor,
  [sym_method_expression] = sym_method_expression,
  [sym_unit_expression] = sym_unit_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_constraint_expression] = sym_constraint_expression,
  [sym_array_expression] = sym_array_expression,
  [sym_match_expression] = sym_match_expression,
  [sym_case_clause] = sym_case_clause,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_statement_expression] = sym_statement_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_shorthand_let_expression] = sym_shorthand_let_expression,
  [sym_shorthand_let_pattern] = sym_shorthand_let_pattern,
  [sym_var_expression] = sym_var_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_left_value] = sym_left_value,
  [sym_named_lambda_expression] = sym_named_lambda_expression,
  [sym_while_expression] = sym_while_expression,
  [sym_return_expression] = sym_return_expression,
  [sym_pattern] = sym_pattern,
  [sym_as_pattern] = sym_as_pattern,
  [sym_or_pattern] = sym_or_pattern,
  [sym_simple_pattern] = sym_simple_pattern,
  [sym_constructor_pattern] = sym_constructor_pattern,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym_constraint_pattern] = sym_constraint_pattern,
  [sym_array_pattern] = sym_array_pattern,
  [sym_array_sub_pattern] = sym_array_sub_pattern,
  [sym_dotdot_pattern] = sym_dotdot_pattern,
  [sym_struct_pattern] = sym_struct_pattern,
  [sym_struct_filed_pattern] = sym_struct_filed_pattern,
  [sym_filed_single_pattern] = sym_filed_single_pattern,
  [sym_labeled_pattern] = sym_labeled_pattern,
  [sym_labeled_pattern_pun] = sym_labeled_pattern_pun,
  [sym_type] = sym_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_function_type] = sym_function_type,
  [sym_apply_type] = sym_apply_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_annotation] = sym_type_annotation,
  [sym_retuern_type] = sym_retuern_type,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_any] = sym_any,
  [sym_pub] = sym_pub,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_qualified_type_identifier] = sym_qualified_type_identifier,
  [sym_function_identifier] = sym_function_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [sym_constraints] = sym_constraints,
  [sym_constraint] = sym_constraint,
  [aux_sym_structure_repeat1] = aux_sym_structure_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_enum_constructor_repeat1] = aux_sym_enum_constructor_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_string_interpolation_repeat1] = aux_sym_string_interpolation_repeat1,
  [aux_sym_string_interpolation_repeat2] = aux_sym_string_interpolation_repeat2,
  [aux_sym_struct_field_expression_repeat1] = aux_sym_struct_field_expression_repeat1,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
  [aux_sym_apply_expression_repeat1] = aux_sym_apply_expression_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
  [aux_sym_constructor_pattern_repeat1] = aux_sym_constructor_pattern_repeat1,
  [aux_sym_struct_filed_pattern_repeat1] = aux_sym_struct_filed_pattern_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unescaped_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_seqence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
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
  [aux_sym_accessor_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_item] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_pub_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type_defintion] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragement] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nonempty_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_method_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_var_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_left_value] = {
    .visible = true,
    .named = true,
  },
  [sym_named_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_or_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_sub_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_dotdot_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_filed_single_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_retuern_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_pub] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_structure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_filed_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraints_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 13,
  [29] = 25,
  [30] = 30,
  [31] = 19,
  [32] = 23,
  [33] = 30,
  [34] = 27,
  [35] = 14,
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
  [47] = 40,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 39,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 44,
  [63] = 41,
  [64] = 51,
  [65] = 57,
  [66] = 61,
  [67] = 59,
  [68] = 37,
  [69] = 69,
  [70] = 60,
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
  [84] = 82,
  [85] = 85,
  [86] = 83,
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
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 88,
  [157] = 157,
  [158] = 105,
  [159] = 107,
  [160] = 102,
  [161] = 161,
  [162] = 162,
  [163] = 103,
  [164] = 151,
  [165] = 146,
  [166] = 72,
  [167] = 111,
  [168] = 128,
  [169] = 110,
  [170] = 73,
  [171] = 152,
  [172] = 143,
  [173] = 140,
  [174] = 153,
  [175] = 148,
  [176] = 147,
  [177] = 117,
  [178] = 150,
  [179] = 145,
  [180] = 144,
  [181] = 133,
  [182] = 182,
  [183] = 115,
  [184] = 149,
  [185] = 116,
  [186] = 118,
  [187] = 123,
  [188] = 124,
  [189] = 127,
  [190] = 138,
  [191] = 154,
  [192] = 155,
  [193] = 109,
  [194] = 136,
  [195] = 135,
  [196] = 75,
  [197] = 182,
  [198] = 137,
  [199] = 119,
  [200] = 77,
  [201] = 76,
  [202] = 78,
  [203] = 112,
  [204] = 113,
  [205] = 80,
  [206] = 114,
  [207] = 120,
  [208] = 121,
  [209] = 122,
  [210] = 125,
  [211] = 211,
  [212] = 108,
  [213] = 213,
  [214] = 126,
  [215] = 74,
  [216] = 129,
  [217] = 130,
  [218] = 131,
  [219] = 132,
  [220] = 134,
  [221] = 142,
  [222] = 139,
  [223] = 141,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 226,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 231,
  [234] = 234,
  [235] = 235,
  [236] = 234,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 232,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 247,
  [250] = 250,
  [251] = 251,
  [252] = 251,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 261,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 265,
  [272] = 272,
  [273] = 273,
  [274] = 269,
  [275] = 270,
  [276] = 260,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 278,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 292,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 287,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 281,
  [309] = 280,
  [310] = 310,
  [311] = 311,
  [312] = 304,
  [313] = 283,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 334,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 332,
  [342] = 333,
  [343] = 343,
  [344] = 339,
  [345] = 345,
  [346] = 346,
  [347] = 338,
  [348] = 348,
  [349] = 340,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 364,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 369,
  [391] = 345,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 377,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 357,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 353,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 356,
  [421] = 421,
  [422] = 314,
  [423] = 317,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 355,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 409,
  [435] = 418,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 444,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 412,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 473,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 453,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 457,
  [495] = 495,
  [496] = 496,
  [497] = 459,
  [498] = 498,
  [499] = 392,
  [500] = 393,
  [501] = 460,
  [502] = 476,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 456,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 398,
  [517] = 517,
  [518] = 518,
  [519] = 512,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 514,
  [529] = 415,
  [530] = 517,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 368,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 374,
  [546] = 527,
  [547] = 547,
  [548] = 376,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 358,
  [556] = 556,
  [557] = 557,
  [558] = 363,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 419,
  [563] = 563,
  [564] = 396,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 405,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 573,
  [576] = 576,
  [577] = 577,
  [578] = 572,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 513,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 581,
  [592] = 592,
  [593] = 593,
  [594] = 579,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 611,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 615,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 607,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 635,
  [638] = 604,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 613,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 616,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
};

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 43646
    ? (c < 4238
      ? (c < 2741
        ? (c < 2042
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1765
              ? (c < 1519
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2613
              ? (c < 2565
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3296
          ? (c < 2974
            ? (c < 2877
              ? (c < 2831
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c < 2821
                    ? c == 2809
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))
              : (c <= 2877 || (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))))
            : (c <= 2975 || (c < 3165
              ? (c < 3086
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3077
                    ? c == 3024
                    : c <= 3084)))
                : (c <= 3088 || (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3297 || (c < 3724
            ? (c < 3482
              ? (c < 3406
                ? (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))
              : (c <= 3505 || (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3634 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))))
            : (c <= 3747 || (c < 3913
              ? (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))
                : (c <= 3780 || (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))))
              : (c <= 3948 || (c < 4186
                ? (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))))))))))
      : (c <= 4238 || (c < 8182
        ? (c < 6480
          ? (c < 4992
            ? (c < 4746
              ? (c < 4682
                ? (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
            : (c <= 5007 || (c < 5984
              ? (c < 5792
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))
                : (c <= 5866 || (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6176
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))))))
          : (c <= 6509 || (c < 7418
            ? (c < 7098
              ? (c < 6823
                ? (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)))
                : (c <= 6823 || (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))))
              : (c <= 7141 || (c < 7312
                ? (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))))))
            : (c <= 7418 || (c < 8031
              ? (c < 8008
                ? (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
  return (c < 110898
    ? (c < 73490
      ? (c < 73474
        ? (c >= 70207 && c <= 70208)
        : (c <= 73474 || (c >= 73476 && c <= 73488)))
      : (c <= 73523 || (c < 78913
        ? c == 78895
        : c <= 78918)))
    : (c <= 110898 || (c < 124112
      ? (c < 122661
        ? c == 110933
        : (c <= 122666 || (c >= 122928 && c <= 122989)))
      : (c <= 124139 || (c < 201552
        ? c == 177977
        : c <= 205743)))));
}

static inline bool sym_lowercase_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_4(int32_t c) {
  return (c < 43646
    ? (c < 4213
      ? (c < 2738
        ? (c < 2036
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1749
              ? (c < 1488
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2610
              ? (c < 2556
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3293
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3160
              ? (c < 3077
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))))))
          : (c <= 3294 || (c < 3718
            ? (c < 3461
              ? (c < 3389
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)))
                : (c <= 3389 || (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))))
              : (c <= 3478 || (c < 3585
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3713
                  ? (c < 3648
                    ? c == 3634
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))))))
            : (c <= 3722 || (c < 3904
              ? (c < 3773
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || c == 3762))
                : (c <= 3773 || (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3911 || (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))))))))))
      : (c <= 4225 || (c < 8182
        ? (c < 6400
          ? (c < 4888
            ? (c < 4704
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4800
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5952
              ? (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6108
                ? (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))))
          : (c <= 6430 || (c < 7413
            ? (c < 7086
              ? (c < 6688
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)))
                : (c <= 6740 || (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))))
              : (c <= 7087 || (c < 7296
                ? (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))))))
            : (c <= 7414 || (c < 8031
              ? (c < 8008
                ? (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_5(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_6(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_dot_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 30:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(101);
      END_STATE();
    case 31:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 32:
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(101);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(100);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(102);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_seqence);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_mutability);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_priv);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 34},
  [254] = {.lex_state = 34},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 8},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 8},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 34},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 34},
  [320] = {.lex_state = 34},
  [321] = {.lex_state = 34},
  [322] = {.lex_state = 34},
  [323] = {.lex_state = 34},
  [324] = {.lex_state = 34},
  [325] = {.lex_state = 34},
  [326] = {.lex_state = 34},
  [327] = {.lex_state = 34},
  [328] = {.lex_state = 34},
  [329] = {.lex_state = 34},
  [330] = {.lex_state = 34},
  [331] = {.lex_state = 34},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 34},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 34},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 9},
  [352] = {.lex_state = 34},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 6},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 8},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 34},
  [361] = {.lex_state = 34},
  [362] = {.lex_state = 1},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 34},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 34},
  [367] = {.lex_state = 34},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 3},
  [371] = {.lex_state = 34},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 4},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 4},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 34},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 8},
  [383] = {.lex_state = 34},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 9},
  [388] = {.lex_state = 3},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 6},
  [391] = {.lex_state = 1},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 4},
  [394] = {.lex_state = 34},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 3},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 6},
  [400] = {.lex_state = 34},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 3},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 17},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 34},
  [407] = {.lex_state = 3},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 34},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 8},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 3},
  [415] = {.lex_state = 8},
  [416] = {.lex_state = 6},
  [417] = {.lex_state = 8},
  [418] = {.lex_state = 8},
  [419] = {.lex_state = 8},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 1},
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 17},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 34},
  [430] = {.lex_state = 3},
  [431] = {.lex_state = 1},
  [432] = {.lex_state = 34},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 34},
  [435] = {.lex_state = 8},
  [436] = {.lex_state = 6},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 34},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 34},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 34},
  [446] = {.lex_state = 34},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 8},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 34},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 34},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 1},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 17},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 4},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 1},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 4},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 1},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 1},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 4},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 1},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 17},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 34},
  [506] = {.lex_state = 8},
  [507] = {.lex_state = 1},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 16},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 34},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 1},
  [517] = {.lex_state = 17},
  [518] = {.lex_state = 1},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 8},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 4},
  [524] = {.lex_state = 1},
  [525] = {.lex_state = 1},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 17},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 4},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 1},
  [540] = {.lex_state = 1},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 4},
  [543] = {.lex_state = 1},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 1},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 1},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 1},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 1},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 1},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 1},
  [560] = {.lex_state = 8},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 4},
  [567] = {.lex_state = 4},
  [568] = {.lex_state = 1},
  [569] = {.lex_state = 1},
  [570] = {.lex_state = 1},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 18},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 34},
  [578] = {.lex_state = 18},
  [579] = {.lex_state = 17},
  [580] = {.lex_state = 17},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 4},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 17},
  [595] = {.lex_state = 34},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 34},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 4},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 4},
  [609] = {.lex_state = 4},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 34},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 17},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 34},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 17},
  [627] = {.lex_state = 4},
  [628] = {.lex_state = 17},
  [629] = {.lex_state = 17},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 34},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 4},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 34},
  [652] = {.lex_state = 34},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 17},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 34},
  [658] = {.lex_state = 17},
  [659] = {.lex_state = 17},
  [660] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lowercase_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_priv] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_seqence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_accessor_token1] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_mutability] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_lowercase_identifier] = ACTIONS(1),
    [sym_dot_identifier] = ACTIONS(1),
    [sym_package_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_structure] = STATE(654),
    [sym_structure_item] = STATE(449),
    [sym_visibility] = STATE(451),
    [sym_type_defintion] = STATE(454),
    [sym_struct_definition] = STATE(454),
    [sym_enum_definition] = STATE(454),
    [sym_value_definition] = STATE(454),
    [sym_function_definition] = STATE(454),
    [sym_interface_definition] = STATE(454),
    [sym_pub] = STATE(455),
    [aux_sym_structure_repeat1] = STATE(254),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_priv] = ACTIONS(7),
    [anon_sym_pub] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(19),
    [anon_sym_interface] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_struct_field_expression] = STATE(632),
    [sym_labeled_expression] = STATE(602),
    [sym_labeled_expression_pun] = STATE(606),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_struct_field_expression] = STATE(607),
    [sym_labeled_expression] = STATE(602),
    [sym_labeled_expression_pun] = STATE(606),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(5),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(10),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(96),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [aux_sym_integer_literal_token1] = ACTIONS(108),
    [sym_float_literal] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_fn] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_match] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(132),
    [anon_sym_continue] = ACTIONS(132),
    [anon_sym_var] = ACTIONS(135),
    [anon_sym_while] = ACTIONS(138),
    [anon_sym_return] = ACTIONS(141),
    [sym_uppercase_identifier] = ACTIONS(144),
    [sym_identifier] = ACTIONS(147),
    [sym_package_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(6),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(237),
    [sym_simple_expression] = STATE(160),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(192),
    [sym_literal] = STATE(192),
    [sym_boolean_literal] = STATE(201),
    [sym_integer_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(161),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(550),
    [sym_let_expression] = STATE(552),
    [sym_shorthand_let_expression] = STATE(552),
    [sym_shorthand_let_pattern] = STATE(650),
    [sym_var_expression] = STATE(552),
    [sym_assign_expression] = STATE(552),
    [sym_left_value] = STATE(647),
    [sym_named_lambda_expression] = STATE(552),
    [sym_while_expression] = STATE(552),
    [sym_return_expression] = STATE(552),
    [sym_qualified_identifier] = STATE(161),
    [sym_qualified_type_identifier] = STATE(656),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [aux_sym_integer_literal_token1] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      sym_float_literal,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_fn,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      sym_uppercase_identifier,
    ACTIONS(183), 1,
      sym_package_identifier,
    ACTIONS(185), 1,
      sym_comment,
    STATE(160), 1,
      sym_simple_expression,
    STATE(241), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(175), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [106] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [208] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [310] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [412] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [514] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [616] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [718] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [820] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(227), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [922] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1024] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1126] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1228] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1330] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(232), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1432] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1534] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1636] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1738] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_simple_expression,
    STATE(234), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1840] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(231), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1942] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2044] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(226), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2146] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2248] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2350] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2452] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2554] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(235), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2653] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(112), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2752] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(238), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2851] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(208), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2950] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3049] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3148] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(248), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3247] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3346] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(176), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3445] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(224), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3544] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(250), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3643] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3742] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(228), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3841] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(225), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3940] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4039] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(122), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4138] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(245), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4237] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(121), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4336] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(229), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4435] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(244), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4534] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4633] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(120), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4732] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(240), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4831] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(114), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4930] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(113), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5029] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(182), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5128] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(147), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5227] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(102), 1,
      sym_simple_expression,
    STATE(252), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5326] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(209), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5425] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5524] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(197), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5623] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(206), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5722] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(203), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5821] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_lowercase_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_fn,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_match,
    ACTIONS(215), 1,
      anon_sym_if,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(219), 1,
      sym_package_identifier,
    STATE(211), 1,
      sym_simple_expression,
    STATE(255), 1,
      sym_expression,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(154), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(155), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(126), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5920] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(204), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6019] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(177), 1,
      anon_sym_fn,
    STATE(160), 1,
      sym_simple_expression,
    STATE(230), 1,
      sym_expression,
    STATE(656), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(192), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(267), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(271), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(275), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(279), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(283), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(287), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(291), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6414] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(89), 1,
      sym_dotdot_pattern,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(337), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    STATE(619), 1,
      sym_array_sub_pattern,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(311), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6538] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    STATE(645), 1,
      sym_dotdot_pattern,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6617] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_match_expression_repeat1,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(508), 1,
      sym_case_clause,
    STATE(509), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6696] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_match_expression_repeat1,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(508), 1,
      sym_case_clause,
    STATE(509), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6775] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_match_expression_repeat1,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(508), 1,
      sym_case_clause,
    STATE(509), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6854] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    STATE(634), 1,
      sym_dotdot_pattern,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6933] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_match_expression_repeat1,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(508), 1,
      sym_case_clause,
    STATE(509), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7012] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(347), 1,
      sym_float_literal,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_uppercase_identifier,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(362), 1,
      sym_package_identifier,
    STATE(87), 1,
      aux_sym_match_expression_repeat1,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(508), 1,
      sym_case_clause,
    STATE(509), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(327), 2,
      anon_sym__,
      sym_lowercase_identifier,
    ACTIONS(341), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_else,
    STATE(117), 1,
      sym_else_clause,
    ACTIONS(367), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7134] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(384), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7207] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7280] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7353] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7426] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7499] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7572] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7645] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(395), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7715] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(387), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7785] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(298), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7855] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(373), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7925] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(372), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7995] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(385), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8065] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      aux_sym_accessor_token1,
    ACTIONS(393), 1,
      sym_dot_identifier,
    STATE(135), 1,
      sym_accessor,
    ACTIONS(387), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 18,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      sym_colon_colon_lowercase_identifier,
  [8113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8151] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_COLON_EQ,
    ACTIONS(401), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(411), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(409), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8235] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(199), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(201), 1,
      sym_float_literal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_uppercase_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      sym_package_identifier,
    STATE(273), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(616), 1,
      sym_qualified_type_identifier,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(76), 4,
      sym_boolean_literal,
      sym_integer_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(415), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(419), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(423), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(427), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(431), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8491] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(435), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8544] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(435), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(437), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(435), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(455), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(459), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(463), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(467), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(437), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(437), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8905] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(437), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(475), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(479), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(483), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(491), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(495), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(499), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(503), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(507), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(511), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(515), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(519), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(423), 21,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(525), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(529), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(533), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(537), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(541), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(545), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(549), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(553), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(557), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(561), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(567), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(565), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(569), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(573), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(577), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(581), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(589), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(593), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10173] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(597), 1,
      anon_sym_else,
    STATE(177), 1,
      sym_else_clause,
    ACTIONS(367), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10213] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      anon_sym_COLON_EQ,
    ACTIONS(401), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10251] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(599), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(411), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10289] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(417), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10324] = 8,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      anon_sym_LPAREN,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    ACTIONS(605), 1,
      aux_sym_accessor_token1,
    ACTIONS(607), 1,
      sym_dot_identifier,
    STATE(195), 1,
      sym_accessor,
    ACTIONS(387), 21,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [10369] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(609), 1,
      anon_sym_EQ,
    ACTIONS(485), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10406] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON_EQ,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10443] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10478] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10513] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10547] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10581] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(433), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10615] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10649] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10683] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(273), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10717] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10751] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10785] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10819] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10853] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10887] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(567), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10923] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(465), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10957] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10991] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11025] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11059] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11093] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      aux_sym_accessor_token1,
    ACTIONS(393), 1,
      sym_dot_identifier,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_accessor,
    STATE(156), 1,
      sym_block_expression,
    ACTIONS(387), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [11141] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LF,
    ACTIONS(457), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11175] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11209] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11243] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11277] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11311] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11345] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11379] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11413] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11447] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11481] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(425), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11515] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11551] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11585] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LF,
    ACTIONS(281), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11619] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      aux_sym_accessor_token1,
    ACTIONS(393), 1,
      sym_dot_identifier,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block_expression,
    STATE(135), 1,
      sym_accessor,
    ACTIONS(387), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [11667] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11701] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(401), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11735] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11769] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(285), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11803] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11837] = 8,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(437), 8,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11881] = 7,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(437), 9,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11923] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11957] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(437), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11997] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(437), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12033] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(437), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12069] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(437), 19,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12107] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12141] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      aux_sym_accessor_token1,
    ACTIONS(393), 1,
      sym_dot_identifier,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_accessor,
    STATE(515), 1,
      sym_block_expression,
    ACTIONS(387), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12189] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LF,
    ACTIONS(421), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(627), 15,
      anon_sym_let,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token1,
      anon_sym_fn,
      anon_sym_match,
      anon_sym_if,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_var,
      anon_sym_while,
      anon_sym_return,
      sym_lowercase_identifier,
      sym_identifier,
  [12257] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12291] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LF,
    ACTIONS(277), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12325] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12359] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(501), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12393] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(505), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12427] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12461] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LF,
    ACTIONS(517), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12495] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12529] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12563] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12597] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      aux_sym_accessor_token1,
    ACTIONS(393), 1,
      sym_dot_identifier,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_accessor,
    ACTIONS(387), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12642] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      aux_sym_accessor_token1,
    ACTIONS(393), 1,
      sym_dot_identifier,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_accessor,
    ACTIONS(387), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12687] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    STATE(457), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12742] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_COLON,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(494), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12797] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(649), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(651), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12841] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(657), 1,
      anon_sym_LF,
    ACTIONS(659), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12885] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12929] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12981] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13033] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13085] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(453), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13137] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(681), 1,
      anon_sym_LF,
    ACTIONS(683), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13181] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(489), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13233] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(691), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13277] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13321] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13365] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(703), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13409] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(707), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13453] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13505] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(713), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13553] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13597] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13641] = 10,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_STAR_STAR,
    ACTIONS(625), 1,
      anon_sym_AMP_AMP,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(621), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(623), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13685] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13734] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(731), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13781] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13830] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13876] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13922] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(741), 1,
      anon_sym_RBRACK,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13968] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    ACTIONS(745), 1,
      anon_sym_priv,
    ACTIONS(748), 1,
      anon_sym_pub,
    ACTIONS(751), 1,
      anon_sym_type,
    ACTIONS(754), 1,
      anon_sym_struct,
    ACTIONS(757), 1,
      anon_sym_enum,
    ACTIONS(760), 1,
      anon_sym_let,
    ACTIONS(763), 1,
      anon_sym_func,
    ACTIONS(766), 1,
      anon_sym_interface,
    STATE(253), 1,
      aux_sym_structure_repeat1,
    STATE(449), 1,
      sym_structure_item,
    STATE(451), 1,
      sym_visibility,
    STATE(455), 1,
      sym_pub,
    STATE(454), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14019] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_priv,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_func,
    ACTIONS(21), 1,
      anon_sym_interface,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
    STATE(253), 1,
      aux_sym_structure_repeat1,
    STATE(449), 1,
      sym_structure_item,
    STATE(451), 1,
      sym_visibility,
    STATE(455), 1,
      sym_pub,
    STATE(454), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14070] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_STAR_STAR,
    ACTIONS(453), 1,
      anon_sym_AMP_AMP,
    ACTIONS(639), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(443), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(449), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(445), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(451), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(771), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token1,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(773), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token1,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(779), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      aux_sym_integer_literal_token1,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(336), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14187] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14218] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14249] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(519), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(512), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14311] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14342] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14373] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14404] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(547), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14435] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(549), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14497] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14528] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14590] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym_EQ,
    ACTIONS(817), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14642] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14673] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14704] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_EQ,
    ACTIONS(827), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14753] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(405), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14781] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(472), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14809] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(635), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14837] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(513), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_EQ,
    ACTIONS(839), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14883] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(535), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(843), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14929] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(649), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14957] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(569), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14985] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(358), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_EQ,
    ACTIONS(847), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_EQ,
    ACTIONS(851), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15049] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(464), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(855), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15095] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(497), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(859), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_EQ,
    ACTIONS(863), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_EQ,
    ACTIONS(867), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_EQ,
    ACTIONS(871), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15195] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(459), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_EQ,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(875), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [15243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_EQ,
    ACTIONS(881), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_EQ,
    ACTIONS(885), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15279] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(555), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15307] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(493), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_EQ,
    ACTIONS(889), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15353] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(548), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15381] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym__,
    ACTIONS(835), 1,
      sym_identifier,
    ACTIONS(837), 1,
      sym_package_identifier,
    STATE(391), 1,
      sym_qualified_type_identifier,
    STATE(531), 1,
      sym_type,
    STATE(500), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(893), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15427] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(566), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15455] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(584), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15483] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(637), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15511] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(471), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_EQ,
    ACTIONS(897), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15557] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(376), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15585] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym__,
    STATE(345), 1,
      sym_qualified_type_identifier,
    STATE(368), 1,
      sym_type,
    STATE(393), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15628] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      anon_sym_EQ,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    STATE(335), 1,
      sym_type_parameters,
    STATE(378), 1,
      sym_parameters,
    STATE(521), 1,
      sym_block_expression,
    STATE(523), 1,
      sym_retuern_type,
  [15659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15689] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(346), 1,
      sym_type_parameters,
    STATE(403), 1,
      sym_parameters,
    STATE(542), 1,
      sym_retuern_type,
    STATE(543), 1,
      sym_block_expression,
  [15720] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(913), 1,
      sym_lowercase_identifier,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_interface_definition_repeat1,
    STATE(538), 1,
      sym_function_identifier,
    STATE(539), 1,
      sym_interface_method_declaration,
    STATE(631), 1,
      sym_qualified_type_identifier,
  [15748] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_lowercase_identifier,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
    ACTIONS(922), 1,
      sym_identifier,
    ACTIONS(925), 1,
      sym_package_identifier,
    STATE(320), 1,
      aux_sym_interface_definition_repeat1,
    STATE(538), 1,
      sym_function_identifier,
    STATE(539), 1,
      sym_interface_method_declaration,
    STATE(631), 1,
      sym_qualified_type_identifier,
  [15776] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_lowercase_identifier,
    ACTIONS(930), 1,
      anon_sym_priv,
    ACTIONS(932), 1,
      anon_sym_pub,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
    ACTIONS(936), 1,
      sym_mutability,
    STATE(331), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(577), 1,
      sym_visibility,
  [15804] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(913), 1,
      sym_lowercase_identifier,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_interface_definition_repeat1,
    STATE(538), 1,
      sym_function_identifier,
    STATE(539), 1,
      sym_interface_method_declaration,
    STATE(631), 1,
      sym_qualified_type_identifier,
  [15832] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_lowercase_identifier,
    ACTIONS(930), 1,
      anon_sym_priv,
    ACTIONS(932), 1,
      anon_sym_pub,
    ACTIONS(936), 1,
      sym_mutability,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(577), 1,
      sym_visibility,
  [15860] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_lowercase_identifier,
    ACTIONS(930), 1,
      anon_sym_priv,
    ACTIONS(932), 1,
      anon_sym_pub,
    ACTIONS(936), 1,
      sym_mutability,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(577), 1,
      sym_visibility,
  [15888] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_lowercase_identifier,
    ACTIONS(930), 1,
      anon_sym_priv,
    ACTIONS(932), 1,
      anon_sym_pub,
    ACTIONS(936), 1,
      sym_mutability,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(577), 1,
      sym_visibility,
  [15916] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(913), 1,
      sym_lowercase_identifier,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      aux_sym_interface_definition_repeat1,
    STATE(538), 1,
      sym_function_identifier,
    STATE(539), 1,
      sym_interface_method_declaration,
    STATE(631), 1,
      sym_qualified_type_identifier,
  [15944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym_pub_attribute,
    ACTIONS(948), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(950), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15964] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_lowercase_identifier,
    ACTIONS(930), 1,
      anon_sym_priv,
    ACTIONS(932), 1,
      anon_sym_pub,
    ACTIONS(936), 1,
      sym_mutability,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(577), 1,
      sym_visibility,
  [15992] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_lowercase_identifier,
    ACTIONS(955), 1,
      anon_sym_priv,
    ACTIONS(958), 1,
      anon_sym_pub,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    ACTIONS(963), 1,
      sym_mutability,
    STATE(329), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(577), 1,
      sym_visibility,
  [16020] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(913), 1,
      sym_lowercase_identifier,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      aux_sym_interface_definition_repeat1,
    STATE(538), 1,
      sym_function_identifier,
    STATE(539), 1,
      sym_interface_method_declaration,
    STATE(631), 1,
      sym_qualified_type_identifier,
  [16048] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_lowercase_identifier,
    ACTIONS(930), 1,
      anon_sym_priv,
    ACTIONS(932), 1,
      anon_sym_pub,
    ACTIONS(936), 1,
      sym_mutability,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      aux_sym_struct_definition_repeat1,
    STATE(559), 1,
      sym_struct_filed_declaration,
    STATE(577), 1,
      sym_visibility,
  [16076] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16097] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16118] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(341), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16139] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(403), 1,
      sym_parameters,
    STATE(542), 1,
      sym_retuern_type,
    STATE(543), 1,
      sym_block_expression,
  [16164] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    STATE(332), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16185] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_as,
    STATE(359), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(642), 1,
      sym_dotdot_pattern,
  [16210] = 7,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(984), 1,
      anon_sym_DQUOTE,
    STATE(340), 1,
      sym_interpolator,
    STATE(339), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16233] = 7,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(336), 1,
      sym_interpolator,
    STATE(354), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16256] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(988), 1,
      anon_sym_DQUOTE,
    STATE(342), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16277] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16298] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16319] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(992), 1,
      sym_lowercase_identifier,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(452), 1,
      sym_filed_single_pattern,
    STATE(648), 1,
      sym_dotdot_pattern,
    STATE(496), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16342] = 7,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      sym_interpolator,
    STATE(354), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_LBRACK,
    STATE(398), 1,
      sym_type_arguments,
    ACTIONS(998), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    STATE(382), 1,
      sym_parameters,
    STATE(488), 1,
      sym_retuern_type,
    STATE(491), 1,
      sym_block_expression,
  [16407] = 7,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(1004), 1,
      anon_sym_DQUOTE,
    STATE(349), 1,
      sym_interpolator,
    STATE(344), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(992), 1,
      sym_lowercase_identifier,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    STATE(452), 1,
      sym_filed_single_pattern,
    STATE(636), 1,
      sym_dotdot_pattern,
    STATE(496), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16453] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    STATE(333), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16474] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1012), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1015), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1018), 1,
      sym_escape_seqence,
    STATE(350), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1021), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [16511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym_lowercase_identifier,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    STATE(389), 1,
      sym_filed_single_pattern,
    STATE(621), 1,
      sym_struct_filed_pattern,
    STATE(496), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_DASH_GT,
    ACTIONS(1025), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16545] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1034), 1,
      sym_escape_seqence,
    ACTIONS(1029), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    STATE(354), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_DASH_GT,
    ACTIONS(1037), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_DASH_GT,
    ACTIONS(1041), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_DASH_GT,
    ACTIONS(1045), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(645), 1,
      sym_dotdot_pattern,
  [16635] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(913), 1,
      sym_lowercase_identifier,
    STATE(315), 1,
      sym_function_identifier,
    STATE(631), 1,
      sym_qualified_type_identifier,
  [16654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16665] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_LF,
    ACTIONS(1059), 1,
      anon_sym_LBRACK,
    STATE(507), 1,
      sym_type_parameters,
    ACTIONS(1057), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16693] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_lowercase_identifier,
    ACTIONS(1065), 1,
      anon_sym_RBRACE,
    STATE(602), 1,
      sym_labeled_expression,
    STATE(606), 1,
      sym_labeled_expression_pun,
    STATE(646), 1,
      sym_struct_field_expression,
  [16712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [16723] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_lowercase_identifier,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
    STATE(602), 1,
      sym_labeled_expression,
    STATE(606), 1,
      sym_labeled_expression_pun,
    STATE(613), 1,
      sym_struct_field_expression,
  [16742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(913), 1,
      sym_lowercase_identifier,
    STATE(318), 1,
      sym_function_identifier,
    STATE(631), 1,
      sym_qualified_type_identifier,
  [16761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16772] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(354), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16789] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_LF,
    ACTIONS(1077), 1,
      anon_sym_DASH_GT,
    STATE(486), 1,
      sym_retuern_type,
    ACTIONS(1075), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_lowercase_identifier,
    ACTIONS(1079), 1,
      anon_sym_RBRACE,
    STATE(586), 1,
      sym_struct_filed_expression,
    STATE(599), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1081), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16838] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym_constructor_pattern_repeat1,
  [16857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [16879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16890] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(984), 1,
      anon_sym_DQUOTE,
    STATE(369), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(542), 1,
      sym_retuern_type,
    STATE(543), 1,
      sym_block_expression,
  [16926] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LBRACK,
    ACTIONS(1093), 1,
      anon_sym_LF,
    STATE(536), 1,
      sym_type_parameters,
    ACTIONS(1095), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16954] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(648), 1,
      sym_dotdot_pattern,
  [16973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    ACTIONS(1101), 1,
      anon_sym_EQ,
    STATE(518), 1,
      sym_block_expression,
    STATE(567), 1,
      sym_retuern_type,
  [16992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_lowercase_identifier,
    ACTIONS(1103), 1,
      anon_sym_RBRACE,
    STATE(490), 1,
      sym_struct_filed_expression,
    STATE(599), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17009] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      aux_sym_constructor_pattern_repeat1,
  [17028] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      aux_sym_constructor_pattern_repeat1,
  [17047] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_DASH_GT,
    ACTIONS(1111), 1,
      anon_sym_LF,
    STATE(492), 1,
      sym_retuern_type,
    ACTIONS(1113), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17064] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    ACTIONS(1117), 1,
      anon_sym_COLON,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
  [17083] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_DASH_GT,
    ACTIONS(1121), 1,
      anon_sym_LF,
    STATE(495), 1,
      sym_retuern_type,
    ACTIONS(1123), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(623), 1,
      sym_dotdot_pattern,
  [17119] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(354), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17136] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_LF,
    ACTIONS(1131), 1,
      anon_sym_LBRACK,
    STATE(516), 1,
      sym_type_arguments,
    ACTIONS(1129), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_lowercase_identifier,
    ACTIONS(1137), 1,
      anon_sym_RBRACE,
    STATE(586), 1,
      sym_struct_filed_expression,
    STATE(599), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(1141), 1,
      anon_sym_EQ,
    STATE(608), 1,
      sym_type_annotation,
  [17211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17222] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_DASH_GT,
    ACTIONS(1145), 1,
      anon_sym_LF,
    STATE(466), 1,
      sym_retuern_type,
    ACTIONS(1147), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17250] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_unescaped_string_fragment,
    ACTIONS(974), 1,
      sym_escape_seqence,
    ACTIONS(1004), 1,
      anon_sym_DQUOTE,
    STATE(390), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [17278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(1021), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [17293] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_DASH_GT,
    ACTIONS(1156), 1,
      anon_sym_LF,
    STATE(557), 1,
      sym_retuern_type,
    ACTIONS(1158), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    STATE(488), 1,
      sym_retuern_type,
    STATE(491), 1,
      sym_block_expression,
  [17329] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(1160), 1,
      sym_identifier,
    STATE(433), 1,
      sym_constraint,
    STATE(480), 1,
      sym_qualified_type_identifier,
    STATE(589), 1,
      sym_constraints,
  [17348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    ACTIONS(1164), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [17372] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_LF,
    ACTIONS(1168), 1,
      anon_sym_DASH_GT,
    ACTIONS(1166), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RBRACE,
    ACTIONS(1172), 1,
      sym_uppercase_identifier,
    STATE(408), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(1175), 1,
      anon_sym_if,
    STATE(123), 2,
      sym_block_expression,
      sym_if_expression,
  [17416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_PLUS,
    STATE(410), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RBRACE,
    ACTIONS(1184), 1,
      sym_uppercase_identifier,
    STATE(408), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_uppercase_identifier,
    ACTIONS(1188), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17472] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_LF,
    ACTIONS(1192), 1,
      anon_sym_DASH_GT,
    ACTIONS(1190), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17496] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1198), 1,
      sym_escape_seqence,
    ACTIONS(1196), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [17508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    STATE(570), 1,
      sym_block_expression,
    STATE(593), 1,
      sym_retuern_type,
  [17524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    STATE(212), 1,
      sym_block_expression,
    STATE(581), 1,
      sym_retuern_type,
  [17540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17550] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_LF,
    ACTIONS(1204), 1,
      anon_sym_DASH_GT,
    ACTIONS(1202), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    STATE(571), 1,
      sym_type_annotation,
    ACTIONS(1206), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17578] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LF,
    ACTIONS(599), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [17590] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LF,
    ACTIONS(1208), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [17602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_uppercase_identifier,
    ACTIONS(1210), 1,
      anon_sym_RBRACE,
    STATE(411), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_uppercase_identifier,
    ACTIONS(1210), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_package_identifier,
    ACTIONS(1160), 1,
      sym_identifier,
    STATE(480), 1,
      sym_qualified_type_identifier,
    STATE(533), 1,
      sym_constraint,
  [17650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_COLON,
    ACTIONS(1212), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_PLUS,
    STATE(410), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym_lowercase_identifier,
    STATE(452), 1,
      sym_filed_single_pattern,
    STATE(496), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [17690] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_LF,
    ACTIONS(1222), 1,
      anon_sym_DASH_GT,
    ACTIONS(1220), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17704] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_LF,
    ACTIONS(1228), 1,
      anon_sym_LPAREN,
    ACTIONS(1226), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym_pub_attribute,
    ACTIONS(1151), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [17732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_PLUS,
    STATE(428), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(1232), 1,
      anon_sym_if,
    STATE(187), 2,
      sym_block_expression,
      sym_if_expression,
  [17760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 1,
      anon_sym_DASH_GT,
    STATE(108), 1,
      sym_block_expression,
    STATE(591), 1,
      sym_retuern_type,
  [17776] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1236), 1,
      sym_escape_seqence,
    ACTIONS(1234), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [17788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RBRACE,
    ACTIONS(1184), 1,
      sym_uppercase_identifier,
    STATE(413), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      sym_identifier,
    ACTIONS(920), 3,
      anon_sym_RBRACE,
      sym_lowercase_identifier,
      sym_package_identifier,
  [17816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_uppercase_identifier,
    ACTIONS(1240), 1,
      anon_sym_RBRACE,
    STATE(425), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(1242), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [17846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_lowercase_identifier,
    STATE(586), 1,
      sym_struct_filed_expression,
    STATE(599), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(713), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [17874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(1250), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [17888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [17901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(1257), 1,
      sym_lowercase_identifier,
    STATE(418), 1,
      sym_parameters,
  [17914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      sym_lowercase_identifier,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_parameter,
  [17927] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_LF,
    ACTIONS(1265), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17947] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_LF,
    ACTIONS(1271), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(1273), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [17971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_type,
    ACTIONS(1277), 1,
      anon_sym_struct,
    ACTIONS(1279), 1,
      anon_sym_enum,
  [17984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [18006] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_LF,
    ACTIONS(1285), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_let,
    ACTIONS(1289), 1,
      anon_sym_func,
    ACTIONS(1291), 1,
      anon_sym_interface,
  [18030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [18043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [18056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_constructor_pattern_repeat1,
  [18069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1301), 1,
      anon_sym_RBRACK,
    STATE(473), 1,
      aux_sym_enum_constructor_repeat1,
  [18082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
  [18095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(1305), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_constructor_pattern_repeat1,
  [18108] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LF,
    ACTIONS(1309), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18119] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1313), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym_enum_constructor_repeat1,
  [18143] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_LF,
    ACTIONS(1321), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18154] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_LF,
    ACTIONS(1075), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18165] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_LF,
    ACTIONS(1325), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
  [18189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(1329), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
  [18202] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_LF,
    ACTIONS(1333), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18222] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1335), 1,
      anon_sym_LF,
    ACTIONS(1337), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
  [18246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_RBRACE,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    STATE(474), 1,
      aux_sym_struct_field_expression_repeat1,
  [18259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      aux_sym_type_parameters_repeat1,
  [18272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_RBRACK,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(587), 1,
      sym_type_identifier,
  [18285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(1355), 1,
      anon_sym_LBRACE,
    STATE(614), 1,
      sym_type_parameters,
  [18298] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_LF,
    ACTIONS(1357), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(1359), 1,
      anon_sym_LBRACE,
    STATE(610), 1,
      sym_type_parameters,
  [18322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [18331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_constructor_pattern_repeat1,
  [18344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(1365), 1,
      anon_sym_EQ,
    STATE(609), 1,
      sym_type_annotation,
  [18357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
  [18370] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_LF,
    ACTIONS(1371), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_COLON,
    ACTIONS(1373), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [18392] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_LF,
    ACTIONS(1113), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18403] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_LF,
    ACTIONS(1379), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(1101), 1,
      anon_sym_EQ,
    STATE(518), 1,
      sym_block_expression,
  [18427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [18440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RBRACE,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(503), 1,
      aux_sym_struct_field_expression_repeat1,
  [18453] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_LF,
    ACTIONS(1389), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18464] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LF,
    ACTIONS(1123), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18475] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1391), 1,
      anon_sym_LF,
    ACTIONS(1393), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [18499] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_LF,
    ACTIONS(1399), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [18519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_RBRACK,
    STATE(483), 1,
      aux_sym_enum_constructor_repeat1,
  [18532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(1407), 1,
      anon_sym_EQ,
    STATE(605), 1,
      sym_type_annotation,
  [18545] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_LF,
    ACTIONS(1409), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18556] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LF,
    ACTIONS(1411), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(1413), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
  [18580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    ACTIONS(1415), 1,
      anon_sym_RBRACK,
    STATE(587), 1,
      sym_type_identifier,
  [18593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_RBRACE,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(474), 1,
      aux_sym_struct_field_expression_repeat1,
  [18606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(553), 1,
      aux_sym_parameters_repeat1,
  [18619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      sym_lowercase_identifier,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_parameter,
  [18632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18641] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_LF,
    ACTIONS(1095), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18652] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_LF,
    ACTIONS(1427), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_as,
    ACTIONS(1429), 1,
      anon_sym_EQ_GT,
  [18676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
  [18689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      sym_lowercase_identifier,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      sym_parameter,
  [18702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      aux_sym_enum_constructor_repeat1,
  [18715] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_LF,
    ACTIONS(1441), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      aux_sym_type_parameters_repeat1,
  [18739] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_LF,
    ACTIONS(1449), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18750] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_LF,
    ACTIONS(1451), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    ACTIONS(1445), 1,
      anon_sym_RBRACK,
    STATE(587), 1,
      sym_type_identifier,
  [18774] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_LF,
    ACTIONS(1455), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    ACTIONS(1459), 1,
      anon_sym_COMMA,
    STATE(460), 1,
      aux_sym_enum_constructor_repeat1,
  [18798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18807] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_LF,
    ACTIONS(1465), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18818] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_LF,
    ACTIONS(1469), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(543), 1,
      sym_block_expression,
  [18842] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_LF,
    ACTIONS(1473), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18853] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_LF,
    ACTIONS(1477), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(1479), 1,
      anon_sym_LBRACE,
    STATE(639), 1,
      sym_type_parameters,
  [18877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RBRACK,
    STATE(514), 1,
      aux_sym_type_parameters_repeat1,
  [18890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      aux_sym_type_parameters_repeat1,
  [18903] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_LF,
    ACTIONS(1489), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    ACTIONS(1487), 1,
      anon_sym_RBRACK,
    STATE(587), 1,
      sym_type_identifier,
  [18927] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_LF,
    ACTIONS(1493), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(1495), 1,
      anon_sym_LBRACE,
    STATE(643), 1,
      sym_type_parameters,
  [18951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [18960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(1497), 1,
      anon_sym_EQ,
    STATE(627), 1,
      sym_type_annotation,
  [18973] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_LF,
    ACTIONS(1499), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18984] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_LF,
    ACTIONS(1503), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18995] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_LF,
    ACTIONS(1507), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(1509), 1,
      anon_sym_LPAREN,
    STATE(633), 1,
      sym_type_parameters,
  [19019] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1511), 1,
      anon_sym_LF,
    ACTIONS(1513), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19030] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_LF,
    ACTIONS(1517), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19041] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_LF,
    ACTIONS(1521), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_EQ,
    STATE(491), 1,
      sym_block_expression,
  [19065] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1523), 1,
      anon_sym_LF,
    ACTIONS(1525), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COLON,
    ACTIONS(1529), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19087] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_LF,
    ACTIONS(1531), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_COMMA,
    ACTIONS(1535), 1,
      anon_sym_RBRACK,
    STATE(528), 1,
      aux_sym_type_parameters_repeat1,
  [19111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(1537), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_enum_constructor_repeat1,
  [19124] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_LF,
    ACTIONS(1539), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    ACTIONS(1541), 1,
      anon_sym_COMMA,
    STATE(554), 1,
      aux_sym_enum_constructor_repeat1,
  [19148] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_LF,
    ACTIONS(1545), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19159] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_LF,
    ACTIONS(1549), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19170] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(691), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    ACTIONS(1553), 1,
      anon_sym_COMMA,
    STATE(553), 1,
      aux_sym_parameters_repeat1,
  [19194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(1537), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_enum_constructor_repeat1,
  [19207] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LF,
    ACTIONS(1556), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
    ACTIONS(1560), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      aux_sym_parameters_repeat1,
  [19231] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_LF,
    ACTIONS(1147), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19242] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_LF,
    ACTIONS(1562), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19253] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_LF,
    ACTIONS(1566), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [19273] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_LF,
    ACTIONS(1572), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19284] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LF,
    ACTIONS(1574), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19295] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_LF,
    ACTIONS(1578), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19306] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_LF,
    ACTIONS(1580), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19317] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_LF,
    ACTIONS(1584), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [19337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(1588), 1,
      anon_sym_EQ,
    STATE(565), 1,
      sym_block_expression,
  [19350] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_LF,
    ACTIONS(1592), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19361] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_LF,
    ACTIONS(1594), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19372] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_LF,
    ACTIONS(1598), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19391] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1602), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1604), 1,
      sym_escape_seqence,
  [19401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_parameters,
  [19411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_parameters,
  [19429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_DQUOTE,
    STATE(465), 1,
      sym_string_literal,
  [19439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      sym_lowercase_identifier,
    ACTIONS(1610), 1,
      sym_mutability,
  [19449] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(1612), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1614), 1,
      sym_escape_seqence,
  [19459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(527), 1,
      sym_type_identifier,
  [19469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(587), 1,
      sym_type_identifier,
  [19479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_block_expression,
  [19489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_DQUOTE,
    STATE(487), 1,
      sym_string_literal,
  [19499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_DQUOTE,
    STATE(491), 1,
      sym_string_literal,
  [19509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [19517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(592), 1,
      sym_string_literal,
  [19527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [19535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(582), 1,
      sym_string_literal,
  [19553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(601), 1,
      sym_string_literal,
  [19571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block_expression,
  [19581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_DQUOTE,
    STATE(518), 1,
      sym_string_literal,
  [19591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(463), 1,
      sym_block_expression,
  [19601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(546), 1,
      sym_type_identifier,
  [19611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      sym_lowercase_identifier,
    STATE(574), 1,
      sym_parameter,
  [19621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [19629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(576), 1,
      sym_string_literal,
  [19639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(417), 1,
      sym_parameters,
  [19649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [19657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(583), 1,
      sym_string_literal,
  [19667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_DQUOTE,
    STATE(565), 1,
      sym_string_literal,
  [19677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_RBRACE,
    ACTIONS(1622), 1,
      anon_sym_COMMA,
  [19687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      sym_lowercase_identifier,
  [19694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      sym_dot_identifier,
  [19701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_EQ,
  [19708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_COMMA,
  [19715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_RBRACE,
  [19722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_EQ,
  [19729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_EQ,
  [19736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_LBRACE,
  [19743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_SQUOTE,
  [19750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_SQUOTE,
  [19757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_RBRACE,
  [19764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_LBRACE,
  [19771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      sym_dot_identifier,
  [19778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      sym_colon_colon_uppercase_identifier,
  [19785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      sym_dot_identifier,
  [19792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      sym_lowercase_identifier,
  [19799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_RBRACK,
  [19806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_RPAREN,
  [19813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_RBRACE,
  [19820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      sym_identifier,
  [19827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
  [19834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      sym_lowercase_identifier,
  [19841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_COLON,
  [19848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      sym_identifier,
  [19855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_EQ,
  [19862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      sym_identifier,
  [19869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1666), 1,
      sym_identifier,
  [19876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_LBRACE,
  [19883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      sym_colon_colon_lowercase_identifier,
  [19890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      anon_sym_RBRACE,
  [19897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      anon_sym_LPAREN,
  [19904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
  [19911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_RPAREN,
  [19918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_RBRACE,
  [19925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      anon_sym_RPAREN,
  [19932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      sym_dot_identifier,
  [19939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_LBRACE,
  [19946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_LBRACE,
  [19953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_COLON,
  [19960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
  [19967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_LBRACE,
  [19974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_readonly,
  [19981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
  [19988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_RBRACE,
  [19995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_EQ,
  [20002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
  [20009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      anon_sym_RPAREN,
  [20016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_COLON_EQ,
  [20023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      sym_lowercase_identifier,
  [20030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      sym_lowercase_identifier,
  [20037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_COLON,
  [20044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      ts_builtin_sym_end,
  [20051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      sym_identifier,
  [20058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      sym_colon_colon_uppercase_identifier,
  [20065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      sym_lowercase_identifier,
  [20072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      sym_identifier,
  [20079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      sym_identifier,
  [20086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 412,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 616,
  [SMALL_STATE(18)] = 718,
  [SMALL_STATE(19)] = 820,
  [SMALL_STATE(20)] = 922,
  [SMALL_STATE(21)] = 1024,
  [SMALL_STATE(22)] = 1126,
  [SMALL_STATE(23)] = 1228,
  [SMALL_STATE(24)] = 1330,
  [SMALL_STATE(25)] = 1432,
  [SMALL_STATE(26)] = 1534,
  [SMALL_STATE(27)] = 1636,
  [SMALL_STATE(28)] = 1738,
  [SMALL_STATE(29)] = 1840,
  [SMALL_STATE(30)] = 1942,
  [SMALL_STATE(31)] = 2044,
  [SMALL_STATE(32)] = 2146,
  [SMALL_STATE(33)] = 2248,
  [SMALL_STATE(34)] = 2350,
  [SMALL_STATE(35)] = 2452,
  [SMALL_STATE(36)] = 2554,
  [SMALL_STATE(37)] = 2653,
  [SMALL_STATE(38)] = 2752,
  [SMALL_STATE(39)] = 2851,
  [SMALL_STATE(40)] = 2950,
  [SMALL_STATE(41)] = 3049,
  [SMALL_STATE(42)] = 3148,
  [SMALL_STATE(43)] = 3247,
  [SMALL_STATE(44)] = 3346,
  [SMALL_STATE(45)] = 3445,
  [SMALL_STATE(46)] = 3544,
  [SMALL_STATE(47)] = 3643,
  [SMALL_STATE(48)] = 3742,
  [SMALL_STATE(49)] = 3841,
  [SMALL_STATE(50)] = 3940,
  [SMALL_STATE(51)] = 4039,
  [SMALL_STATE(52)] = 4138,
  [SMALL_STATE(53)] = 4237,
  [SMALL_STATE(54)] = 4336,
  [SMALL_STATE(55)] = 4435,
  [SMALL_STATE(56)] = 4534,
  [SMALL_STATE(57)] = 4633,
  [SMALL_STATE(58)] = 4732,
  [SMALL_STATE(59)] = 4831,
  [SMALL_STATE(60)] = 4930,
  [SMALL_STATE(61)] = 5029,
  [SMALL_STATE(62)] = 5128,
  [SMALL_STATE(63)] = 5227,
  [SMALL_STATE(64)] = 5326,
  [SMALL_STATE(65)] = 5425,
  [SMALL_STATE(66)] = 5524,
  [SMALL_STATE(67)] = 5623,
  [SMALL_STATE(68)] = 5722,
  [SMALL_STATE(69)] = 5821,
  [SMALL_STATE(70)] = 5920,
  [SMALL_STATE(71)] = 6019,
  [SMALL_STATE(72)] = 6118,
  [SMALL_STATE(73)] = 6161,
  [SMALL_STATE(74)] = 6204,
  [SMALL_STATE(75)] = 6246,
  [SMALL_STATE(76)] = 6288,
  [SMALL_STATE(77)] = 6330,
  [SMALL_STATE(78)] = 6372,
  [SMALL_STATE(79)] = 6414,
  [SMALL_STATE(80)] = 6496,
  [SMALL_STATE(81)] = 6538,
  [SMALL_STATE(82)] = 6617,
  [SMALL_STATE(83)] = 6696,
  [SMALL_STATE(84)] = 6775,
  [SMALL_STATE(85)] = 6854,
  [SMALL_STATE(86)] = 6933,
  [SMALL_STATE(87)] = 7012,
  [SMALL_STATE(88)] = 7091,
  [SMALL_STATE(89)] = 7134,
  [SMALL_STATE(90)] = 7207,
  [SMALL_STATE(91)] = 7280,
  [SMALL_STATE(92)] = 7353,
  [SMALL_STATE(93)] = 7426,
  [SMALL_STATE(94)] = 7499,
  [SMALL_STATE(95)] = 7572,
  [SMALL_STATE(96)] = 7645,
  [SMALL_STATE(97)] = 7715,
  [SMALL_STATE(98)] = 7785,
  [SMALL_STATE(99)] = 7855,
  [SMALL_STATE(100)] = 7925,
  [SMALL_STATE(101)] = 7995,
  [SMALL_STATE(102)] = 8065,
  [SMALL_STATE(103)] = 8113,
  [SMALL_STATE(104)] = 8151,
  [SMALL_STATE(105)] = 8195,
  [SMALL_STATE(106)] = 8235,
  [SMALL_STATE(107)] = 8305,
  [SMALL_STATE(108)] = 8343,
  [SMALL_STATE(109)] = 8380,
  [SMALL_STATE(110)] = 8417,
  [SMALL_STATE(111)] = 8454,
  [SMALL_STATE(112)] = 8491,
  [SMALL_STATE(113)] = 8544,
  [SMALL_STATE(114)] = 8595,
  [SMALL_STATE(115)] = 8642,
  [SMALL_STATE(116)] = 8679,
  [SMALL_STATE(117)] = 8716,
  [SMALL_STATE(118)] = 8753,
  [SMALL_STATE(119)] = 8790,
  [SMALL_STATE(120)] = 8827,
  [SMALL_STATE(121)] = 8866,
  [SMALL_STATE(122)] = 8905,
  [SMALL_STATE(123)] = 8948,
  [SMALL_STATE(124)] = 8985,
  [SMALL_STATE(125)] = 9022,
  [SMALL_STATE(126)] = 9059,
  [SMALL_STATE(127)] = 9096,
  [SMALL_STATE(128)] = 9133,
  [SMALL_STATE(129)] = 9170,
  [SMALL_STATE(130)] = 9207,
  [SMALL_STATE(131)] = 9244,
  [SMALL_STATE(132)] = 9281,
  [SMALL_STATE(133)] = 9318,
  [SMALL_STATE(134)] = 9355,
  [SMALL_STATE(135)] = 9392,
  [SMALL_STATE(136)] = 9429,
  [SMALL_STATE(137)] = 9468,
  [SMALL_STATE(138)] = 9505,
  [SMALL_STATE(139)] = 9542,
  [SMALL_STATE(140)] = 9579,
  [SMALL_STATE(141)] = 9616,
  [SMALL_STATE(142)] = 9653,
  [SMALL_STATE(143)] = 9690,
  [SMALL_STATE(144)] = 9727,
  [SMALL_STATE(145)] = 9764,
  [SMALL_STATE(146)] = 9801,
  [SMALL_STATE(147)] = 9838,
  [SMALL_STATE(148)] = 9877,
  [SMALL_STATE(149)] = 9914,
  [SMALL_STATE(150)] = 9951,
  [SMALL_STATE(151)] = 9988,
  [SMALL_STATE(152)] = 10025,
  [SMALL_STATE(153)] = 10062,
  [SMALL_STATE(154)] = 10099,
  [SMALL_STATE(155)] = 10136,
  [SMALL_STATE(156)] = 10173,
  [SMALL_STATE(157)] = 10213,
  [SMALL_STATE(158)] = 10251,
  [SMALL_STATE(159)] = 10289,
  [SMALL_STATE(160)] = 10324,
  [SMALL_STATE(161)] = 10369,
  [SMALL_STATE(162)] = 10406,
  [SMALL_STATE(163)] = 10443,
  [SMALL_STATE(164)] = 10478,
  [SMALL_STATE(165)] = 10513,
  [SMALL_STATE(166)] = 10547,
  [SMALL_STATE(167)] = 10581,
  [SMALL_STATE(168)] = 10615,
  [SMALL_STATE(169)] = 10649,
  [SMALL_STATE(170)] = 10683,
  [SMALL_STATE(171)] = 10717,
  [SMALL_STATE(172)] = 10751,
  [SMALL_STATE(173)] = 10785,
  [SMALL_STATE(174)] = 10819,
  [SMALL_STATE(175)] = 10853,
  [SMALL_STATE(176)] = 10887,
  [SMALL_STATE(177)] = 10923,
  [SMALL_STATE(178)] = 10957,
  [SMALL_STATE(179)] = 10991,
  [SMALL_STATE(180)] = 11025,
  [SMALL_STATE(181)] = 11059,
  [SMALL_STATE(182)] = 11093,
  [SMALL_STATE(183)] = 11141,
  [SMALL_STATE(184)] = 11175,
  [SMALL_STATE(185)] = 11209,
  [SMALL_STATE(186)] = 11243,
  [SMALL_STATE(187)] = 11277,
  [SMALL_STATE(188)] = 11311,
  [SMALL_STATE(189)] = 11345,
  [SMALL_STATE(190)] = 11379,
  [SMALL_STATE(191)] = 11413,
  [SMALL_STATE(192)] = 11447,
  [SMALL_STATE(193)] = 11481,
  [SMALL_STATE(194)] = 11515,
  [SMALL_STATE(195)] = 11551,
  [SMALL_STATE(196)] = 11585,
  [SMALL_STATE(197)] = 11619,
  [SMALL_STATE(198)] = 11667,
  [SMALL_STATE(199)] = 11701,
  [SMALL_STATE(200)] = 11735,
  [SMALL_STATE(201)] = 11769,
  [SMALL_STATE(202)] = 11803,
  [SMALL_STATE(203)] = 11837,
  [SMALL_STATE(204)] = 11881,
  [SMALL_STATE(205)] = 11923,
  [SMALL_STATE(206)] = 11957,
  [SMALL_STATE(207)] = 11997,
  [SMALL_STATE(208)] = 12033,
  [SMALL_STATE(209)] = 12069,
  [SMALL_STATE(210)] = 12107,
  [SMALL_STATE(211)] = 12141,
  [SMALL_STATE(212)] = 12189,
  [SMALL_STATE(213)] = 12223,
  [SMALL_STATE(214)] = 12257,
  [SMALL_STATE(215)] = 12291,
  [SMALL_STATE(216)] = 12325,
  [SMALL_STATE(217)] = 12359,
  [SMALL_STATE(218)] = 12393,
  [SMALL_STATE(219)] = 12427,
  [SMALL_STATE(220)] = 12461,
  [SMALL_STATE(221)] = 12495,
  [SMALL_STATE(222)] = 12529,
  [SMALL_STATE(223)] = 12563,
  [SMALL_STATE(224)] = 12597,
  [SMALL_STATE(225)] = 12642,
  [SMALL_STATE(226)] = 12687,
  [SMALL_STATE(227)] = 12742,
  [SMALL_STATE(228)] = 12797,
  [SMALL_STATE(229)] = 12841,
  [SMALL_STATE(230)] = 12885,
  [SMALL_STATE(231)] = 12929,
  [SMALL_STATE(232)] = 12981,
  [SMALL_STATE(233)] = 13033,
  [SMALL_STATE(234)] = 13085,
  [SMALL_STATE(235)] = 13137,
  [SMALL_STATE(236)] = 13181,
  [SMALL_STATE(237)] = 13233,
  [SMALL_STATE(238)] = 13277,
  [SMALL_STATE(239)] = 13321,
  [SMALL_STATE(240)] = 13365,
  [SMALL_STATE(241)] = 13409,
  [SMALL_STATE(242)] = 13453,
  [SMALL_STATE(243)] = 13505,
  [SMALL_STATE(244)] = 13553,
  [SMALL_STATE(245)] = 13597,
  [SMALL_STATE(246)] = 13641,
  [SMALL_STATE(247)] = 13685,
  [SMALL_STATE(248)] = 13734,
  [SMALL_STATE(249)] = 13781,
  [SMALL_STATE(250)] = 13830,
  [SMALL_STATE(251)] = 13876,
  [SMALL_STATE(252)] = 13922,
  [SMALL_STATE(253)] = 13968,
  [SMALL_STATE(254)] = 14019,
  [SMALL_STATE(255)] = 14070,
  [SMALL_STATE(256)] = 14113,
  [SMALL_STATE(257)] = 14140,
  [SMALL_STATE(258)] = 14164,
  [SMALL_STATE(259)] = 14187,
  [SMALL_STATE(260)] = 14218,
  [SMALL_STATE(261)] = 14249,
  [SMALL_STATE(262)] = 14280,
  [SMALL_STATE(263)] = 14311,
  [SMALL_STATE(264)] = 14342,
  [SMALL_STATE(265)] = 14373,
  [SMALL_STATE(266)] = 14404,
  [SMALL_STATE(267)] = 14435,
  [SMALL_STATE(268)] = 14466,
  [SMALL_STATE(269)] = 14497,
  [SMALL_STATE(270)] = 14528,
  [SMALL_STATE(271)] = 14559,
  [SMALL_STATE(272)] = 14590,
  [SMALL_STATE(273)] = 14621,
  [SMALL_STATE(274)] = 14642,
  [SMALL_STATE(275)] = 14673,
  [SMALL_STATE(276)] = 14704,
  [SMALL_STATE(277)] = 14735,
  [SMALL_STATE(278)] = 14753,
  [SMALL_STATE(279)] = 14781,
  [SMALL_STATE(280)] = 14809,
  [SMALL_STATE(281)] = 14837,
  [SMALL_STATE(282)] = 14865,
  [SMALL_STATE(283)] = 14883,
  [SMALL_STATE(284)] = 14911,
  [SMALL_STATE(285)] = 14929,
  [SMALL_STATE(286)] = 14957,
  [SMALL_STATE(287)] = 14985,
  [SMALL_STATE(288)] = 15013,
  [SMALL_STATE(289)] = 15031,
  [SMALL_STATE(290)] = 15049,
  [SMALL_STATE(291)] = 15077,
  [SMALL_STATE(292)] = 15095,
  [SMALL_STATE(293)] = 15123,
  [SMALL_STATE(294)] = 15141,
  [SMALL_STATE(295)] = 15159,
  [SMALL_STATE(296)] = 15177,
  [SMALL_STATE(297)] = 15195,
  [SMALL_STATE(298)] = 15223,
  [SMALL_STATE(299)] = 15243,
  [SMALL_STATE(300)] = 15261,
  [SMALL_STATE(301)] = 15279,
  [SMALL_STATE(302)] = 15307,
  [SMALL_STATE(303)] = 15335,
  [SMALL_STATE(304)] = 15353,
  [SMALL_STATE(305)] = 15381,
  [SMALL_STATE(306)] = 15409,
  [SMALL_STATE(307)] = 15427,
  [SMALL_STATE(308)] = 15455,
  [SMALL_STATE(309)] = 15483,
  [SMALL_STATE(310)] = 15511,
  [SMALL_STATE(311)] = 15539,
  [SMALL_STATE(312)] = 15557,
  [SMALL_STATE(313)] = 15585,
  [SMALL_STATE(314)] = 15613,
  [SMALL_STATE(315)] = 15628,
  [SMALL_STATE(316)] = 15659,
  [SMALL_STATE(317)] = 15674,
  [SMALL_STATE(318)] = 15689,
  [SMALL_STATE(319)] = 15720,
  [SMALL_STATE(320)] = 15748,
  [SMALL_STATE(321)] = 15776,
  [SMALL_STATE(322)] = 15804,
  [SMALL_STATE(323)] = 15832,
  [SMALL_STATE(324)] = 15860,
  [SMALL_STATE(325)] = 15888,
  [SMALL_STATE(326)] = 15916,
  [SMALL_STATE(327)] = 15944,
  [SMALL_STATE(328)] = 15964,
  [SMALL_STATE(329)] = 15992,
  [SMALL_STATE(330)] = 16020,
  [SMALL_STATE(331)] = 16048,
  [SMALL_STATE(332)] = 16076,
  [SMALL_STATE(333)] = 16097,
  [SMALL_STATE(334)] = 16118,
  [SMALL_STATE(335)] = 16139,
  [SMALL_STATE(336)] = 16164,
  [SMALL_STATE(337)] = 16185,
  [SMALL_STATE(338)] = 16210,
  [SMALL_STATE(339)] = 16233,
  [SMALL_STATE(340)] = 16256,
  [SMALL_STATE(341)] = 16277,
  [SMALL_STATE(342)] = 16298,
  [SMALL_STATE(343)] = 16319,
  [SMALL_STATE(344)] = 16342,
  [SMALL_STATE(345)] = 16365,
  [SMALL_STATE(346)] = 16382,
  [SMALL_STATE(347)] = 16407,
  [SMALL_STATE(348)] = 16430,
  [SMALL_STATE(349)] = 16453,
  [SMALL_STATE(350)] = 16474,
  [SMALL_STATE(351)] = 16495,
  [SMALL_STATE(352)] = 16511,
  [SMALL_STATE(353)] = 16531,
  [SMALL_STATE(354)] = 16545,
  [SMALL_STATE(355)] = 16563,
  [SMALL_STATE(356)] = 16577,
  [SMALL_STATE(357)] = 16591,
  [SMALL_STATE(358)] = 16605,
  [SMALL_STATE(359)] = 16616,
  [SMALL_STATE(360)] = 16635,
  [SMALL_STATE(361)] = 16654,
  [SMALL_STATE(362)] = 16665,
  [SMALL_STATE(363)] = 16682,
  [SMALL_STATE(364)] = 16693,
  [SMALL_STATE(365)] = 16712,
  [SMALL_STATE(366)] = 16723,
  [SMALL_STATE(367)] = 16742,
  [SMALL_STATE(368)] = 16761,
  [SMALL_STATE(369)] = 16772,
  [SMALL_STATE(370)] = 16789,
  [SMALL_STATE(371)] = 16806,
  [SMALL_STATE(372)] = 16823,
  [SMALL_STATE(373)] = 16838,
  [SMALL_STATE(374)] = 16857,
  [SMALL_STATE(375)] = 16868,
  [SMALL_STATE(376)] = 16879,
  [SMALL_STATE(377)] = 16890,
  [SMALL_STATE(378)] = 16907,
  [SMALL_STATE(379)] = 16926,
  [SMALL_STATE(380)] = 16943,
  [SMALL_STATE(381)] = 16954,
  [SMALL_STATE(382)] = 16973,
  [SMALL_STATE(383)] = 16992,
  [SMALL_STATE(384)] = 17009,
  [SMALL_STATE(385)] = 17028,
  [SMALL_STATE(386)] = 17047,
  [SMALL_STATE(387)] = 17064,
  [SMALL_STATE(388)] = 17083,
  [SMALL_STATE(389)] = 17100,
  [SMALL_STATE(390)] = 17119,
  [SMALL_STATE(391)] = 17136,
  [SMALL_STATE(392)] = 17153,
  [SMALL_STATE(393)] = 17164,
  [SMALL_STATE(394)] = 17175,
  [SMALL_STATE(395)] = 17192,
  [SMALL_STATE(396)] = 17211,
  [SMALL_STATE(397)] = 17222,
  [SMALL_STATE(398)] = 17239,
  [SMALL_STATE(399)] = 17250,
  [SMALL_STATE(400)] = 17267,
  [SMALL_STATE(401)] = 17278,
  [SMALL_STATE(402)] = 17293,
  [SMALL_STATE(403)] = 17310,
  [SMALL_STATE(404)] = 17329,
  [SMALL_STATE(405)] = 17348,
  [SMALL_STATE(406)] = 17359,
  [SMALL_STATE(407)] = 17372,
  [SMALL_STATE(408)] = 17386,
  [SMALL_STATE(409)] = 17402,
  [SMALL_STATE(410)] = 17416,
  [SMALL_STATE(411)] = 17430,
  [SMALL_STATE(412)] = 17446,
  [SMALL_STATE(413)] = 17456,
  [SMALL_STATE(414)] = 17472,
  [SMALL_STATE(415)] = 17486,
  [SMALL_STATE(416)] = 17496,
  [SMALL_STATE(417)] = 17508,
  [SMALL_STATE(418)] = 17524,
  [SMALL_STATE(419)] = 17540,
  [SMALL_STATE(420)] = 17550,
  [SMALL_STATE(421)] = 17564,
  [SMALL_STATE(422)] = 17578,
  [SMALL_STATE(423)] = 17590,
  [SMALL_STATE(424)] = 17602,
  [SMALL_STATE(425)] = 17618,
  [SMALL_STATE(426)] = 17634,
  [SMALL_STATE(427)] = 17650,
  [SMALL_STATE(428)] = 17662,
  [SMALL_STATE(429)] = 17676,
  [SMALL_STATE(430)] = 17690,
  [SMALL_STATE(431)] = 17704,
  [SMALL_STATE(432)] = 17718,
  [SMALL_STATE(433)] = 17732,
  [SMALL_STATE(434)] = 17746,
  [SMALL_STATE(435)] = 17760,
  [SMALL_STATE(436)] = 17776,
  [SMALL_STATE(437)] = 17788,
  [SMALL_STATE(438)] = 17804,
  [SMALL_STATE(439)] = 17816,
  [SMALL_STATE(440)] = 17832,
  [SMALL_STATE(441)] = 17846,
  [SMALL_STATE(442)] = 17860,
  [SMALL_STATE(443)] = 17874,
  [SMALL_STATE(444)] = 17888,
  [SMALL_STATE(445)] = 17901,
  [SMALL_STATE(446)] = 17914,
  [SMALL_STATE(447)] = 17927,
  [SMALL_STATE(448)] = 17938,
  [SMALL_STATE(449)] = 17947,
  [SMALL_STATE(450)] = 17958,
  [SMALL_STATE(451)] = 17971,
  [SMALL_STATE(452)] = 17984,
  [SMALL_STATE(453)] = 17993,
  [SMALL_STATE(454)] = 18006,
  [SMALL_STATE(455)] = 18017,
  [SMALL_STATE(456)] = 18030,
  [SMALL_STATE(457)] = 18043,
  [SMALL_STATE(458)] = 18056,
  [SMALL_STATE(459)] = 18069,
  [SMALL_STATE(460)] = 18082,
  [SMALL_STATE(461)] = 18095,
  [SMALL_STATE(462)] = 18108,
  [SMALL_STATE(463)] = 18119,
  [SMALL_STATE(464)] = 18130,
  [SMALL_STATE(465)] = 18143,
  [SMALL_STATE(466)] = 18154,
  [SMALL_STATE(467)] = 18165,
  [SMALL_STATE(468)] = 18176,
  [SMALL_STATE(469)] = 18189,
  [SMALL_STATE(470)] = 18202,
  [SMALL_STATE(471)] = 18213,
  [SMALL_STATE(472)] = 18222,
  [SMALL_STATE(473)] = 18233,
  [SMALL_STATE(474)] = 18246,
  [SMALL_STATE(475)] = 18259,
  [SMALL_STATE(476)] = 18272,
  [SMALL_STATE(477)] = 18285,
  [SMALL_STATE(478)] = 18298,
  [SMALL_STATE(479)] = 18309,
  [SMALL_STATE(480)] = 18322,
  [SMALL_STATE(481)] = 18331,
  [SMALL_STATE(482)] = 18344,
  [SMALL_STATE(483)] = 18357,
  [SMALL_STATE(484)] = 18370,
  [SMALL_STATE(485)] = 18381,
  [SMALL_STATE(486)] = 18392,
  [SMALL_STATE(487)] = 18403,
  [SMALL_STATE(488)] = 18414,
  [SMALL_STATE(489)] = 18427,
  [SMALL_STATE(490)] = 18440,
  [SMALL_STATE(491)] = 18453,
  [SMALL_STATE(492)] = 18464,
  [SMALL_STATE(493)] = 18475,
  [SMALL_STATE(494)] = 18486,
  [SMALL_STATE(495)] = 18499,
  [SMALL_STATE(496)] = 18510,
  [SMALL_STATE(497)] = 18519,
  [SMALL_STATE(498)] = 18532,
  [SMALL_STATE(499)] = 18545,
  [SMALL_STATE(500)] = 18556,
  [SMALL_STATE(501)] = 18567,
  [SMALL_STATE(502)] = 18580,
  [SMALL_STATE(503)] = 18593,
  [SMALL_STATE(504)] = 18606,
  [SMALL_STATE(505)] = 18619,
  [SMALL_STATE(506)] = 18632,
  [SMALL_STATE(507)] = 18641,
  [SMALL_STATE(508)] = 18652,
  [SMALL_STATE(509)] = 18663,
  [SMALL_STATE(510)] = 18676,
  [SMALL_STATE(511)] = 18689,
  [SMALL_STATE(512)] = 18702,
  [SMALL_STATE(513)] = 18715,
  [SMALL_STATE(514)] = 18726,
  [SMALL_STATE(515)] = 18739,
  [SMALL_STATE(516)] = 18750,
  [SMALL_STATE(517)] = 18761,
  [SMALL_STATE(518)] = 18774,
  [SMALL_STATE(519)] = 18785,
  [SMALL_STATE(520)] = 18798,
  [SMALL_STATE(521)] = 18807,
  [SMALL_STATE(522)] = 18818,
  [SMALL_STATE(523)] = 18829,
  [SMALL_STATE(524)] = 18842,
  [SMALL_STATE(525)] = 18853,
  [SMALL_STATE(526)] = 18864,
  [SMALL_STATE(527)] = 18877,
  [SMALL_STATE(528)] = 18890,
  [SMALL_STATE(529)] = 18903,
  [SMALL_STATE(530)] = 18914,
  [SMALL_STATE(531)] = 18927,
  [SMALL_STATE(532)] = 18938,
  [SMALL_STATE(533)] = 18951,
  [SMALL_STATE(534)] = 18960,
  [SMALL_STATE(535)] = 18973,
  [SMALL_STATE(536)] = 18984,
  [SMALL_STATE(537)] = 18995,
  [SMALL_STATE(538)] = 19006,
  [SMALL_STATE(539)] = 19019,
  [SMALL_STATE(540)] = 19030,
  [SMALL_STATE(541)] = 19041,
  [SMALL_STATE(542)] = 19052,
  [SMALL_STATE(543)] = 19065,
  [SMALL_STATE(544)] = 19076,
  [SMALL_STATE(545)] = 19087,
  [SMALL_STATE(546)] = 19098,
  [SMALL_STATE(547)] = 19111,
  [SMALL_STATE(548)] = 19124,
  [SMALL_STATE(549)] = 19135,
  [SMALL_STATE(550)] = 19148,
  [SMALL_STATE(551)] = 19159,
  [SMALL_STATE(552)] = 19170,
  [SMALL_STATE(553)] = 19181,
  [SMALL_STATE(554)] = 19194,
  [SMALL_STATE(555)] = 19207,
  [SMALL_STATE(556)] = 19218,
  [SMALL_STATE(557)] = 19231,
  [SMALL_STATE(558)] = 19242,
  [SMALL_STATE(559)] = 19253,
  [SMALL_STATE(560)] = 19264,
  [SMALL_STATE(561)] = 19273,
  [SMALL_STATE(562)] = 19284,
  [SMALL_STATE(563)] = 19295,
  [SMALL_STATE(564)] = 19306,
  [SMALL_STATE(565)] = 19317,
  [SMALL_STATE(566)] = 19328,
  [SMALL_STATE(567)] = 19337,
  [SMALL_STATE(568)] = 19350,
  [SMALL_STATE(569)] = 19361,
  [SMALL_STATE(570)] = 19372,
  [SMALL_STATE(571)] = 19383,
  [SMALL_STATE(572)] = 19391,
  [SMALL_STATE(573)] = 19401,
  [SMALL_STATE(574)] = 19411,
  [SMALL_STATE(575)] = 19419,
  [SMALL_STATE(576)] = 19429,
  [SMALL_STATE(577)] = 19439,
  [SMALL_STATE(578)] = 19449,
  [SMALL_STATE(579)] = 19459,
  [SMALL_STATE(580)] = 19469,
  [SMALL_STATE(581)] = 19479,
  [SMALL_STATE(582)] = 19489,
  [SMALL_STATE(583)] = 19499,
  [SMALL_STATE(584)] = 19509,
  [SMALL_STATE(585)] = 19517,
  [SMALL_STATE(586)] = 19527,
  [SMALL_STATE(587)] = 19535,
  [SMALL_STATE(588)] = 19543,
  [SMALL_STATE(589)] = 19553,
  [SMALL_STATE(590)] = 19561,
  [SMALL_STATE(591)] = 19571,
  [SMALL_STATE(592)] = 19581,
  [SMALL_STATE(593)] = 19591,
  [SMALL_STATE(594)] = 19601,
  [SMALL_STATE(595)] = 19611,
  [SMALL_STATE(596)] = 19621,
  [SMALL_STATE(597)] = 19629,
  [SMALL_STATE(598)] = 19639,
  [SMALL_STATE(599)] = 19649,
  [SMALL_STATE(600)] = 19657,
  [SMALL_STATE(601)] = 19667,
  [SMALL_STATE(602)] = 19677,
  [SMALL_STATE(603)] = 19687,
  [SMALL_STATE(604)] = 19694,
  [SMALL_STATE(605)] = 19701,
  [SMALL_STATE(606)] = 19708,
  [SMALL_STATE(607)] = 19715,
  [SMALL_STATE(608)] = 19722,
  [SMALL_STATE(609)] = 19729,
  [SMALL_STATE(610)] = 19736,
  [SMALL_STATE(611)] = 19743,
  [SMALL_STATE(612)] = 19750,
  [SMALL_STATE(613)] = 19757,
  [SMALL_STATE(614)] = 19764,
  [SMALL_STATE(615)] = 19771,
  [SMALL_STATE(616)] = 19778,
  [SMALL_STATE(617)] = 19785,
  [SMALL_STATE(618)] = 19792,
  [SMALL_STATE(619)] = 19799,
  [SMALL_STATE(620)] = 19806,
  [SMALL_STATE(621)] = 19813,
  [SMALL_STATE(622)] = 19820,
  [SMALL_STATE(623)] = 19827,
  [SMALL_STATE(624)] = 19834,
  [SMALL_STATE(625)] = 19841,
  [SMALL_STATE(626)] = 19848,
  [SMALL_STATE(627)] = 19855,
  [SMALL_STATE(628)] = 19862,
  [SMALL_STATE(629)] = 19869,
  [SMALL_STATE(630)] = 19876,
  [SMALL_STATE(631)] = 19883,
  [SMALL_STATE(632)] = 19890,
  [SMALL_STATE(633)] = 19897,
  [SMALL_STATE(634)] = 19904,
  [SMALL_STATE(635)] = 19911,
  [SMALL_STATE(636)] = 19918,
  [SMALL_STATE(637)] = 19925,
  [SMALL_STATE(638)] = 19932,
  [SMALL_STATE(639)] = 19939,
  [SMALL_STATE(640)] = 19946,
  [SMALL_STATE(641)] = 19953,
  [SMALL_STATE(642)] = 19960,
  [SMALL_STATE(643)] = 19967,
  [SMALL_STATE(644)] = 19974,
  [SMALL_STATE(645)] = 19981,
  [SMALL_STATE(646)] = 19988,
  [SMALL_STATE(647)] = 19995,
  [SMALL_STATE(648)] = 20002,
  [SMALL_STATE(649)] = 20009,
  [SMALL_STATE(650)] = 20016,
  [SMALL_STATE(651)] = 20023,
  [SMALL_STATE(652)] = 20030,
  [SMALL_STATE(653)] = 20037,
  [SMALL_STATE(654)] = 20044,
  [SMALL_STATE(655)] = 20051,
  [SMALL_STATE(656)] = 20058,
  [SMALL_STATE(657)] = 20065,
  [SMALL_STATE(658)] = 20072,
  [SMALL_STATE(659)] = 20079,
  [SMALL_STATE(660)] = 20086,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(157),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(31),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(96),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(162),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(338),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(205),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(202),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(201),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(572),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(44),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(445),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(28),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(49),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(61),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(552),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(651),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(69),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(200),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(317),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(615),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(284),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(97),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(352),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(399),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(80),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(78),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(578),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(79),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(77),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(317),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(604),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_expression_pun, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_pattern, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 5),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 5),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_expression, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 6),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(400),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(327),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(660),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(659),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(658),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(657),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(360),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(655),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(365),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(317),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(604),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(653),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(400),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(432),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(652),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2),
  [1012] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(46),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(416),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(416),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(416),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(416),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 2),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 2),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 5),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 3),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 3),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 6),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 7),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 1),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 4),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(106),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 3),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(431),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(426),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragement, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragement, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 1),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 1),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolator, 3),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolator, 3),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(429),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(50),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [1252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(310),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 4),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item, 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 5),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 6),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 3),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(441),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(580),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 5),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 8),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 1),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retuern_type, 2),
  [1441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retuern_type, 2),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3),
  [1451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 2),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 5),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 4),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 4),
  [1503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 4),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 7),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(595),
  [1556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [1574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6),
  [1594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 4),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1708] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_moonbit(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_lowercase_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
