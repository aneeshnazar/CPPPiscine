#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain()
{
    me = this;
}

Brain::~Brain(){}

std::string Brain::identify()
{
    std::stringstream tostr;
    tostr << me;
    return (tostr.str());
}
