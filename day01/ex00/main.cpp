#include "pony.hpp"

void    PonyOnTheStack()
{
    Pony    pony;

    std::cout << "The stack has birthed a pony!" << std::endl;
    pony.run();
}

void    PonyOnTheStack(std::string name)
{
    Pony    pony(name);

    std::cout << "The stack has birthed a pony!" << std::endl;
    pony.run();
}

void    PonyOnTheHeap()
{
    Pony    *pony = new Pony();

    std::cout << "The heap has birthed a pony!" << std::endl;
    pony->run();
    delete pony;
}

void    PonyOnTheHeap(std::string name)
{
    Pony    *pony = new Pony(name);

    std::cout << "The heap has birthed a pony!" << std::endl;
    pony->run();
    delete pony;
}

int main(void)
{
    PonyOnTheStack();
    PonyOnTheStack("Nameless");
    PonyOnTheHeap();
    PonyOnTheHeap("Nameless");
    return 0;
}
