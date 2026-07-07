#include <ncurses.h>

#include "game.h"

int main(void)
{
    initscr();

    noecho();          // Não mostra as teclas digitadas
    curs_set(0);       // Esconde o cursor

    gameInit();
    gameLoop();
    gameEnd();

    endwin();

    return 0;
}