#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

FragTrap::FragTrap (std::string n)
{
    ClapTrap::setStats(100, 100, 100, 100, 1, 30, 20, 5);
    ClapTrap::setName(n);
    std::cout << "This ClapTrap is a FragTrap named " << getName() << std::endl;
}

FragTrap::FragTrap (FragTrap const &cc)
{
    *this = cc;
    srand(time(NULL));
    std::cout << "Another Borderlands reference!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &input)
{
    ClapTrap::operator=(input);
    std::cout << "Your clones are most impressive." << std::endl;
    return (*this);
}

FragTrap::~FragTrap ()
{
    std::cout << "Oh thank God, now no one will know I've never played Borderlands." << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int i = rand() % 5;

    if (getEp() > 0)
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
        setEp(getEp() - ((getEp() > 25) ? 25 : getEp()));
        std::cout << "You have " << getEp() << " energy remaining" << std::endl;
    }
    else
        std::cout << "You don't have enough energy for that!" << std::endl;

}

void FragTrap::leadPipe(std::string const & target)
{
    std::cout << getName() << " uses lead pipe on " << target << std::endl;
    meleeAttack(target);
}

void FragTrap::leadPoisoning(std::string const &target)
{
    std::cout << getName() << " uses lead poisoning on " << target << std::endl;
    meleeAttack(target);
    takeDamage(getMatk());
}

void FragTrap::fingerGuns(std::string const & target)
{
    std::cout << getName() << " uses finger guns on " << target << std::endl;
    rangedAttack(target);
}

void FragTrap::standSilentlyandThreateningly(std::string const &target)
{
    std::cout << getName() << " stands silently and threateningly and stares at " << target << std::endl;
    meleeAttack(target);
    beRepaired(getMatk());
}

void FragTrap::fingerKnife(std::string const &target)
{
    std::cout << getName() << " uses finger knife on " << target << std::endl;
    meleeAttack(target);
}
