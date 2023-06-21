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
%token ADD MUL DIV INC DEC OR AND NOT EQU REL MINUS
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
%right NOT INC REFER MINUS
%left LPAREN RPAREN LBRACK RBRACK

%type<Node*> declaration declarations
%type<Node*> literal
%type<Node*> type

%start program

%%
program: 
    declarations 
    {
        Node* node = new Node("program");
        node->addChild($1);
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
        return nullptr;    
    }
;

type:
    INT 
    { 
        $$ = new Node("type", $1); 
    }
    | CHAR { $$ = new Node("type", $1); }  
    | FLOAT { $$ = new Node("type", $1); }
    | DOUBLE { $$ = new Node("type", $1); }
;

names:
    names COMMA variable
    {
        $$ = new Node("names");
        $$->addChild($1, $);
    }
    | names COMMA initialization
    {

    }
    | variable
    {

    }
    | initialization
    {

    }
;

variable:
    ID
    {
          
    }
    | ID array
    {

    }
;

array:
    LBRACK expression RBRACK
    {
        
    }
    | LBRACK ILIT RBRACK
    {

    }
;

initialization:
    scalar_initialization
    { }
    | vector_initialization
    { }
;

scalar_initialization:
    ID ASSIGN expression
    {

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
        Node* node = new Node();     
        node->type = TokenType::INT;
        node->value = std::get<int>($1);
        $$ = node;
    }
    | FLIT
    {
        Node* node = new Node();     
        node->type = TokenType::REAL;
        node->value = std::get<double>($1);
        $$ = node;
    }
    | CHLIT
    {
        Node* node = new Node();     
        node->type = TokenType::CHAR;
        node->value = std::get<char>($1);
        $$ = node;
    }
;

expression:
    expression ADD expression
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
		/* increment */
	}
	| INC ID
	{
		/* increment */
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
	}
	| expression REL expression
	{
	}
	| LPAREN expression RPAREN
	{
	}
	| variable
	{ 

	}
	| literal
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