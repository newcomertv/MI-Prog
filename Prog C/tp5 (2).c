#include <ncurses.h>

int main (){

    initscr();
    printw("Hello World");
    mvprintw(15,10,"Hello World !");
    mvprintw(16,12,"Hello World !");
    mvprintw(16,20,"Hello World !");
    refresh();
    getch();
    endwin();

    return 0;
}