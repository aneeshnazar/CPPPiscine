#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    names[0] = "Un"
    names[1] = "Zhubdhos"
    names[2] = "Fa"
    names[3] = "Ughah"
    names[4] = "Weg"
    names[5] = "Sprashor"
    names[6] = "Troemugon"
    names[7] = "Atah"
    names[8] = "Exuntum"
    names[9] = "Relamier"
    names[10] = "Ikaunq"
    names[11] = "Wan"
    names[12] = "Teijun"
    names[13] = "Toll"
    names[14] = "Rach"
    names[15] = "Beffam"
    names[16] = "Aulsorum"
    names[17] = "Faja"
    names[18] = "Dhaadihit"
    names[19] = "Falth"
    srand(time(NULL));
}

ZombieEvent::~ZombieEvent(){}

void ZombieEvent::setZombieType(std::string t)
{
    type = t;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie  *creep = new Zombie(name, type);
    return (creep);
}

void    ZombieEvent::randomChump()
{
    std::string name = names[rand() % 20];
    Zombie  *newCreep = newZombie(name);
    newCreep->announce();
    delete newCreep;
}
