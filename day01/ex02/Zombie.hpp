#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
private:
    std::string type;
    std::string name;
public:
    Zombie ();
    Zombie (std::string name, std::string type);
    virtual ~Zombie (void);
    void announce(void);
};

#endif
