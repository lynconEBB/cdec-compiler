#include "symTable.h"
#include "driver.h"
#include <utility>

namespace Cd 
{
    void SymbolTable::insert() 
    {
        
    }

    SymbolInfo* SymbolTable::find(const std::string& name)
    {
        return nullptr;
    }

    void SymbolTable::insertLiteral(std::string name, const Cd::Parser::symbol_type& classType)
    {
        SymIterator result = symbolTable.find(name);
        SymbolInfo* info;

        if (result != symbolTable.end()) {
            info = result->second;
            info->references.push_back(m_driver.lineNumber);
        } else {
            info = new SymbolInfo(name, m_driver.lineNumber);

            //info->classType(classType);
            symbolTable.insert(std::make_pair(name, info));
        }
    }

    void SymbolTable::insertKeyword()
    {

    }

    void SymbolTable::inserIdentifier()
    {

    }
}