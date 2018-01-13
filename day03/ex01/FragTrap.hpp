#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>

class FragTrap {
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
        FragTrap (std::string name);
        FragTrap (FragTrap const &cc);
        ~FragTrap ();
        FragTrap &operator=(FragTrap const &input);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);
        void leadPipe(std::string const & target);
        void leadPoisoning(std::string const &target);
        void fingerGuns(std::string const & target);
        void standSilentlyandThreateningly(std::string const &target);
        void fingerKnife(std::string const &target);
        void displayStats(void);
};

#endif
