#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target)
{
    std::cout << "You roasted " << target << "'s ass up close and personal" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "You roasted " << target << "'s ass from a distance" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "You yelled at " << target << ". It did nothing." << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    void (Human::*dispatch_table[])(std::string const &) =
    {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };

    for (size_t i = 0; i < 3; i++)
    {
        if (action_name == actions[i])
        {
            (this->*dispatch_table[i])(target);
            return ;
        }
    }
    std::cout << "Invalid action" << std::endl;
}
