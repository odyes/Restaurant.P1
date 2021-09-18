#include <Crockery.hh>

Crockery::Crockery(std::string type)
{
    this->type= type;
}

Crockery::~Crockery()
{

}

std::string Crockery::GetType()const
{
    return type;
}


