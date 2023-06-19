#ifndef DRIVER_H
#define DRIVER_H

#include "scanner.h"
#include "parser.h"
#include <fstream>

namespace Cd {

class Driver {

public:
    Driver(std::ifstream& inputStream) : m_scanner(*this, inputStream), m_parser(m_scanner, *this) {}
    void init();
    int lineNumber;

private:
    Scanner m_scanner;
    Parser m_parser;
};

}

#endif