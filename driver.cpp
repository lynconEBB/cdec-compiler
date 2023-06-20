#include "driver.h"
#include <iostream>

namespace Cd
{

void Driver::init() {
    int a = m_parser.parse();
    if (a == 0) {
        std::cout << "DEU" << std::endl;
    } else {
        std::cout << "Nao DEU" << std::endl;
    }
}

}