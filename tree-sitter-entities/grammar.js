module.exports = grammar({

  name: 'entities',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    model: $ => repeat($.entity),

    entity: $ => seq(
      'entity',
      field('name', $.ID),
      optional(seq('extends', field('supertype', $.ID))),
      '{',
      repeat($.attribute),
      '}'
    ),

    attribute: $ => seq(
      field('type', $.attributetype),
      field('name', $.ID),
      ';'
    ),

    attributetype: $ => seq(
      $.elementtype,
      optional(field('array', seq('[', optional(field('length', $.INT)), ']')))
    ),

    elementtype: $ => choice(
      $.basictype,
      $.entitytype
    ),

    basictype: $ => choice(
      'string', 'int', 'boolean'
    ),

    entitytype: $ => $.ID,

    ID: $ => /[a-zA-Z0-9_]+/,
    INT: $ => /[0-9]+/,

    comment: $ => token(
      choice(seq('//', /.*/),
             seq('/*',
                 /[^*]*\*+([^/*][^*]*\*+)*/,
                 '/'
                )))
  }
});
