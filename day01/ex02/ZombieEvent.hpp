#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent {
private:
    std::string type;
    std::string names[20];
public:
    ZombieEvent ();
    virtual ~ZombieEvent ();
    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    void    randomChump();
};

#endif
