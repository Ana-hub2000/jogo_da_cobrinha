#include <ncurses.h>

#include "game.h"
#include "snake.h"

static Snake snake;

void gameInit(void)
{
    initSnake(&snake);
}

void gameLoop(void)
{
    clear();

    /* Desenha a borda */
    box(stdscr, 0, 0);

    /* Título */
    mvprintw(1, 2, "Snake em C");

    /* Desenha a cobra */
    for (int i = 0; i < snake.length; i++)
    {
        if (i == 0)
        {
            mvprintw(
                snake.body[i].y,
                snake.body[i].x,
                "@"
            );
        }
        else
        {
            mvprintw(
                snake.body[i].y,
                snake.body[i].x,
                "O"
            );
        }
    }

    refresh();

    getch();
}

void gameEnd(void)
{

}