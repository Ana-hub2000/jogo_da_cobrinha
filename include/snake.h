#ifndef SNAKE_H
#define SNAKE_H

#define MAX_SNAKE_SIZE 100

typedef enum
{
    UP,
    DOWN,
    LEFT,
    RIGHT

} Direction;

typedef struct
{
    int x;
    int y;

} Position;

typedef struct
{
    Position body[MAX_SNAKE_SIZE];
    int length;
    Direction direction;

} Snake;

void initSnake(Snake *snake);
void moveSnake(Snake *snake);

#endif