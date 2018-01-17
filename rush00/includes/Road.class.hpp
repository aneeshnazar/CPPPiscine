#ifndef ROAD_H
#define ROAD_H

#include <iostream>

class Road {
    private:
        std::string scenery[16];
    public:
        Road ();
        Road (Road const &cc);
        ~Road ();
        Road &operator=(Road const &input);
        std::string *getScenery();
};

#endif
