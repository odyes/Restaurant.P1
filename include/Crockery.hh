#pragma once
#include <string>

class Crockery
{
    private:
      std::string type;
    public:
      Crockery(std::string type);
      ~Crockery();
      std::string GetType() const;
};