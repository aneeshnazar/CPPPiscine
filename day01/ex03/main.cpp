#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        ZombieHorde horde = ZombieHorde(atoi(argv[1]));
        horde.announce();
    }
    return 0;
}
