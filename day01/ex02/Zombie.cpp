#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "A mysterious nameless zombie has risen from the dead." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "A " << type << " zombie named " << name << " has...died?" << std::endl;    
}

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
    std::cout << "A " <<type << " zombie named " << name << " has risen from the dead." << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << name << " (" << type << ")> brains." <<std::endl;
}
