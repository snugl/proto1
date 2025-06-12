/**
 * @file Parser for the Snug programming language
 * @author S1monr3dst0ne07
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "snug",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
