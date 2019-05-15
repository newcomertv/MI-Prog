#include <ncurses.h>

int main (){
    int x,y;

    initscr();
    getmaxyx(stdscr,y,x);
    printw("La taille de l'ecran est %d et %d \n",y,x);
    for (int i=0;i<5;i++){
        mvprintw((y/2)-2,(x/2)-2+i,"X"); // Ligne du haut
        mvprintw((y/2)+2,(x/2)-2+i,"X"); // ligne du bas
    }
    for (int j=0;j<5;j++){
        mvprintw((y/2)-2+j,(x/2)-2,"X");//colonne gauche 
        mvprintw((y/2)-2+j,(x/2)+2,"X");  //colonne droite
    }
    mvprintw(y/2,x/2,"X");
    refresh();
    getch();
    endwin();

    return 0;
}