#include "pony.hpp"

Pony::Pony()
{
    std::cout << "I've been through the desert on a horse with no name..." << std::endl;
}

Pony::Pony(std::string str)
{
    name = str;
    std::cout << "A pony named " << name << " is born" << std::endl;
}

Pony::~Pony()
{
    if (name != "")
        std::cout << "The pony named " << name << " has died" << std::endl;
    else
        std::cout << "The nameless pony has died" << std::endl;
}

void Pony::run()
{
    if (name != "")
        std::cout << "The pony named "  << name << " runs!" << std::endl;
    else
        std::cout << "The nameless pony runs!" << std::endl;
}
