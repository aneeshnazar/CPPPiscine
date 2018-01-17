#include <GameContainer.class.hpp>

void GameContainer::setDSize(double x, double y)
{
    display.setSize(x, y);
}

void GameContainer::run(void)
{
    int     keycode;
    int     clock_it = 0;
    Position    oldPos;

    while (1)
    {
        oldPos = player1.getPos();
    //keycode = getch();
        if ((keycode = getch()) == ERR)
            ;
        else if (keycode == KEY_UP)
            //player1.setPos(oldPos.getX(), oldPos.getY() - 1);
        //    player1.setPos(player1.getPos().getX(), player1.getPos().getY() - 1);
            player1.setMotion(3.1415 / 2, 0.5);
        else if (keycode == KEY_DOWN)
            //player1.setPos(oldPos.getX(), oldPos.getY() + 1);
            //player1.setPos(player1.getPos().getX(), player1.getPos().getY() + 1);
            player1.setMotion( -3.1415 / 2, 0.5);
        else if (keycode == KEY_LEFT)
            //player1.setPos(oldPos.getX() - 1, oldPos.getY());
            //player1.setPos(player1.getPos().getX() - 1, player1.getPos().getY());
            player1.setMotion( 3.1415, 0.5);
        else if (keycode == KEY_RIGHT)
            //player1.setPos(oldPos.getX() + 1, oldPos.getY());
            //player1.setPos(player1.getPos().getX() + 1, player1.getPos().getY());
            player1.setMotion(0, 0.5);
        else if (keycode == 27)
            break ;


            //player1.setMotion(0, 0);
        if (keycode == KEY_UP || keycode == KEY_DOWN || keycode == KEY_LEFT || keycode == KEY_RIGHT)
        {
            display.clearPlayer(oldPos);
            player1.Movement();
            display.drawPlayer(player1);
        }
        display.drawRoad(road, clock_it);
        display.clearRoad(oldPos);
        display.drawHUD(player1, clock_it);
        ++clock_it;
    }
}

GameContainer::GameContainer()
{
    player1.setPos(10, 20);
    display.drawPlayer(player1);
}

GameContainer::~GameContainer(){}
