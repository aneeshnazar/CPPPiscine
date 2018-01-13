#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
    hp =  100;
    mhp =  100;
    ep =  50;
    mep =  50;
    level =  1;
    name =  "";
    matk =  20;
    ratk =  15;
    adr =  3;
    srand(time(NULL));
    std::cout << "ScavTrap Borderlands reference!" << std::endl;
}

ScavTrap::ScavTrap (std::string n)
{
    hp = 100;
    mhp = 100;
    ep = 50;
    mep = 50;
    level = 1;
    name = n;
    matk = 20;
    ratk = 15;
    adr = 3;
    srand(time(NULL));
    std::cout << "Another ScavTrap Borderlands reference!" << std::endl;
}

ScavTrap::ScavTrap (ScavTrap const &cc)
{
    *this = cc;
    srand(time(NULL));
    std::cout << "Copied ScavTrap Borderlands reference!" << std::endl;
}

ScavTrap::~ScavTrap ()
{
    std::cout << "Oh thank God, now no one will know I've never played Borderlands. ScavTrap." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &input)
{
    matk = input.matk;
    ratk = input.ratk;
    adr = input.adr;
    level = input.level;
    mhp = input.mhp;
    mep = input.mep;
    name = input.name;
    hp = input.hp;
    ep = input.ep;
    return (*this);
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "\tScavTrap " << name << " attacks " << target << " at range, causing "<< ratk << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "\tScavTrap " << name << " attacks " << target << " up close, causing "<< matk << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    hp = (hp - (amount - adr)) > 0 ? (hp - (amount - adr)) : 0;
    std::cout << "\tScavTrap " << name << " takes " << amount << " damage, and lost "<< amount - adr << " hp !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    hp = (hp + amount) < mhp ? (hp + amount) : mhp;
    std::cout << "\tScavTrap " << name << " recovers " << amount << " hp. Current hp: " << hp << " hp !" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
    int i = rand() % 5;

    std::cout << "ScavTrap " <<name << " challenges you to ";
    switch (i) {
        case 0:
        {
            std::cout << " contemplate existence." << std::endl;
            break ;
        }
        case 1:
        {
            std::cout << " realize that this just seems tedious. " << std::endl;
            break ;
        }
        case 2:
        {
            std::cout << " understand that I'm learning this no matter what I put here." << std::endl;
            break ;
        }
        case 3:
        {
            std::cout << " think that this seems completely irrelevant. " << std::endl;
            break ;
        }
        case 4:
        {
            std::cout << " ... Russian Roulette? " << std::endl;
            break ;
        }
    }
}

void ScavTrap::displayStats(void)
{
    std::cout << name << ":" << std::endl;
    std::cout << "\tHP:\t\t" << hp << std::endl;
    std::cout << "\tMax HP:\t\t" << mhp << std::endl;
    std::cout << "\tEP:\t\t" << ep << std::endl;
    std::cout << "\tMax EP:\t\t" << mep << std::endl;
    std::cout << "\tLevel:\t\t" << level << std::endl;
    std::cout << "\tMelee attack:\t" << matk << std::endl;
    std::cout << "\tRanged attack:\t" << ratk << std::endl;
    std::cout << "\tArmor:\t\t" << adr << std::endl;
}
