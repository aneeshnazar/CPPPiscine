#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA (std::string n, Weapon &w) : weapon(w), name(n)
{
    //this->weapon = w;
    //this->name = n;
}

HumanA::~HumanA (){}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
