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
    void setName(std::string name);
    void setType(std::string type);
    virtual ~Zombie (void);
    void announce(void);
};

#endif
