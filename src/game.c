#include <ncurses.h>
#include <stdbool.h>


#include "game.h"
#include "snake.h"
#include "render.h"
#include "input.h"
#include "food.h"
static int maxScore = 100;
static Snake snake;
static Food food;
static int score = 0;
bool running = true;
void gameInit(int targetScore)
{
    initSnake(&snake);
    initFood(&food);

    score = 0;
    running = true;

    maxScore = targetScore;
}
void checkFoodCollision(void)
{
    if (snake.body[0].x == food.x &&
    snake.body[0].y == food.y)
{
    /* Copia a posição da cauda */
    snake.body[snake.length] = snake.body[snake.length - 1];

    /* Aumenta o tamanho da cobra */
    snake.length++;

    /* Soma os pontos */
    score += 10;

    /* Gera uma nova comida */
    initFood(&food);
}
}
void checkGameOver(void)
{
    /* Bateu na parede esquerda */
    if (snake.body[0].x <= 0)
        running = false;

    /* Parede direita */
    if (snake.body[0].x >= COLS - 1)
        running = false;

    /* Parede superior */
    if (snake.body[0].y <= 0)
        running = false;

    /* Parede inferior */
    if (snake.body[0].y >= LINES - 1)
        running = false;

   
    if (score >= maxScore)
    running = false;
}
void gameLoop(void)
{
    while (running)
    {
        processInput(&snake);

        moveSnake(&snake);

        checkFoodCollision();

        checkGameOver();

        drawGame(&snake, &food, score);

        napms(200);
    }

    clear();

    mvprintw(LINES / 2 - 1, COLS / 2 - 5, "GAME OVER");
    mvprintw(LINES / 2, COLS / 2 - 8, "Pontuacao: %d", score);
    mvprintw(LINES / 2 + 2, COLS / 2 - 14,
             "Pressione qualquer tecla");

    refresh();

    nodelay(stdscr, FALSE); // Permite que getch espere uma tecla
    getch();
}
void gameEnd(void)
{

}