#include "Human.hpp"

Human::Human(){}

Human::~Human(){}

Brain Human::getBrain()
{
    return (brain);
}

std::string Human::identify()
{
    return (brain.identify());
}
