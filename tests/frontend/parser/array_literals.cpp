
#include <gtest/gtest.h>
#include "frontend/parser.hpp"
#include "errors/internal_errors.hpp"
#include "errors/parsing_errors.hpp"
#include "syntax/primitive_types.hpp"

TEST(Frontend, Parse_Array_Literal_Without_Explicit_Size) {
    std::vector<Token> tokens = {
        { "[",   "test.basalt",  1, 1, 1, Token::Type::symbol  },
        { "]",   "test.basalt",  1, 2, 2, Token::Type::symbol  },
        { "Ent", "test.basalt",  1, 3, 3, Token::Type::type    },
        { "{",   "test.basalt",  1, 4, 5, Token::Type::symbol  },
        { "}",   "test.basalt",  1, 5, 6, Token::Type::symbol  },
    };
    Parser parser = Parser({ "inline-tests.basalt", tokens });
    Expression expr = parser.parse_expression();
    ASSERT_TRUE(expr.is<ArrayLiteral>());
    EXPECT_FALSE(expr.get<ArrayLiteral>().array_length.has_value());
    EXPECT_TRUE(expr.get<ArrayLiteral>().elements.empty());
    ASSERT_TRUE(expr.get<ArrayLiteral>().stored_type.is<CustomType>());
    EXPECT_EQ(expr.get<ArrayLiteral>().stored_type.get<CustomType>().type_name, "Ent");
    EXPECT_TRUE(expr.get<ArrayLiteral>().stored_type.get<CustomType>().type_parameters.empty());
}

TEST(Frontend, Parse_Array_Literal_Of_Generic_StoredType_Without_Explicit_Size) {
    std::vector<Token> tokens = {
        { "[",    "test.basalt",  1, 1, 1, Token::Type::symbol  },
        { "]",    "test.basalt",  1, 2, 2, Token::Type::symbol  },
        { "Pair", "test.basalt",  1, 3, 3, Token::Type::type    },
        { "<",    "test.basalt",  1, 4, 5, Token::Type::symbol  },
        { int_type,  "test.basalt",  1, 3, 3, Token::Type::type    },
        { ",",    "test.basalt",  1, 4, 5, Token::Type::symbol  },
        { int_type,  "test.basalt",  1, 3, 3, Token::Type::type    },
        { ">",    "test.basalt",  1, 5, 6, Token::Type::symbol  },
        { "{",    "test.basalt",  1, 4, 5, Token::Type::symbol  },
        { "}",    "test.basalt",  1, 5, 6, Token::Type::symbol  },
    };
    Parser parser = Parser({ "inline-tests.basalt", tokens });
    Expression expr = parser.parse_expression();
    ASSERT_TRUE(expr.is<ArrayLiteral>());
    EXPECT_FALSE(expr.get<ArrayLiteral>().array_length.has_value());
    EXPECT_TRUE(expr.get<ArrayLiteral>().elements.empty());
    ASSERT_TRUE(expr.get<ArrayLiteral>().stored_type.is<CustomType>());
    EXPECT_EQ(expr.get<ArrayLiteral>().stored_type.get<CustomType>().type_name, "Pair");
    EXPECT_EQ(expr.get<ArrayLiteral>().stored_type.get<CustomType>().type_parameters.size(), 2);
}

TEST(Frontend, Parse_Nested_Array_Literals_Without_Explicit_Size_And_Incorrect_Type) {
    std::vector<Token> tokens = {
        { "[",   "test.basalt",  1,  1,  1, Token::Type::symbol  },
        { "]",   "test.basalt",  1,  2,  2, Token::Type::symbol  },
        { int_type, "test.basalt",  1,  3,  3, Token::Type::type    },
        { "{",   "test.basalt",  1,  4,  5, Token::Type::symbol  },

        { "[",   "test.basalt",  1,  5,  6, Token::Type::symbol  },
        { "]",   "test.basalt",  1,  6,  7, Token::Type::symbol  },
        { int_type, "test.basalt",  1,  7,  8, Token::Type::type    },
        { "{",   "test.basalt",  1,  8, 11, Token::Type::symbol  },
        { "}",   "test.basalt",  1,  8, 11, Token::Type::symbol  },
        
        { ",",   "test.basalt",  1,  9, 12, Token::Type::symbol  },
        { "[",   "test.basalt",  1, 10, 13, Token::Type::symbol  },
        { "]",   "test.basalt",  1, 11, 14, Token::Type::symbol  },
        { int_type, "test.basalt",  1, 12, 17, Token::Type::type    },
        { "{",   "test.basalt",  1, 13, 18, Token::Type::symbol  },
        { "}",   "test.basalt",  1, 14, 19, Token::Type::symbol  },
        
        { "}",   "test.basalt",  1, 15, 20, Token::Type::symbol  },
    };
    Parser parser = Parser({ "inline-tests.basalt", tokens });
    Expression expr = parser.parse_expression();
    ASSERT_TRUE(expr.is<ArrayLiteral>());
    EXPECT_FALSE(expr.get<ArrayLiteral>().array_length.has_value());
    EXPECT_EQ(expr.get<ArrayLiteral>().elements.size(), 2);
    ASSERT_TRUE(expr.get<ArrayLiteral>().stored_type.is<PrimitiveType>());
    EXPECT_EQ(expr.get<ArrayLiteral>().stored_type.get<PrimitiveType>().type_name, int_type);

    for (Expression inner_array : expr.get<ArrayLiteral>().elements) {
        ASSERT_TRUE(inner_array.is<ArrayLiteral>());
        EXPECT_FALSE(inner_array.get<ArrayLiteral>().array_length.has_value());
        EXPECT_TRUE(inner_array.get<ArrayLiteral>().elements.empty());
        ASSERT_TRUE(inner_array.get<ArrayLiteral>().stored_type.is<PrimitiveType>());
        EXPECT_EQ(inner_array.get<ArrayLiteral>().stored_type.get<PrimitiveType>().type_name, int_type);
    }
}

TEST(Frontend, Parse_Nested_Array_Literals_With_Explicit_Size_And_Correct_Type) {
    std::vector<Token> tokens = {
        { "[",   "test.basalt",  1,  1,  1, Token::Type::symbol  },
        { "2",   "test.basalt",  1,  1,  1, Token::Type::integer_literal  },
        { "]",   "test.basalt",  1,  2,  2, Token::Type::symbol  },
        { "[",   "test.basalt",  1,  1,  1, Token::Type::symbol  },
        { "0",   "test.basalt",  1,  1,  1, Token::Type::integer_literal  },
        { "]",   "test.basalt",  1,  2,  2, Token::Type::symbol  },
        { int_type, "test.basalt",  1,  3,  3, Token::Type::type    },
        { "{",   "test.basalt",  1,  4,  5, Token::Type::symbol  },
        { "[",   "test.basalt",  1,  5,  6, Token::Type::symbol  },
        { "]",   "test.basalt",  1,  6,  7, Token::Type::symbol  },
        { int_type, "test.basalt",  1,  7,  8, Token::Type::type    },
        { "{",   "test.basalt",  1,  8, 11, Token::Type::symbol  },
        { "}",   "test.basalt",  1,  8, 11, Token::Type::symbol  },
        { ",",   "test.basalt",  1,  9, 12, Token::Type::symbol  },
        { "[",   "test.basalt",  1, 10, 13, Token::Type::symbol  },
        { "]",   "test.basalt",  1, 11, 14, Token::Type::symbol  },
        { int_type, "test.basalt",  1, 12, 17, Token::Type::type    },
        { "{",   "test.basalt",  1, 13, 18, Token::Type::symbol  },
        { "}",   "test.basalt",  1, 14, 19, Token::Type::symbol  },
        { "}",   "test.basalt",  1, 15, 20, Token::Type::symbol  },
    };
    Parser parser = Parser({ "inline-tests.basalt", tokens });
    Expression expr = parser.parse_expression();
    ASSERT_TRUE(expr.is<ArrayLiteral>());
    EXPECT_EQ(expr.get<ArrayLiteral>().array_length, 2);
    EXPECT_EQ(expr.get<ArrayLiteral>().elements.size(), 2);
    ASSERT_TRUE(expr.get<ArrayLiteral>().stored_type.is<ArrayType>());

    for (Expression inner_array : expr.get<ArrayLiteral>().elements) {
        ASSERT_TRUE(inner_array.is<ArrayLiteral>());
        EXPECT_FALSE(inner_array.get<ArrayLiteral>().array_length.has_value());
        EXPECT_TRUE(inner_array.get<ArrayLiteral>().elements.empty());
        ASSERT_TRUE(inner_array.get<ArrayLiteral>().stored_type.is<PrimitiveType>());
        EXPECT_EQ(inner_array.get<ArrayLiteral>().stored_type.get<PrimitiveType>().type_name, int_type);
    }
}

TEST(Frontend, Parse_Square_Bracket_Access_On_Array_Literal) {
    std::vector<Token> tokens = {
        { "[",   "test.basalt",  1,  1,  1, Token::Type::symbol  },
        { "]",   "test.basalt",  1,  2,  2, Token::Type::symbol  },
        { int_type, "test.basalt",  1,  3,  3, Token::Type::type    },
        { "{",   "test.basalt",  1,  4,  6, Token::Type::symbol  },
        { "}",   "test.basalt",  1,  5,  7, Token::Type::symbol  },
        { "[",   "test.basalt",  1,  6,  8, Token::Type::symbol  },
        { "2",   "test.basalt",  1,  6,  9, Token::Type::integer_literal  },
        { "]",   "test.basalt",  1,  7, 10, Token::Type::symbol  },
    };
    Parser parser = Parser({ "inline-tests.basalt", tokens });
    Expression expr = parser.parse_expression();

    ASSERT_TRUE(expr.is<SquareBracketsAccess>());
    
    Expression array_literal = expr.get<SquareBracketsAccess>().storage;
    Expression index = expr.get<SquareBracketsAccess>().index;

    ASSERT_TRUE(array_literal.is<ArrayLiteral>());
    EXPECT_FALSE(array_literal.get<ArrayLiteral>().array_length.has_value());
    EXPECT_TRUE(array_literal.get<ArrayLiteral>().elements.empty());
    ASSERT_TRUE(array_literal.get<ArrayLiteral>().stored_type.is<PrimitiveType>());
    EXPECT_EQ(array_literal.get<ArrayLiteral>().stored_type.get<PrimitiveType>().type_name, int_type);

    ASSERT_TRUE(index.is<IntLiteral>());
    EXPECT_EQ(index.get<IntLiteral>().value, 2);
}