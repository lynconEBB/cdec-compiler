#ifndef DRIVER_H
#define DRIVER_H

#include "scanner.h"
#include "parser.h"
#include "symTable.h"
#include <fstream>
#include "tree.h"

namespace Cd {

class Driver {

public:
    Driver(std::ifstream& inputStream) : m_scanner(*this, inputStream), m_parser(m_scanner, *this), m_symbolTable(*this) {}
    void init();
    void printAST(Node* node);
public:
    int lineNumber = 0;

private:
    Scanner m_scanner;
    Parser m_parser;
    SymbolTable m_symbolTable;
};

}

#endif