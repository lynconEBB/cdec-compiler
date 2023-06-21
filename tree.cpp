#include "tree.h"

void Node::addChild(Node* newChild)
{
    children.push_back(newChild);
}

Node* Node::getChildByIndex(int index) 
{
    return children[index];
}
