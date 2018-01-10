#ifndef HUMAN_A
#define HUMAN_A

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
    Weapon  &weapon;
    std::string name;
public:
    HumanA (std::string name, Weapon &weapon);
    virtual ~HumanA ();
    void attack();
};

#endif
