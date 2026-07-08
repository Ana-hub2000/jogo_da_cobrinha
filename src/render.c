#include <ncurses.h>

#include "render.h"

void drawGame(const Snake *snake, const Food *food, int score)
{
    clear();

    box(stdscr, 0, 0);

    mvprintw(1, 2, "Snake em C");
    mvprintw(2, 2, "Score: %d", score);

    for (int i = 0; i < snake->length; i++)
    {
        if (i == 0)
        {
            mvprintw(
                snake->body[i].y,
                snake->body[i].x,
                "@"
            );
        }
        else
        {
            mvprintw(
                snake->body[i].y,
                snake->body[i].x,
                "O"
            );
        }
      
    }
    mvprintw(food->y, food->x, "*");

    refresh();
}