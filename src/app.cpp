//
// Created by Alex Pinchuk on 23.06.2022.
//

#include "app.h"
#include <ncurses.h>
#include <ctime>
#include <string>
#include "app/core/essence/classkindsenemy.cpp"
#include <termios.h>
#include <unistd.h>
#include "app/core/menu/menu.cpp"

const int upKey=65;
const int downKey=66;
const int leftKey=68;
const int rightKey=67;
const int returnKey=13;


class App{
public:
    static int run() {
        int key=0;

        initscr();
        mvprintw(10, 36, "by Alex");
        mvprintw(20, 30, "Press Return / Enter");
        refresh();

        do {
            key = _getch();
        }while(key != returnKey);

        mvprintw(10, 36, "       ");
        mvprintw(20, 30, "                    ");

        mvprintw(10, 20, "Start");
        mvprintw(12, 20, "Exit");
        mvprintw(10, 19, "");
        refresh();
        key = 0;
        do {
            key = _getch();
            if (key == upKey) {
                mvprintw(10, 19, "");
                refresh();
            }

            if (key == downKey) {
                mvprintw(12, 19, "");
                refresh();
            }
        }while(key != returnKey);

//        _getch();
//        endwin();

        return 0;
    }

    static int _getch() {
    struct termios oldt,
            newt;
    int ch;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    return ch;
}
};