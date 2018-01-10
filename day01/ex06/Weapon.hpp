#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon (std::string type);
    virtual ~Weapon ();
    std::string const &getType();
    void setType(std::string type);
};

#endif
