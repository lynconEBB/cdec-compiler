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
%define parse.error custom

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

%start program

%%
program: 
    declarations
;

declarations:
    declarations declaration
    {

    }
    | declaration
    {

    }
;

declaration:
    type names SEMI 
    {

    }
;

type:
      INT 
    | CHAR
    | FLOAT
    | DOUBLE
    | VOID
;

names:
    names COMMA variable
    {

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
    ID ASSIGN literal
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
    { }
    | FLIT
    { }
    | CHLIT
    { }
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
	| ADD literal %prec MINUS
	{
	}
;
%%

void Cd::Parser::error(const std::string& message) {
    std::cout << "AAAA no" << driver.lineNumber  << std::endl;
    std::cout << message << std::endl;
}

void Cd::Parser::report_syntax_error (const context& ctx) const
{
    std::cout << "CURRR" << std::endl;
}