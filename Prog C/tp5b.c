#include <ncurses.h>
/*Ce programme genere un "#" qui descend le terminal de haut en bas de gauche a droite puis de droite a gauche en boucle jusqu'a recouvrir toute la page
Attention le fait de redim la page arrete le processus */
int main (){
    int x,y;

    initscr();
    getmaxyx(stdscr,y,x);
    for(int j=0;j<y;j++){
        if (j%2==0){
            for(int i=0;i<x;i++){
                mvprintw(j,i,"#");
                napms(50);
                refresh();
            }
        }
        else{
            for(int i=x;i>=0;i--){
                mvprintw(j,i,"#");
                napms(50);
                refresh();
            }
        }
    }
    getch();   
    endwin();
    return 0;
}