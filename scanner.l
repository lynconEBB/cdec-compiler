%option noyywrap
%option c++
%option yyclass="Scanner"
%option prefix="Cd_"

%{
	#include <iostream>
	#include <cstdio>
	#include "scanner.h"
	#include "symTable.h"
	#include "driver.h"
	#include "parser.h"

	#define ERROR(MESSAGE) std::cout << "[ERROR]> Cadeia: " << yytext\
						   << " - " << MESSAGE << " na linha " << m_driver.lineNumber << '\n'
%}

%x MULTI_COMMENT

alpha 			[a-zA-Z]
digit 			[0-9]
alnum 			{alpha}|{digit}
printable		[ -~]
whitespace  	[ \t\r\f]
invalid       	[%$#@¨`\^?:]

ID 				{alpha}+{alnum}*
INVAL_ID    	({invalid}|{alnum})+

ILIT			-?{digit}{1,9}
INVAL_ILIT_1 	-?{digit}{9,}
INVAL_ILIT_2    -?{digit}+({invalid}|{alnum})+

FLIT			-?{digit}{0,7}"."{digit}{0,7}
INVAL_FLIT_1    -?{digit}*({invalid}|{alnum})+"."({invalid}|{alnum})+
INVAL_FLIT_2	-?{digit}+"."{digit}+

CHLIT			(\'{printable}\')|(\'\\[nftrbv]\')
STRING			\"{printable}*\"

%%

"//".*					{ } 

"/*"					{ BEGIN(MULTI_COMMENT); }
<MULTI_COMMENT>"*/" 	{ BEGIN(INITIAL); }
<MULTI_COMMENT>[^\n]+	{ }	
<MULTI_COMMENT>"\n"		{ m_driver.lineNumber += 1; }
<MULTI_COMMENT><<EOF>>  { 
						  ERROR("Comentario em bloco nao terminado"); 
						  return Cd::Parser::make_YYEOF();
						}

"continue"				{ 
							return Cd::Parser::make_CONTINUE(); 
						}
"break"					{ return Cd::Parser::make_BREAK(); }
"return"				{ return Cd::Parser::make_RETURN(); }
"else"					{ return Cd::Parser::make_ELSE(); }
"while"					{ return Cd::Parser::make_WHILE(); }
"for"					{ return Cd::Parser::make_FOR(); }
"if"					{ return Cd::Parser::make_IF(); }
"void"					{ return Cd::Parser::make_VOID(TokenType::VOID); }
"char"  		     	{ return Cd::Parser::make_CHAR(TokenType::CHAR); }
"int"					{ return Cd::Parser::make_INT(TokenType::INT); }
"float"					{ return Cd::Parser::make_FLOAT(TokenType::REAL); }
"double"				{ return Cd::Parser::make_DOUBLE(TokenType::REAL); }

"!"						{ return Cd::Parser::make_NOT(); }
"=="   				    { return Cd::Parser::make_EQU(); }
"!="                    { return Cd::Parser::make_EQU(); }
">"	                 	{ return Cd::Parser::make_REL(); }
"<"                     { return Cd::Parser::make_REL(); }
">="                    { return Cd::Parser::make_REL(); }
"<="                    { return Cd::Parser::make_REL(); }
"+" 					{ return Cd::Parser::make_ADD(); }
"-"                     { return Cd::Parser::make_ADD(); }
"*"						{ return Cd::Parser::make_MUL(); }
"/"						{ return Cd::Parser::make_DIV(); }
"++"	   			    { return Cd::Parser::make_INC(); }
"--"                    { return Cd::Parser::make_DEC(); }
"||"					{ return Cd::Parser::make_OR(); }
"&&"					{ return Cd::Parser::make_AND(); }


";"						{ return Cd::Parser::make_SEMI(); }
","						{ return Cd::Parser::make_COMMA(); }
"="						{ return Cd::Parser::make_ASSIGN(); }
"&"						{ return Cd::Parser::make_REFER(); }
"("						{ return Cd::Parser::make_LPAREN(); }
")"						{ return Cd::Parser::make_RPAREN(); }
"]"						{ return Cd::Parser::make_RBRACK(); }
"["						{ return Cd::Parser::make_LBRACK(); }
"{"						{ return Cd::Parser::make_LBRACE(); }
"}"						{ return Cd::Parser::make_RBRACE(); }

{ID}     				{ 
							return Cd::Parser::make_ID(new SymbolInfo(yytext, m_driver.lineNumber)); }
{ILIT} 					{ 
							return Cd::Parser::make_ILIT(atoi(yytext));
						}
{INVAL_ILIT_1}	 		{ ERROR("Constante inteira excedeu o limite");  }
{INVAL_ILIT_2}	 		{ ERROR("Constante inteira com caractere invalido");  }

{FLIT} 					{ 
							return Cd::Parser::make_FLIT(atof(yytext));
 						}
{INVAL_FLIT_2}	 		{ ERROR("Constante real excedeu o limite"); }
{INVAL_FLIT_1}	 		{ ERROR("Constante real com caractere invalido"); }

{CHLIT} 				{ 
							return Cd::Parser::make_CHLIT(yytext[1]);
 						}
{STRING} 				{ 
							return Cd::Parser::make_STRING(yytext);
 						}

{INVAL_ID}      		{ ERROR("Identificador com caractere invalido");  }

<<EOF>>         		{ return Cd::Parser::make_YYEOF(); }

"\n"					{ m_driver.lineNumber += 1; }
{whitespace}+			{ }	

.						{ ERROR("Token invalido"); }

%%