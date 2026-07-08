#include <ncurses.h>

#include "input.h"

void processInput(Snake *snake)
{
    int key = getch();

    switch (key)
    {
        case KEY_UP:
            snake->direction = UP;
            break;

        case KEY_DOWN:
            snake->direction = DOWN;
            break;

        case KEY_LEFT:
            snake->direction = LEFT;
            break;

        case KEY_RIGHT:
            snake->direction = RIGHT;
            break;
    }
}