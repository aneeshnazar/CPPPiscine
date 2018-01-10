#include "ZombieHorde.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

ZombieHorde::ZombieHorde(int n)
{
    names[0] = "Opulious";
    names[1] = "Aqui";
    names[2] = "Thamok";
    names[3] = "Hall";
    names[4] = "Wuolun";
    names[5] = "Dibhachxosh";
    names[6] = "Souwu";
    names[7] = "Yenggein";
    names[8] = "Deodeblox";
    names[9] = "Wa";
    names[10] = "Huohai";
    names[11] = "Thovoalk";
    names[12] = "Tsapu";
    names[13] = "Rodde";
    names[14] = "Soequen";
    names[15] = "Shentsun";
    names[16] = "Cheggorberp";
    names[17] = "Siave";
    names[18] = "Ghushug";
    names[19] = "Zhaicheing";
    num = n;
    srand(time(NULL));
    horde = new Zombie[num];
    for (size_t i = 0; i < num; ++i)
    {
        horde[i].setName(names[rand() % 20]);
        horde[i].setType("runner");
    }
    std::cout << "The horde is born" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
    delete [] horde;
    std::cout << "The horde has died." << std::endl;
}

void    ZombieHorde::announce()
{
    for (size_t i = 0; i < num; i++)
    {
        horde[i].announce();
    }
}
