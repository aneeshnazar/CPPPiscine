#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon (std::string n)
{
    this->type = n;
}

Weapon::~Weapon (){}

std::string const &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string t)
{
    this->type = t;
}
