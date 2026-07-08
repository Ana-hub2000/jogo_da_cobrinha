#include "food.h"
#include <stdlib.h>


void initFood(Food *food)
{
    food->x = rand() % 50 + 2;
    food->y = rand() % 20 + 2;
}