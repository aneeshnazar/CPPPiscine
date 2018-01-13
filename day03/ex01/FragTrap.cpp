#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

FragTrap::FragTrap (std::string n)
{
    matk = 30;
    ratk = 20;
    adr = 5;
    level = 1;
    mhp = 100;
    mep = 100;
    name = n;
    hp = mhp;
    ep = mep;
    srand(time(NULL));
    std::cout << "Borderlands reference!" << std::endl;
}

FragTrap::FragTrap (FragTrap const &cc)
{
    *this = cc;
    srand(time(NULL));
    std::cout << "Another Borderlands reference!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &input)
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

FragTrap::~FragTrap ()
{
    std::cout << "Oh thank God, now no one will know I've never played Borderlands." << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "\tFR4G-TP " << name << " attacks " << target << " at range, causing "<< ratk << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "\tFR4G-TP " << name << " attacks " << target << " up close, causing "<< matk << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    hp = (hp - (amount - adr)) > 0 ? (hp - (amount - adr)) : 0;
    std::cout << "\tFR4G-TP " << name << " takes " << amount << " damage, and lost "<< amount - adr << " hp !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    hp = (hp + amount) < mhp ? (hp + amount) : mhp;
    std::cout << "\tFR4G-TP " << name << " recovers " << amount << " hp. Current hp: " << hp << " hp !" << std::endl;
}

void FragTrap::displayStats(void)
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int i = rand() % 5;

    if (ep > 0)
    {
        switch (i) {
            case 0:
            {
                fingerGuns(target);
                break ;
            }
            case 1:
            {
                fingerKnife(target);
                break ;
            }
            case 2:
            {
                leadPipe(target);
                break ;
            }
            case 3:
            {
                leadPoisoning(target);
                break ;
            }
            case 4:
            {
                standSilentlyandThreateningly(target);
                break ;
            }
        }
        ep -= (ep > 25) ? 25 : ep;
        std::cout << "You have " << ep << " energy remaining" << std::endl;
    }
    else
        std::cout << "You don't have enough energy for that!" << std::endl;

}

void FragTrap::leadPipe(std::string const & target)
{
    std::cout << name << " uses lead pipe on " << target << std::endl;
    meleeAttack(target);
}

void FragTrap::leadPoisoning(std::string const &target)
{
    std::cout << name << " uses lead poisoning on " << target << std::endl;
    meleeAttack(target);
    takeDamage(matk);
}

void FragTrap::fingerGuns(std::string const & target)
{
    std::cout << name << " uses finger guns on " << target << std::endl;
    rangedAttack(target);
}

void FragTrap::standSilentlyandThreateningly(std::string const &target)
{
    std::cout << name << " stands silently and threateningly and stares at " << target << std::endl;
    meleeAttack(target);
    beRepaired(matk);
}

void FragTrap::fingerKnife(std::string const &target)
{
    std::cout << name << " uses finger knife on " << target << std::endl;
    meleeAttack(target);
}
