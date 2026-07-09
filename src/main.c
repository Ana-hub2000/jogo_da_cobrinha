#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "menu.h"
#include "game.h"
int maxScore = 100;
int main(void)
{
    srand(time(NULL));

    initscr();
    keypad(stdscr, TRUE);
    nodelay(stdscr, FALSE);

    noecho();
    curs_set(0);

    if (showMenu(&maxScore))
    {
        nodelay(stdscr, TRUE);
        gameInit(maxScore);
        gameLoop();
        gameEnd();
    }

    endwin();

    return 0;
}