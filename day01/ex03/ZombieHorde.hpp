#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H
#include "Zombie.hpp"
#include <iostream>

class ZombieHorde {
private:
    std::string names[20];
    size_t  num;
    Zombie  *horde;
public:
    ZombieHorde (int n);
    virtual ~ZombieHorde ();
    void announce();
};

#endif
