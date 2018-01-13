#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
    ClapTrap::setName("");
    ClapTrap::setStats(100, 100, 50, 50, 1, 20, 15, 3);
}

ScavTrap::ScavTrap (std::string n)
{
    ClapTrap::setName(n);
}

ScavTrap::ScavTrap (ScavTrap const &cc)
{
    ClapTrap::operator=(cc);
}

ScavTrap::~ScavTrap ()
{
    std::cout << "Oh thank God, now no one will know I've never played Borderlands. ScavTrap." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &input)
{
    ClapTrap::operator=(input);
    std::cout << "This is a new ScavTrap." << std::endl;
    return (*this);
}

void ScavTrap::challengeNewcomer(void)
{
    int i = rand() % 5;

    std::cout << "ScavTrap " <<getName()<< " challenges you to ";
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
