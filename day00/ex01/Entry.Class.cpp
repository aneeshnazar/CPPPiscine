#include "Entry.Class.hpp"

std::string     safe_read(std::string message)
{
    std::string out;

    std::cout << message << std::endl;
    std::getline(std::cin, out);
    if (std::cin.eof())
        exit(0);
    if (out == "")
        return ("");
    return (out);
}

Entry::Entry(){}

void Entry::save()
{
    first_name = safe_read("Enter first name:");
    last_name = safe_read("Enter last name:");
    nickname = safe_read("Enter nickname:");
    login = safe_read("Enter login:");
    postal_address = safe_read("Enter postal address:");
    email_address = safe_read("Enter email address:");
    phone_number = safe_read("Enter phone number:");
    birthdate = safe_read("Enter birthdate:");
    favorite_meal = safe_read("Enter favorite meal:");
    underwear_color = safe_read("Enter underwear color:");
    darkest_secret= safe_read("Enter darkest secret:");
}

Entry::~Entry(){}

void Entry::outputIndiv(std::string str)
{
    std::cout << "|";
    std::cout << std::setw(10) << std::setfill(' ');
    if (str.length() <= 10)
    {
        std::cout << str;
    }
    else
    {
        char buf[11];
        buf[10] = 0;
        buf[9] = '.';
        str.copy(buf, 9, 0);
        std::cout << buf;
    }
}

void Entry::output()
{
    outputIndiv(first_name);
    outputIndiv(last_name);
    outputIndiv(nickname);
    std::cout << "|" << std::endl;
}

void Entry::outputAll()
{
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nickname << std::endl;
    std::cout << login << std::endl;
    std::cout << postal_address << std::endl;
    std::cout << email_address << std::endl;
    std::cout << phone_number << std::endl;
    std::cout << birthdate << std::endl;
    std::cout << favorite_meal << std::endl;
    std::cout << underwear_color << std::endl;
    std::cout << darkest_secret << std::endl;
}
