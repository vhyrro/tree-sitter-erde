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

    rules: {
        program: $ => repeat($.statement),

        statement: $ => choice(
            $.variable_definition,
            $.function_invocation,
        ),

        identifier: _ => /[A-Za-z_][\w_]+/,

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

        table: $ => seq(
            "{",
            "}",
        ),

        lvalue: $ => choice(
            $.rvalue,
            $.identifier,
            $.function_invocation,
        ),

        bracketed_expression: $ => seq(
            "(",
            $.expression,
            ")",
        ),

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

        parameter_set: $ => seq(
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

        rvalue: $ => choice(
            $.boolean,
            $.number,
            $.nil,
            $.verbatim_string,
            $.string,
            $.block_string,
            $.arrow_function,
        ),

        variable_scope: $ => choice("local", "global"),
        variable_definition: $ => seq(
            $.variable_scope,
            alias($.identifier, $.variable_name),
            optional(
                seq(
                    "=",
                    field("value", $.expression),
                ),
            ),
        ),

        function_invocation: $ => seq(
            $.identifier,
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
                ),
            ),
            optional(","),
            ")",
        )
    }
});
