#include "Phonebook.Class.hpp"

Phonebook::Phonebook()
{
    it = 0;
}

void Phonebook::add()
{
    if (it < 8)
    {
        Entry e;
        e.save();
        data[it] = e;
        ++it;
    }
    else
    {
        std::cout << "Phonebook is full" << std::endl;
    }
}

void Phonebook::search()
{
    char        n[256];
    int         pick;

    if (it == 0)
    {
        std::cout << "Phonebook is empty, nothing to see here" << std::endl;
        return ;
    }
    for (int i = 0; i < it; ++i)
    {
        std::cout << std::setw(10) << i;
        data[i].output();
    }
    if (std::cin.eof())
        return ;
    std::cin.getline(n, 256);
    if (std::string(n) == "")
        return ;
    pick = atoi(n);
    if (pick < it && pick >= 0) {
        data[pick].outputAll();
    }
    else
    {
        std::cout << "Invalid value, please enter a value between 0 and " << it - 1 << std::endl;
    }
}

Phonebook::~Phonebook(){}
