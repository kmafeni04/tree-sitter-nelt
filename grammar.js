/**
 * @file tree-sitter parser for the nelt templating language
 * @author Leonard Mafeni <komemafeni944@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "nelt",

  rules: {
    template: ($) => repeat(choice($.nelt_tags, $.content)),

    content: () => prec.right(repeat1(choice(/[^\{]/, /\{[^\#\%]/, "#", "# "))),

    nelt_tags: ($) => choice($.nelt_expr, $.nelt_val),

    nelt_expr: ($) =>
      seq("{#", alias(repeat(choice(/[^#]+/, "#")), $.expr), "#}"),

    nelt_val: ($) =>
      choice(
        seq("{{", alias(repeat(choice(/[^}]+/, "}")), $.expr), "}}"),
        seq("{{-", alias(repeat(choice(/[^}]+/, "}")), $.expr), "}}"),
      ),
  },
});
