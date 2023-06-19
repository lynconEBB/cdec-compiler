%skeleton "lalr1.cc" /* -*- C++ -*- */
%require "3.0"
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
    #include "tokens.h"

    // Forward Declare
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
%token ADD MUL DIV INC DEC OR AND NOT EQU REL 
%token<int> ILIT 
%token<double> FLIT
%token<char> CHLIT 
%token<std::string> STRING
%token ID

%start all

%%
all: type

type:
      INT 
    | CHAR
    | FLOAT
    | DOUBLE
    | VOID
    | %empty
;

%%

void Cd::Parser::error(const std::string& message) {
    std::cout << "AAAA no" << driver.lineNumber  << std::endl;
    std::cout << message << std::endl;
}

void Cd::Parser::report_syntax_error (const context& ctx) const
{
    std::cout << "CURRR" << std::endl;
    yyclearin();
}