#pragma once
#include "Crockery.hh"

class Node
{
    private:
      Crockery* crockery{};
    public:
      Node* next{};
      Node(Crockery*& crockery);
      ~Node();

      Crockery* GetCrockery() const;
};