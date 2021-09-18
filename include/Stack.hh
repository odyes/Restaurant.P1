#pragma once
#include "Crockery.hh"
#include "Node.hh"

class Stack
{
    private:
       Node* head{nullptr};
    public:
       Stack();
       ~Stack();
       Node* GetTop() const;
       void Pop();
       void Push(Crockery*& crockery);
       bool IsEmpty() const;
       void Printf();
};

