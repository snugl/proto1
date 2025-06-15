/**
 * @file Parser for the Snug programming language
 * @author S1monr3dst0ne07
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-nocheck

module.exports = grammar({
  name: "snug",

  rules: {
    source_file: $ => repeat($.unit),
    unit: $ => choice(
      $.import,
      $.sequence,
      $.routine,
      $.comment
    ),

    comment: $ => /".+?\n/,

    import: $ => seq('use', $.string, $.eos),

    sequence: $ => seq(
      'seq', 
      $.seq_name, 
      $.open_scope, 
      repeat(seq($.seq_entry, optional(','))),
      $.close_scope,
    ),

    routine: $ => seq(
      'rout',
      $.rout_name,
      optional($.param_interface),
      $.open_scope,
      repeat($.statement),
      $.close_scope,
    ),

    param_interface: $ => seq(
      '(', repeat($.param_def), ')',
    ),

    param_def: $ => seq(
      choice($.key_in, $.key_out),
      $.param_name,
      $.eos,
    ),

    param_name: $ => $.iden,
    rout_name:  $ => $.iden,
    seq_name:   $ => /[A-Z][A-Za-z:]*/,
    seq_entry:  $ => $.iden,



    statement: $ => choice(seq(
      choice(
        $.put,
        $.debug,
        $.trans,
        $.pers,
        $.sub,
        $.lab,
        $.jump,
        $.write,
      ), $.eos, ),
      $.comment
    ),

    put:   $ => seq('put', $.expr, '=', $.expr),
    debug: $ => seq('debug', choice($.expr, $.debug_string)),
    trans: $ => seq('trans', $.expr, $.bind, $.expr),
    pers:  $ => seq('pers', $.expr, $.bind, $.expr),
    sub:   $ => seq(
      'sub', 
      $.rout_name, 
      '(',
      repeat(seq(
        $.param_name, 
        $.bind, 
        $.expr, 
        optional(',')
      )),
      ')'
    ),
    lab:  $ => seq('lab',  optional($.label)),
    jump: $ => seq('jump', optional($.label), 
      optional(seq($.bind, $.expr))
    ),
    write: $ => seq('write', $.expr),

    expr: $ => choice(
      field("content", $.number),
      field("content", $.variable),
      field("content", $.string),
      $.binary,
      $.paran,
    ),
    binary: $ => prec.left(seq(
      field("left", $.expr),
      field("op", $.op),
      field("right", $.expr)
    )),
    paran: $ => seq('(', $.expr, ')'),

    op: $ => choice('+', '-', '*', '>', '<', '.'),

    label: $ => $.iden,
    variable: $ => choice($.seq_name, $.iden),

    debug_string: $ => seq(
      '\'', 
      repeat(choice(
        $.debug_literal,
        $.debug_variable
      )),
      '\''
    ),
    debug_literal: $ => /[^'{}]+/,
    debug_variable: $ => seq('{', $.variable, '}'), 

    key_in:  $ => 'in',
    key_out: $ => 'out',
    eos: $ => ';',
    bind: $ => '~',
    open_scope:  $ => "{",
    close_scope: $ => "}",
    string: $ => seq('\'', /[^']*/, '\''),
    iden: $ => /[A-Za-z:_]+/,
    number: $ => /\d+/,
  }
});
