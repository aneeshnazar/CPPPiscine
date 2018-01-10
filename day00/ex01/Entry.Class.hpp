#ifndef ENTRY_HPP
#define ENTRY_HPP

#include <iostream>
#include <iomanip>

class Entry {
private:
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;
    std::string     login;
    std::string     postal_address;
    std::string     email_address;
    std::string     phone_number;
    std::string     birthdate;
    std::string     favorite_meal;
    std::string     underwear_color;
    std::string     darkest_secret;
public:
    Entry ();
    void save();
    void output();
    void outputAll();
    void outputIndiv(std::string);
    virtual ~Entry ();
};

#endif
