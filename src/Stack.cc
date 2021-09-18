#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

Node* Stack::GetTop() const
{
    return head;
}


bool Stack::IsEmpty() const
{
    return head== nullptr;
}


void Push(Crockery* crockery)
{
  if(IsEmpty())
  {
    head =new Node(crockery);
  }
  else
  {
    Node* back {head};
    head=new Node(crockery);
    head->next = back;
  }
}

void Stack::Printf()
{
    if(IsEmpty())
    {
        std::cout<< "Stack is empty" << std::endl;
    }
    else
    {
        Node* current{head};

        std::cout<< "Crockery list"<< std::endl;
        std::cout<< std::endl;
        while (current)
        {
            std::cout << "Crockery Type: "<< current->GetCrockery()->GetType()<<std::endl;
            std::cout << std::endl;
            current=current->next;
        }
    }
}