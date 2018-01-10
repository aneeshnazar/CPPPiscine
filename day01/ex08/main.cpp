#include "Human.hpp"
#include <iostream>

int main(void) {
    Human person;
    std::string target("Aneesh");

    person.action("meleeAttack", target);
    person.action("rangedAttack", target);
    person.action("intimidatingShout", target);
    return 0;
}
