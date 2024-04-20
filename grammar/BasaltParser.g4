parser grammar BasaltParser;
options { tokenVocab=BasaltLexer; }





// PROGRAM

program
    : definition* EOF
    ;

definition
    : structDefinition
    | unionDefinition
    | functionDefinition
    | variableDeclaration
    | constDeclaration
    ;




// DECLARATIONS

variableDeclaration
    : VAR ID ':' typeSignature '=' expression ';'
    | VAR ID ':' typeSignature ';'
    ;
    
constDeclaration
    : CONST ID ':' typeSignature '=' expression ';'
    ; 





// STRUCTS

structDefinition
    : STRUCT TYPENAME formalTypeParametersSection? 
      '{' structField* '}'
    ;

structField
    : ID ':' typeSignature ';' 
    ;





// UNIONS

unionDefinition
    : UNION TYPENAME formalTypeParametersSection? 
      '{' typeSignature* '}'
    ;





// FUNCTIONS 

functionDefinition
    : FUNC ID formalTypeParametersSection? 
      functionDefinitionArgumentsSection
      functionReturnTypeSection? 
      multilineScopedInstructionBlock
    ;
    
functionDefinitionArgumentsSection
    : '(' functionDefinition_arguments_list? ')'
    ;
    
functionDefinition_arguments_list
    : ID ':' typeSignature (',' ID ':' typeSignature)* 
    ;
    
functionReturnTypeSection
    : ':' typeSignature
    ;
    
functionCall
    : ID actualTypeParametersSection? 
      actualFunctionCallArgumentsSection
    ;
    
functionCallStatement
    : functionCall ';'
    ;

actualFunctionCallArgumentsSection
    : '(' expression (',' expression)* ')' 
    | '(' ')'
    ;





// TYPES

typeSignature
    : BASETYPE
    | TYPENAME actualTypeParametersSection?
    | pointerType
    | sliceType
    | arrayType
    ;

pointerType
    : '#' typeSignature ;

sliceType
    : '$' typeSignature ;

arrayType
    : '[' INT_LITERAL ']' typeSignature ;

actualTypeParametersSection
    : '<' typeSignature (',' typeSignature)* '>'
    ;

formalTypeParametersSection
    : '<' TYPENAME (',' TYPENAME)* '>'
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
    | INT_LITERAL
    | FLOAT_LITERAL
    | CHAR_LITERAL
    | STRING_LITERAL
    | BOOL_LITERAL
    | ID
    ;

infixOperator
    : terminalExpression (PLUS | MINUS | MUL | DIV | POW | MOD) expression
    | terminalExpression (AND | OR | EQUAL | NOTEQUAL) expression
    | terminalExpression (GT | LT | LE | GE | EQUAL | NOTEQUAL) expression
    ;

dotMemberAccess
    : terminalExpression ('.' ID)+
    ;

prefixOperator
    : ('#' | NOT | PLUS | MINUS | INC | DEC) expression
    ;

squareBracketsAccess
    : (ID | parenthesysDelimitedExpression | arrayLiteral | functionCall) ('[' expression ']')+
    ;

arrayLiteral
    : '[' typeSignature ']' '{' expression (',' expression)* '}' ;

parenthesysDelimitedExpression
    : '(' expression ')'
    ;






// STATEMENTS

multilineScopedInstructionBlock
    : '{' statement* '}'
    ;
    
assignment
    : expression '=' expression ';'
    | expression (ADDEQ | SUBEQ | MULEQ | DIVEQ) expression ';'
    | expression (OREQ | POWEQ | MODEQ | ANDEQ) expression ';'
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
    : RETURN expression? ';'
    ;
    
breakStatement
    : BREAK ';'
    ;

continueStatement
    : CONTINUE ';'
    ;
    
instructionBlock
    : multilineScopedInstructionBlock
    | statement
    ;

ifStatement
    : IF '(' expression ')' instructionBlock 'else' instructionBlock
    | IF '(' expression ')' instructionBlock
    ;
    
whileLoop
    : WHILE '(' expression ')' instructionBlock
    ;

untilLoop
    : UNTIL '(' expression ')' instructionBlock
    ;

switchStatement
    : SWITCH '(' expression ')' '{' switchCase* '}'
    ;

switchCase
    : DEFAULT instructionBlock
    | ID ':' typeSignature instructionBlock
    ;
