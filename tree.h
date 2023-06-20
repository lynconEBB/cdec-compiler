#ifndef TREE_H
#define TREE_H
#include <vector>
int a,b =4;
class Node
{
public:
    void addChild(Node* newChild);
private:
    std::vector<Node*> children;
};

class DeclNode : public Node {

};


#endif