#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
/*
#define ITERMAX 10000
#define LINES 50
#define COLS 50


int main()
{
    srand(time(NULL));
    long iter;
    int yi, xi;
    int y[3], x[3];
    int index;
    int maxlines, maxcols;

    /* initialize curses */
/*
    initscr();
    cbreak();
    noecho();

    clear();

    /* initialize triangle */

/*  maxlines = LINES - 1;
    maxcols = COLS - 1;

    y[0] = 0;
    x[0] = 0;

    y[1] = maxlines;
    x[1] = maxcols / 2;

    y[2] = 0;
    x[2] = maxcols;

    mvaddch(y[0], x[0], '0');
    mvaddch(y[1], x[1], '1');
    mvaddch(y[2], x[2], '2');

    /* initialize yi,xi with random values */
/*
    yi = rand() % maxlines;
    xi = rand() % maxcols;

    mvaddch(yi, xi, '.');

    /* iterate the triangle */

/*  for (iter = 0; iter < ITERMAX; iter++)
    {
        index = rand() % 3;

        yi = (yi + y[index]) / 2;
        xi = (xi + x[index]) / 2;

        mvaddch(yi, xi, '*');
        refresh();
    }
    /* done */
/*
    mvaddstr(maxlines, 0, "Press any key to quit");

    refresh();

    getch();
    endwin();

    exit(0);
}

*/

int main(int argc, char const *argv[])
{
    initscr();
    cbreak();
    noecho();

    clear();

    int x, y;
    getmaxyx(stdscr, y, x);

    mvprintw(x + 30, y + 10, "argument");

    refresh();

    getchar();
    endwin();
    exit(0);
    /* code */
    return 0;
}
