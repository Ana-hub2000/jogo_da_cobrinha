#include "snake.h"

void initSnake(Snake *snake)
{
    snake->length = 3;
    snake->direction = RIGHT;

    snake->body[0].x = 20;
    snake->body[0].y = 10;

    snake->body[1].x = 19;
    snake->body[1].y = 10;

    snake->body[2].x = 18;
    snake->body[2].y = 10;
}
void moveSnake(Snake *snake)
{
    // Move o corpo de trás para frente
    for (int i = snake->length - 1; i > 0; i--)
    {
        snake->body[i] = snake->body[i - 1];
    }

    switch (snake->direction)
{
    case UP:
        snake->body[0].y--;
        break;

    case DOWN:
        snake->body[0].y++;
        break;

    case LEFT:
        snake->body[0].x--;
        break;

    case RIGHT:
        snake->body[0].x++;
        break;
}
}