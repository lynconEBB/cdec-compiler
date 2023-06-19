#ifndef SCANNER_H
#define SCANNER_H

#if !defined(yyFlexLexerOnce)
#undef yyFlexLexer
#define yyFlexLexer Cd_FlexLexer
#include <FlexLexer.h>
#endif

#undef YY_DECL
#define YY_DECL Cd::Parser::symbol_type Cd::Scanner::getNextToken()

#include "parser.h"

namespace Cd {
    class Driver;

    class Scanner : public yyFlexLexer {
    public:

        Scanner(Driver &driver) : m_driver(driver) {}
        virtual Cd::Parser::symbol_type getNextToken();

    private:
        Driver& m_driver;
    }; 
}

#endif