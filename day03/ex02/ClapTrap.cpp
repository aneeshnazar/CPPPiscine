#include "ClapTrap.hpp"

void ClapTrap::setStats(unsigned int _hp,
        unsigned int _mhp,
        unsigned int _ep,
        unsigned int _mep,
        unsigned int _lvl,
        unsigned int _matk,
        unsigned int _ratk,
        unsigned int _adr)
{
    hp =  _hp;
    mhp =  _mhp;
    ep =  _ep;
    mep =  _mep;
    level =  _lvl;
    matk =  _matk;
    ratk =  _ratk;
    adr =  _adr;
    srand(time(NULL));
}

void    ClapTrap::setName(std::string _name)
{
    name = _name;
}

ClapTrap::ClapTrap ()
{
    setStats(100, 100, 50, 50, 1,20, 15, 3);
    setName("");
    std::cout << "Claptrap Borderlands reference!" << std::endl;
}

ClapTrap::ClapTrap (std::string name)
{
    setStats(100, 100, 50, 50, 1,20, 15, 3);
    setName(name);
    std::cout << "Another Claptrap Borderlands reference!" << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const &cc)
{
    *this = cc;
    srand(time(NULL));
    std::cout << "A copied ScavTrap Borderlands reference!" << std::endl;
}

ClapTrap::~ClapTrap ()
{
    std::cout << "ClapTrap is very happy that he doesn't have to continue to pretend to know Borderlands." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &input)
{
    setStats(input.hp, input.mhp, input.ep, input.mep, input.level, input.matk, input.ratk, input.adr);
    std::cout << "This is getting out of hand! Now there are two of them!" << std::endl;
    return (*this);
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "\tClapTrap " << name << " attacks " << target << " at range, causing "<< ratk << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "\tClapTrap " << name << " attacks " << target << " up close, causing "<< matk << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hp = (hp - (amount - adr)) > 0 ? (hp - (amount - adr)) : 0;
    std::cout << "\tClapTrap " << name << " takes " << amount << " damage, and lost "<< amount - adr << " hp !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hp = (hp + amount) < mhp ? (hp + amount) : mhp;
    std::cout << "\tFR4G-TP " << name << " recovers " << amount << " hp. Current hp: " << hp << " hp !" << std::endl;
}

void ClapTrap::displayStats(void)
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

void ClapTrap::setEp(unsigned int _ep)
{
    ep = _ep;
}

std::string ClapTrap::getName()
{
    return name;
}

unsigned int ClapTrap::getMatk()
{
    return (matk);
}

unsigned int ClapTrap::getEp()
{
    return ep;
}
