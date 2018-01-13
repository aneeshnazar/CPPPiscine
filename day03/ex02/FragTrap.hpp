#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:
    public:
        FragTrap ();
        FragTrap (std::string name);
        FragTrap (FragTrap const &cc);
        ~FragTrap ();
        FragTrap &operator=(FragTrap const &input);
        void vaulthunter_dot_exe(std::string const & target);
        void leadPipe(std::string const & target);
        void leadPoisoning(std::string const &target);
        void fingerGuns(std::string const & target);
        void standSilentlyandThreateningly(std::string const &target);
        void fingerKnife(std::string const &target);
};

#endif
