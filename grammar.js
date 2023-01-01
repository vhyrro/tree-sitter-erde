let i = token.immediate;

module.exports = grammar({
    name: "erde",

    externals: $ => [
        $.string_escaped_char,
        $._block_string_content,
        $._block_string_end,
    ],

    extras: $ => [
        $.comment,
        /\s/,
    ],

    supertypes: $ => [
        $.rvalue,
        $.lvalue,
        $.expression,
        $.statement,
    ],

    conflicts: $ => [
        [$.tuple, $.bracketed_expression],
        [$.tuple, $.parameter_set],
    ],

    precedences: $ => [
        [$.block, $.table],
        [$.parameter, $.lvalue],
    ],

    rules: {
        program: $ => repeat($.statement),

        statement: $ => prec(1, choice(
            $.variable_definition,
            $.function_invocation,
            $.function_definition,
            $.if_statement,
        )),

        identifier: _ => /[A-Za-z_][\w_]*/,

        accessor: $ => seq(
            $.identifier,
            repeat1(
                seq(
                    ".",
                    $.identifier,
                ),
            ),
        ),

        comment: _ => seq(
            "--",
            i(/[^\n]*/),
        ),

        boolean: $ => choice(
            "true",
            "false",
        ),

        number: $ => /\d+/,
        nil: _ => "nil",

        verbatim_string: $ => seq(
            "'",
            alias(repeat(
                choice(
                    $.string_escaped_char,
                    /[^\n'\\]+/,
                ),
            ), $.string_content),
            i("'"),
        ),

        string_interpolation: $ => seq(
            "{",
            $.expression,
            i("}"),
        ),

        string: $ => seq(
            '"',
            alias(repeat(
                choice(
                    $.string_escaped_char,
                    $.string_interpolation,
                    /[^\n"\\{]+/,
                ),
            ), $.string_content),
            i('"'),
        ),

        // TODO: Implement hyperblock strings [=[like this]=]
        block_string: $ => seq(
            "[[",
            alias(repeat(
                choice(
                    $.string_escaped_char,
                    $.string_interpolation,
                    $._block_string_content,
                ),
            ), $.string_content),
            $._block_string_end,
        ),

        table_entry: $ => choice(
            seq(
                choice(
                    seq(
                        "[",
                        $.expression,
                        "]",
                    ),
                    $.identifier,
                ),
                "=",
                $.expression,
            ),
            $.expression,
        ),

        table: $ => seq(
            "{",
            optional(
                seq(
                    $.table_entry,
                    repeat(
                        seq(
                            ",",
                            $.table_entry,
                        ),
                    ),
                    optional(","),
                ),
            ),
            "}",
        ),

        lvalue: $ => choice(
            $.rvalue,
            $.identifier,
            $.accessor,
            $.function_invocation,
        ),

        bracketed_expression: $ => prec.dynamic(1, seq(
            "(",
            $.expression,
            ")",
        )),

        tuple: $ => seq(
            "(",
            $.expression,
            repeat(
                seq(
                    ",",
                    $.expression,
                ),
            ),
            ")",
        ),

        parameter: $ => seq(
            $.identifier,
            optional(
                seq(
                    "=",
                    field("default_value", $.expression),
                ),
            ),
        ),

        parameter_set: $ => seq(
            "(",
            optional(
                seq(
                    $.parameter,
                    repeat(
                        seq(
                            ",",
                            $.parameter,
                        ),
                    ),
                ),
            ),
            ")",
        ),

        block: $ => seq(
            "{",
            repeat($.statement),
            "}",
        ),

        arrow_function: $ => seq(
            choice(
                $.identifier,
                $.parameter_set,
            ),
            choice(
                "->",
                "=>",
            ),
            choice(
                $.block,
                $.expression,
            ),
        ),

        expression: $ => choice(
            $.lvalue,
            $.addition,
            $.subtraction,
            $.division,
            $.multiplication,
            $.bracketed_expression,
            $.tuple,
            $.arrow_function,
            $.comparison,
            $.negation,
        ),

        addition: $ => prec.right(1, seq(
            $.expression,
            "+",
            $.expression,
        )),

        subtraction: $ => prec.right(1, seq(
            $.expression,
            "-",
            $.expression,
        )),

        multiplication: $ => prec.right(1, seq(
            $.expression,
            "*",
            $.expression,
        )),

        division: $ => prec.right(1, seq(
            $.expression,
            choice(
                "/",
                "//",
            ),
            $.expression,
        )),

        comparison: $ => prec.right(1, seq(
            $.expression,
            choice(
                "==",
                "!=",
                "<",
                ">",
                "<=",
                ">=",
            ),
            $.expression,
        )),

        negation: $ => seq(
            "!",
            $.expression,
        ),

        rvalue: $ => choice(
            $.boolean,
            $.number,
            $.nil,
            $.verbatim_string,
            $.string,
            $.block_string,
            $.table,
        ),

        scope: $ => choice("local", "global", "module"),
        variable_definition: $ => seq(
            $.scope,
            alias($.identifier, $.variable_name),
            optional(
                seq(
                    "=",
                    field("value", $.expression),
                ),
            ),
        ),

        function_invocation: $ => prec(1, seq(
            choice(
                $.identifier,
                $.accessor,
                $.bracketed_expression,
            ),
            "(",
            optional(
                seq(
                    field("parameter", $.expression),
                    repeat(
                        seq(
                            ",",
                            field("parameter", $.expression),
                        ),
                    ),
                    optional(","),
                ),
            ),
            ")",
        )),

        function_definition: $ => seq(
            optional($.scope),
            "function",
            choice(
                $.identifier,
                $.accessor,
            ),
            $.parameter_set,
            $.block,
        ),

        if_statement: $ => seq(
            "if",
            $.expression,
            $.block,
        ),
    }
});
