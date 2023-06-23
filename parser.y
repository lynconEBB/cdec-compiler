%skeleton "lalr1.cc" /* -*- C++ -*- */
%require "3.2"
%defines
%define api.parser.class { Parser }
%define api.namespace { Cd }

%define api.token.constructor
%define api.value.type variant
%define parse.assert

// parser.h
%code requires
{
    #include <iostream>
    #include <string>
    #include <vector>
    #include <variant>
    #include "tree.h"

    // Forward Declare
    struct SymbolInfo;
    enum class TokenType;

    namespace Cd {
        class Scanner;
        class Driver;
    }
}

// parser.cpp
%code top
{
    #include <iostream>
    #include "scanner.h"
    #include "parser.h"
    #include "driver.h"

    static Cd::Parser::symbol_type yylex(Cd::Scanner& scanner) {
        return scanner.getNextToken();
    }
}

%lex-param { Cd::Scanner& scanner }
%parse-param { Cd::Scanner& scanner }
%parse-param { Cd::Driver& driver }
%define parse.trace
%define parse.error verbose

%token<TokenType> CHAR INT FLOAT DOUBLE VOID 
%token COMMA LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE SEMI ASSIGN REFER
%token IF ELSE WHILE FOR CONTINUE BREAK RETURN
%token ADD SUB MUL DIV INC DEC OR AND NOT EQU REL MINUS
%token<std::variant<int,double,char,std::string>> ILIT FLIT CHLIT STRING
%token<SymbolInfo*> ID

%left COMMA
%right ASSIGN
%left OR
%left AND
%left EQU
%left REL
%left ADD
%left MUL DIV
%right NOT INC REFER MINUS DEC
%left LPAREN RPAREN LBRACK RBRACK

%type<Node*> declaration declarations statement assigment
%type<Node*> literal array expression if_statement while_statement else_if optional_else
%type<Node*> type names variable initialization scalar_initialization vector_initialization

%start program

%%
program: 
    declarations statements
    {
        Node* node = new Node("program");
        node->addChild($1);
        node->addChild($2);
        driver.printAST(node);
    }
;

declarations:
    declarations declaration
    {
        Node* node = new Node("declarations");
        node->addChild($1);
        node->addChild($2);
        $$ = node;
    }
    | declaration
    {
        Node* node = new Node("declarations");
        node->addChild($1);
        $$ = node;
    }
;

declaration:
    type names SEMI 
    {
        $$ = new Node("declaration");
        $$->type = $1->type;

    }
    | error SEMI
    {
        // TODO: TEM Q CORRIGIR(retornar um variant com erro?)
        $$ = new Node("erro");
    }
;

type:
    INT 
    { 
        $$ = new Node("type", $1); 
        $$.addChild(new Node("INT", $1));
    }
    | CHAR 
    { 
        $$ = new Node("type", $1); 
        $$.addChild(new Node("CHAR", $1));
    }  
    | FLOAT 
    {
        $$ = new Node("type", $1); 
        $$.addChild(new Node("FLOAT", $1));
    }
    | DOUBLE 
    { 
        $$ = new Node("type", $1); 
        $$.addChild(new Node("DOUBLE", $1));
    }
;

names:
    names COMMA variable
    {
        $$ = new Node("names");
        $$->addChild($1);
        $$->addChild(new Node("COMMA"));
        $$->addChild($2);
    }
    | names COMMA initialization
    {
        $$ = new Node("names");
        $$->addChild($1);
        $$->addChild(new Node("COMMA"));
        $$->addChild($2);
    }
    | variable
    {
        $$ = new Node("names");
        $$->addChild($1);
    }
    | initialization
    {
        $$ = new Node("names");
        $$->addChild($1);
    }
;

variable:
    ID
    {
        $$ = new Node("variable");

    }
    | ID array
    {
        $$ = new Node("variable");
    }
;

array:
    LBRACK expression RBRACK
    {
        $$ = new Node("array",TokenType::ARRAY);
        $$.addCHild(new Node("LBRACK"));
        $$.addCHild($2);
        $$.addCHild(new Node("RBRACK"));
    }
    | LBRACK ILIT RBRACK
    {
        $$ = new Node("array",TokenType::ARRAY);
        $$.addCHild(new Node("LBRACK"));
        $$.addCHild(new Node("ILIT", std::get<int>($1)));
        $$.addCHild(new Node("RBRACK"));
    }
;

initialization:
    scalar_initialization
    { 
        $$ = new Node("initialization");
        $$->add($1);
    }
    | vector_initialization
    { 
        $$ = new Node("initialization");
        $$->add($1);
    }
;

scalar_initialization:
    ID ASSIGN expression
    {
        $$ = new Node("scalar_initialization", ); 
        $$->addChild(new Node("ID", $1 ))
    }
;

vector_initialization:
    ID array ASSIGN LBRACE values RBRACE
    {

    }
;

values:
    values COMMA literal
    {

    }
    | literal
    {

    }
;

literal:
    ILIT
    { 
        Node* node = new Node("ILIT");     
        node->type = TokenType::INT;
        node->value = std::get<int>($1);
        $$ = node;
    }
    | FLIT
    {
        Node* node = new Node("FLIT");     
        node->type = TokenType::REAL;
        node->value = std::get<double>($1);
        $$ = node;
    }
    | CHLIT
    {
        Node* node = new Node("CHLIT");     
        node->type = TokenType::CHAR;
        node->value = std::get<char>($1);
        $$ = node;
    }
;

expression:
    expression ADD expression
	{ 
        
	}
    | expression SUB expression
	{ 
        
	}
	| expression MUL expression
	{

	}
	| expression DIV expression
	{
        
	}
	| ID INC
	{
        $$ = new Node("expression", $1->type, $1->value);
        $$->addChild($2);
        $$->addChild(new Node("INC"));
	}
	| INC ID
	{
        $$ = new Node("expression", $2->type, $2->value);
        $$->addChild(new Node("INC"));
        $$->addChild($2);
	}
	| ID DEC
	{
        $$ = new Node("expression", $1->type, $1->value);
        $$->addChild($2);
        $$->addChild(new Node("DEC"));
	}
	| DEC ID
	{
        $$ = new Node("expression", $2->type, $2->value);
        $$->addChild(new Node("DEC"));
        $$->addChild($2);
	}
	| expression OR expression
	{
	}
	| expression AND expression
	{
	}
	| NOT expression
	{
	}
	| expression EQU expression
	{
        $$ = new Node("expression", $2->type, $2->value);
        $$->addChild(new Node("LPAREN"));
        $$->addChild($2);
        $$->addChild(new Node("RPAREN"));
	}
	| expression REL expression
	{
        $$ = new Node("expression", $2->type, $2->value);
        $$->addChild(new Node("LPAREN"));
        $$->addChild($2);
        $$->addChild(new Node("RPAREN"));
	}
	| LPAREN expression RPAREN
	{
        $$ = new Node("expression", $2->type, $2->value);
        $$->addChild(new Node("LPAREN"));
        $$->addChild($2);
        $$->addChild(new Node("RPAREN"));
	}
	| variable
	{ 
        $$ = new Node("expression", $1->type, $1->value);
	}
	| literal
	{
        $$ = new Node("expression", $1->type, $1->value);
	}
;

statements:
    statements statement
    {

    
    }
    | statement
    {

    }
;

if_statement:
	IF LPAREN expression RPAREN tail else_if optional_else
	{
		$$ = new_ast_if_node($3, $5, elsifs, elseif_count, $7);
		elseif_count = 0;
		elsifs = NULL;
	}
	| IF LPAREN expression RPAREN tail optional_else
	{
		$$ = new_ast_if_node($3, $5, NULL, 0, $6);
	}
;

else_if:
	else_if ELSE IF LPAREN expression RPAREN tail
	{
		AST_Node *temp = new_ast_elsif_node($5, $7);
		add_elseif(temp);
	}
	| ELSE IF LPAREN expression RPAREN tail
	{
		AST_Node *temp = new_ast_elsif_node($4, $6);
		add_elseif(temp);
	}
;

optional_else:
	ELSE tail
	{
		/* else exists */
		$$ = $2;
	}
	| /* empty */
	{
		/* no else */
		$$ = NULL;
	}
;

for_statement: 
    FOR LPAREN assigment SEMI expression SEMI ID INC RPAREN tail
    {

    }
;

while_statement: 
    WHILE LPAREN expression RPAREN tail
    {

    }
;

tail: 
    LBRACE statements RBRACE
    { 
        
    }
;


assigment: 
    variable ASSIGN expression
    {

    }
;

statement:
    if_statement
	{ 
		$$ = $1; /* just pass information */
	}
	| for_statement
	{ 
		$$ = $1; /* just pass information */
	}
	| while_statement
	{
		$$ = $1; /* just pass information */
	}
	| assigment SEMI
	{
		$$ = $1; /* just pass information */
	}
	| CONTINUE SEMI
	{ 
		$$ = new_ast_simple_node(0);
	}
	| BREAK SEMI
	{ 
		$$ = new_ast_simple_node(1);
	}
	| ID INC SEMI
	{
		/* increment */
		if($2.ival == INC){
			$$ = new_ast_incr_node($1, 0, 0);
		}
		else{
			$$ = new_ast_incr_node($1, 1, 0);
		}
	}
	| INC ID SEMI
	{
		/* increment */
		if($1.ival == INC){
			$$ = new_ast_incr_node($2, 0, 1);
		}
		else{
			$$ = new_ast_incr_node($2, 1, 1);
		}
	}
    | error 
    {
        
    }
;

%%

void Cd::Parser::error(const std::string& message) {
    std::cout << "AAAA no" << driver.lineNumber  << std::endl;
    std::cout << message << std::endl;
}

//void Cd::Parser::report_syntax_error (const context& ctx) const
//{
//    std::cout << "CURRR" << std::endl;
//}