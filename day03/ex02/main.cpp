#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap f("Not Sure");

    f.displayStats();
    for (size_t i = 0; i < 5; i++) {
        f.vaulthunter_dot_exe("Fuck if I know");
        f.displayStats();
    }
    f.leadPoisoning("himself");
    f.displayStats();
    f.leadPoisoning("himself");
    f.displayStats();
    f.standSilentlyandThreateningly("himself");

    ScavTrap s("Don't care");
    s.displayStats();
    for (size_t i = 0; i < 5; i++) {
        s.challengeNewcomer();
        s.displayStats();
    }
    return 0;
}
