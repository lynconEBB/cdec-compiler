#ifndef TOKENS_HEADER
#define TOKENS_HEADER

#include <string>
#include <vector>

union Value
{
    int intVal;
    double floatVal;
    char charVal;
    std::string stringVal;
};

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
    bool byReference;
};

struct StoredValue {
    int ival;
    double fval;
    char* sval;
};

struct SymbolInfo {
    int scope = 0;
    std::string name;

    TokenType type = TokenType::VOID;

    StoredValue value; 
    std::vector<uint32_t> references;

    // Valores do Array
    std::vector<StoredValue> arrayValues;
    // Parametros caso seja tipo função
    std::vector<Parameter> parameters;
    // Para retorno de função e tipo do array
    TokenType aditionalType;

    SymbolInfo() {}

    SymbolInfo(const std::string& name, uint32_t firstReference):
            name(name), references({firstReference}), type(TokenType::VOID) {}
};

extern uint32_t lineNumber;

#endif