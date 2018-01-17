#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <ncurses.h>
#include <Player.class.hpp>
#include <Obstacle.class.hpp>
#include <Enemy.class.hpp>
#include <Bullet.class.hpp>
#include <Road.class.hpp>

class Display{
    private:
        std::string name;
        double x_size;
        double y_size;
    public:
        Display ();
        Display (Display const &cc);
        ~Display ();
        Display &operator=(Display const &input);
        void drawPlayer(Player const &player);
        void drawObstacle(Obstacle const &obstacle);
        void drawEnemy(Enemy const &enemy);
        void drawPlayerBullet(Bullet const &playerbullet);
        void drawBullet(Obstacle const &bullet);
        void clearPlayer(Position pos);
        void drawRoad(Road road, int i);
        void drawHUD(Player player, int cl);
        void setSize(double x, double y);
        void clearRoad(Position pos);
};

#endif
