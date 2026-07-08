#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main(void)
{
    srand(time(NULL));
    initscr();
    keypad(stdscr, TRUE);    // Habilita as teclas especiais (setas)
nodelay(stdscr, TRUE);   // getch() não bloqueia o jogo
    noecho();          // Não mostra as teclas digitadas
    curs_set(0);       // Esconde o cursor

    gameInit();
    gameLoop();
    gameEnd();

    endwin();

    return 0;
}