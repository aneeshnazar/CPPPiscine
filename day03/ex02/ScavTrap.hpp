#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:
    public:
        ScavTrap ();
        ScavTrap (std::string n);
        ScavTrap (ScavTrap const &cc);
        ~ScavTrap ();
        ScavTrap &operator=(ScavTrap const &eq);
        void challengeNewcomer(void);
};

#endif
