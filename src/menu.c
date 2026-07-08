#include <ncurses.h>

#include "menu.h"

int showMenu(int *maxScore)
{
    int option = 0;
    int key;

    while (1)
    {
        clear();

        box(stdscr, 0, 0);

        mvprintw(2, 30, "S N A K E");

        mvprintw(5, 5, "Use as setas para navegar");
        mvprintw(6, 5, "ENTER para selecionar");

        if (option == 0)
            attron(A_REVERSE);
        mvprintw(9, 10, "Jogar");
        if (option == 0)
            attroff(A_REVERSE);

        if (option == 1)
            attron(A_REVERSE);
        mvprintw(11, 10, "Definir pontuacao");
        if (option == 1)
            attroff(A_REVERSE);

        if (option == 2)
            attron(A_REVERSE);
        mvprintw(13, 10, "Sair");
        if (option == 2)
            attroff(A_REVERSE);

        mvprintw(17, 5, "Pontuacao para vencer: %d", *maxScore);

        refresh();

        key = getch();

        switch (key)
        {
            case KEY_UP:
                if (option > 0)
                    option--;
                break;

            case KEY_DOWN:
                if (option < 2)
                    option++;
                break;

            case 10:
            case KEY_ENTER:

                if (option == 0)
                {
                    return 1;
                }

                if (option == 1)
                {
                    echo();
                    curs_set(1);

                    clear();

                    box(stdscr, 0, 0);

                    mvprintw(5, 5, "Digite a pontuacao para vencer:");

                    move(7, 5);

                    scanw("%d", maxScore);

                    if (*maxScore <= 0)
                        *maxScore = 100;

                    noecho();
                    curs_set(0);
                }

                if (option == 2)
                {
                    return 0;
                }

                break;
        }
    }
}