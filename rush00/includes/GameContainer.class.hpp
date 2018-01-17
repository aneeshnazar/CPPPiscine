#ifndef GAMECONTAINER_H
#define GAMECONTAINER_H

#include <ctime>
#include <iostream>
#include <Display.class.hpp>
#include <Road.class.hpp>
#include <Player.class.hpp>

class GameContainer {
    private:
        Display display;
        Road    road;
        Player  player1;
    public:
        GameContainer (void);
        GameContainer (std::string playerName);
        GameContainer (GameContainer const &cc);
        ~GameContainer (void);
        GameContainer &operator=(GameContainer const &input);
        void setDSize(double x, double y);
        void run(void);
};

#endif
