#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
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
        ClapTrap ();
        ClapTrap (std::string name);
        ClapTrap (ClapTrap const &cc);
        ~ClapTrap ();
        ClapTrap &operator=(ClapTrap const &input);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setName(std::string _name);
        void setStats(unsigned int _hp,
                unsigned int _mhp,
                unsigned int _ep,
                unsigned int _mep,
                unsigned int _lvl,
                unsigned int _matk,
                unsigned int _ratk,
                unsigned int _adr);
        void displayStats(void);
        void setEp(unsigned int ep);

        unsigned int getEp();
        std::string getName();
        unsigned int getMatk();
};

#endif
