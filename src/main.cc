#include<iostream>
#include "Crockery.hh"
#include "Stack.hh"

int main()
{
  Crockery* crockery1{new Crockery("Dishes")};
  Crockery* crockery2{new Crockery("Cups")};
  Crockery* crockery3{new Crockery("Bowl")};

  Stack* stack{new Stack()};
  stack->Push(crockery1);
  stack->Push(crockery2);
  stack->Push(crockery3);
  stack->Printf(); 

  std::cin.get();
  
  return 0;
}
