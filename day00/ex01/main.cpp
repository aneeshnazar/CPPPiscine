#include <iostream>
#include "Phonebook.Class.hpp"
#include "Entry.Class.hpp"

int main(void)
{
    std::string command;
    Phonebook   book;

    while (1)
    {
        std::getline(std::cin, command);
        if (command == "EXIT" || std::cin.eof())
        {
            break ;
        }
        else if (command == "ADD")
        {
            std::cout << "Adding to phonebook" << std::endl;
            book.add();
        }
        else if (command == "SEARCH")
        {
            std::cout << "Searching phonebook" << std::endl;
            book.search();
        }
        else
        {
            std::cout << "Please enter valid input, not "<< command << std::endl;
        }
    }
    return 0;
}
