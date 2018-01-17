#include <Display.class.hpp>

Display::Display ()
{

}

Display::Display (Display const &cc)
{
    *this = cc;
}

Display::~Display ()
{
}

Display &Display::operator=(Display const &input)
{
    x_size = input.x_size;
    y_size = input.y_size;
    name = input.name;
    return (*this);
}

void Display::setSize(double x, double y)
{
    x_size = x;
    y_size = y;
}

void Display::drawRoad(Road road, int i)
{
    attron(COLOR_PAIR(7));
    mvprintw(y_size / 2, x_size - (i % (int)x_size), "%s", road.getScenery()[0].c_str());
    attroff(COLOR_PAIR(7));
    refresh();
}

void Display::drawHUD(Player player, int cl)
{
    WINDOW *HUD = newwin(6, 20, 1, 1);
    box(HUD, 0, 0);
    mvwprintw(HUD, 1, 1, "HP: \t%d", player.getHp());
    mvwprintw(HUD, 2, 1, "Score:\t%d", player.getScore());
    mvwprintw(HUD, 3, 1, "Clock:\t%d:%d:%d", (cl / (3600 * 60)) ,(cl / 3600), (cl % 3600) / 60);
    //mvwprintw(HUD, 1, 1, "HP: %s", player.getHp());
    //mvwprintw(HUD, 1, 1, "Score: %s", player.getScore());
    wrefresh(HUD);
    wclear(HUD);
    //refresh();
    delwin(HUD);
}

void Display::clearRoad(Position pos)
{
    attron(COLOR_PAIR(6));
    mvprintw(y_size - pos.getY(), x_size - pos.getX(), "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
    attroff(COLOR_PAIR(6));
    refresh();
}

void Display::clearPlayer(Position pos)
{
    attron(COLOR_PAIR(6));
    mvprintw(pos.getY(), pos.getX(), "8=D");
    attroff(COLOR_PAIR(6));
    refresh();
}

void Display::drawPlayer(Player const &player)
{
    attron(COLOR_PAIR(1));
    mvprintw(player.getPos().getY(), player.getPos().getX(), "8=D");
    attroff(COLOR_PAIR(1));
    refresh();
}

void Display::drawObstacle(Obstacle const &obstacle)
{
    attron(COLOR_PAIR(5));
    mvprintw(obstacle.getPos().getY(), obstacle.getPos().getX(), "OB");
    attroff(COLOR_PAIR(5));
    refresh();
}

void Display::drawEnemy(Enemy const &enemy)
{
    attron(COLOR_PAIR(3));
    mvprintw(enemy.getPos().getY(), enemy.getPos().getX(), "EN");
    attroff(COLOR_PAIR(3));
    refresh();
}

void Display::drawPlayerBullet(Bullet const &playerbullet)
{
    attron(COLOR_PAIR(2));
    mvprintw(playerbullet.getPos().getY(), playerbullet.getPos().getX(), "b");
    attroff(COLOR_PAIR(2));
    refresh();
}

void Display::drawBullet(Obstacle const &bullet)
{
    attron(COLOR_PAIR(4));
    mvprintw(bullet.getPos().getY(), bullet.getPos().getX(), "b");
    attroff(COLOR_PAIR(4));
    refresh();
}
