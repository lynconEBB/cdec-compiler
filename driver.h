#ifndef DRIVER_H
#define DRIVER_H

#include "scanner.h"
#include "parser.h"

namespace Cd {

class Driver {

public:
    Driver() : m_scanner(*this), m_parser(m_scanner, *this) {}
    void init();
    int lineNumber;

private:
    Scanner m_scanner;
    Parser m_parser;
};

}

#endif