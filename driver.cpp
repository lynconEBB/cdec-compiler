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

void recursivePrint(Node* node, int tabs)
{
    for (int i = 0; i < tabs; i++) {
        if (i == tabs-1) {
            std::cout << " |--";
        } else {
            std::cout << " |  ";
        }
    }

    std::cout << node->name << '\n';

    for (Node* child : node->children) {
        recursivePrint(child, tabs + 1);
    }
}

void Driver::printAST(Node* node) 
{
    std::cout << "========= Árvore Sintática ============\n";
    recursivePrint(node, 0); 
}


}