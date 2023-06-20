#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <unordered_map>
#include <string>
#include <vector>
#include "parser.h"
#include <variant>

using Value = std::variant<int,float,char,std::string>;

enum class TokenType {
    UNDEFINED,
    INT,
    REAL,
    CHAR,
    STR,
    ARRAY,
    FUNCTION,
    VOID
};

struct Parameter {
    TokenType type;
    std::string name;
    Value value;
    bool byReference;
};

struct SymbolInfo {
    std::string name;
    Cd::Parser::token_type classType;
    TokenType type = TokenType::UNDEFINED;
    std::vector<uint32_t> references;

    Value value; 

    // Valores do Array
    std::vector<Value> arrayValues;
    // Parametros caso seja tipo função
    std::vector<Parameter> parameters;
    // Para retorno de função e tipo do array
    TokenType aditionalType;

    SymbolInfo(const std::string& name, uint32_t firstReference):
            name(name), references({firstReference}), type(TokenType::VOID) {}
};

using SymIterator = std::unordered_map<std::string, SymbolInfo*>::iterator;

namespace Cd
{

class SymbolTable {
public:
    void insert();
    void insertLiteral();
    void insertKeyword();
    void inserIdentifier();
    SymbolInfo* find(const std::string& name);

private:
    std::unordered_map<std::string, SymbolInfo*> symbolTable;
};

}

#endif