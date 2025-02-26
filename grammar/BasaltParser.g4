parser grammar BasaltParser;
options { tokenVocab=BasaltLexer; }





// PROGRAM

program
    : package definition* EOF
    ;

package
    : PACKAGE identifier SEMICOLON
    ;

definition
    : structDefinition
    | unionDefinition
    | functionDefinition
    ;





// SYMBOLS

arrow               : '->';
pointerDereference  : '#';
pointerSymbol       : '#';
sliceSymbol         : '#';
addressOf           : '&';
squareBracketsOpen  : '[';
squareBracketsClose : ']';
parenthesysOpen     : '(';
parenthesysClose    : ')';
curlyBracketsOpen   : '{';
curlyBracketsClose  : '}';
comma               : ',';
semicolon           : ';';
colon               : ':';
dot                 : '.';
plus                : '+';
minus               : '-';
star                : '*';
div                 : '/';
mod                 : '%';
pow                 : '^';
logicalAnd          : '&&';
logicalOr           : '||';
logicalXor          : '^^';
logicalNot          : '!';
logicalEqual        : '==';
logicalNotEqual     : '!=';
logicalGt           : '>';
logicalLt           : '<';
logicalGe           : '>=';
logicalLe           : '<=';
assign              : '=';
addeq               : '+=';
subeq               : '-=';
muleq               : '*=';
diveq               : '/=';
modeq               : '%=';
poweq               : '^=';

diamondOpen         : '<';
diamondClose        : '>';
varKeyword          : 'var';
constKeyword        : 'const';
structKeyword       : 'struct';
unionKeyword        : 'union';
funcKeyword         : 'func';
returnKeyword       : 'return';
breakKeyword        : 'break';
continueKeyword     : 'continue';
ifKeyword           : 'if';
elseKeyword         : 'else';
whileKeyword        : 'while';
untilKeyword        : 'until';
switchKeyword       : 'switch';
defaultKeyword      : 'default';

identifier          : ID;
typeName            : TYPENAME;
primitiveType       : BASETYPE;

intLiteral          : INT_LITERAL;
floatLiteral        : FLOAT_LITERAL;
boolLiteral         : BOOL_LITERAL;
charLiteral         : CHAR_LITERAL;
stringLiteral       : STRING_LITERAL;
nullKeyword         : 'null';






// DECLARATIONS

variableDeclaration
    : varKeyword identifier colon typeSignature assign expression semicolon
    | varKeyword identifier colon typeSignature semicolon
    ;
    
constDeclaration
    : constKeyword identifier colon typeSignature assign expression semicolon
    ; 





// STRUCTS

structDefinition
    : 
        structKeyword typeName formalTypeParametersSection? 
        curlyBracketsOpen structField* curlyBracketsClose
    ;

structField
    : identifier colon typeSignature semicolon 
    ;





// UNIONS

unionDefinition
    : 
        unionKeyword typeName formalTypeParametersSection? 
        EQ (typeSignature OR)+ typeSignature SEMICOLON
    ;





// FUNCTIONS 

functionDefinition
    : 
        funcKeyword identifier formalTypeParametersSection? 
        functionDefinitionArgumentsSection
        functionReturnTypeSection? 
        multilineScopedInstructionBlock
    ;
    
functionDefinitionArgumentsSection
    : parenthesysOpen functionDefinitionArgumentsList? parenthesysClose
    ;
    
functionDefinitionArgumentsList
    : identifier colon typeSignature (comma identifier colon typeSignature)* 
    ;
    
functionReturnTypeSection
    : colon typeSignature
    ;
    
functionCall
    : 
        identifier actualTypeParametersSection? 
        actualFunctionCallArgumentsSection
    ;
    
functionCallStatement
    : functionCall semicolon
    ;

actualFunctionCallArgumentsSection
    : parenthesysOpen expression (comma expression)* parenthesysClose 
    | parenthesysOpen parenthesysClose
    ;





// TYPES

typeSignature
    : primitiveType
    | customType
    | pointerType
    | sliceType
    | arrayType
    ;

customType
    : typeName actualTypeParametersSection?
    ;

pointerType
    : pointerSymbol typeSignature ;

sliceType
    : sliceSymbol typeSignature ;

arrayType
    : squareBracketsOpen intLiteral squareBracketsClose typeSignature ;

actualTypeParametersSection
    : diamondOpen typeSignature (comma typeSignature)* diamondClose
    ;

formalTypeParametersSection
    : diamondOpen typeName (comma typeName)* diamondClose
    ;






// EXPRESSIONS
            
expression
    : terminalExpression
    | infixOperator
    | dotMemberAccess
    ;

terminalExpression
    : squareBracketsAccess 
    | arrayLiteral
    | functionCall
    | parenthesysDelimitedExpression
    | prefixOperator
    | intLiteral
    | floatLiteral
    | charLiteral
    | stringLiteral
    | boolLiteral
    | identifier
    ;

infixOperator
    : terminalExpression (plus | minus | star | div | pow | mod) expression
    | terminalExpression (logicalAnd | logicalOr | logicalEqual | logicalNotEqual) expression
    | terminalExpression (logicalGt | logicalLt | logicalLe | logicalGe | logicalEqual | logicalNotEqual) expression
    ;

dotMemberAccess
    : terminalExpression (dot identifier)+
    ;

prefixOperator
    : (pointerDereference | logicalNot | plus | minus) expression
    ;

squareBracketsAccess
    : 
        (identifier | parenthesysDelimitedExpression | arrayLiteral | functionCall) 
        (squareBracketsOpen expression squareBracketsClose)+
    ;

arrayLiteral
    : 
        squareBracketsOpen typeSignature squareBracketsClose 
        curlyBracketsOpen expression (comma expression)* curlyBracketsClose 
    ;

parenthesysDelimitedExpression
    : parenthesysOpen expression parenthesysClose
    ;






// STATEMENTS

instructionBlock
    : multilineScopedInstructionBlock
    | statement
    ;

multilineScopedInstructionBlock
    : curlyBracketsOpen statement* curlyBracketsClose
    ;
    
assignment
    : expression assign expression semicolon
    ;

statement
    : functionCallStatement
    | assignment
    | variableDeclaration
    | constDeclaration
    | returnStatement
    | breakStatement
    | continueStatement
    | ifStatement
    | whileLoop
    | untilLoop
    ;
    
returnStatement
    : returnKeyword expression? semicolon
    ;
    
breakStatement
    : breakKeyword semicolon
    ;

continueStatement
    : continueKeyword semicolon
    ;

ifStatement
    : 
        ifKeyword parenthesysOpen expression parenthesysClose 
        instructionBlock ( elseKeyword instructionBlock )?
    ;
    
whileLoop
    : whileKeyword parenthesysOpen expression parenthesysClose instructionBlock
    ;

untilLoop
    : untilKeyword parenthesysOpen expression parenthesysClose instructionBlock
    ;
