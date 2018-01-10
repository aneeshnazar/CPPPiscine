#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB (std::string n) : name(n)
{
    //this->name = n;
    //this->weapon = Weapon("");
}

void HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}

HumanB::~HumanB (){}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
