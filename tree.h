#ifndef TREE_H
#define TREE_H
#include <vector>
#include <variant>
#include <string>

enum class TokenType;

class Node
{
public:
    Node() {}
    Node(std::string name): name(name) {}
    Node(std::string name, TokenType type ) : name(name), type(type) {}
    Node(std::string name, TokenType type, std::variant<int,double,char,std::string> value)
        : name(name), type(type), value(value) {}

    void addChild(Node* newChild);
    Node* getChildByIndex(int index);

public:
    std::variant<int, double, char, std::string> value;
    std::string name;
    TokenType type;
    bool isTerminal;
    std::vector<Node*> children;
};

#endif