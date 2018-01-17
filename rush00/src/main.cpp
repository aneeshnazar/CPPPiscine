#include <GameContainer.class.hpp>
#include <ncurses.h>

int main(void)
{
    GameContainer c;

    initscr();
    c.setDSize(COLS, LINES);
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    //init_pair(1, 4, 4);
    init_pair(2, COLOR_CYAN, COLOR_CYAN);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(5, COLOR_WHITE, COLOR_WHITE);
    init_pair(6, COLOR_BLACK, COLOR_BLACK);
    init_pair(7, COLOR_WHITE, COLOR_BLACK);
    refresh();
    cbreak();
    //raw();
    noecho();
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);

    c.run();
    getch();
    endwin();
    return 0;
}
