#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>

class ScavTrap {
    private:
        unsigned int hp;
        unsigned int mhp;
        unsigned int ep;
        unsigned int mep;
        unsigned int level;
        std::string name;
        unsigned int matk;
        unsigned int ratk;
        unsigned int adr;
    public:
        ScavTrap ();
        ScavTrap (std::string n);
        ScavTrap (ScavTrap const &cc);
        ~ScavTrap ();
        ScavTrap &operator=(ScavTrap const &eq);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(void);
        void displayStats(void);
};

#endif
