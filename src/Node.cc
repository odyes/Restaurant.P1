#include "Node.hh"

Node::Node(Crockery*& crockery)
{
    this->crockery= crockery;
}

Node::~Node()
{

}

Crockery* Node::GetCrockery() const
{
    return crockery;
}