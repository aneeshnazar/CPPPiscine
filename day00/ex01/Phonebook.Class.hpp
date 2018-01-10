#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <cstdlib>
#include "entry.hpp"

class Phonebook {
private:
    Entry   data[8];
    int     it;
public:
    Phonebook ();
    void add();
    void search();
    virtual ~Phonebook ();
};

#endif
