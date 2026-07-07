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