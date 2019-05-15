#include <stdio.h>

typedef struct point {
        int x;
        int y;
    } point;
    
point tp [36] = {{3,1}, {3,5}, {4,1},{5,3},{6,2},{3,2}, {5,2}, {3,4},  {3,3}, {6,1},{4,4}, {2,2}, {6,6},{5,5} ,{3,6} , {2,6} ,{1,2}, {2,3},{6,4},  {5,6} , {4,3},{4,6} , {2,4}, {1,1},{6,5}, {4,5}, {2,1}, {5,4}, {2,5},{5,1},{1,3}, {1,4}, {1,5}, {6,3}, {4,2}, {1,6}  };

int afficher_tab(point tab[],int size){
    /*Affiche la taille d'un tableau donné*/
    
    for (int i=0;i<size;i++){
        printf("{%d %d}",tab[i].x,tab[i].y);//pas e retour chariot car pas lisible
    }
    
    return 0;
}

int bull_lexi(point tab[],int size){ //le tri par rapport au x marche mais les une fois les x egaux ils ne sont pas trié par rapport a la leur y:'(
    int xNeutre=0;
    int yNeutre=0;
    for (int i=0;i<size-2;i++){
        for (int j=0;j<size-1-i;j++){
            if (tab[j].x>tab[j+1].x){
                xNeutre=tab[j].x;
                yNeutre=tab[j].y;
                tab[j].x=tab[j+1].x;
                tab[j].y=tab[j+1].y;
                tab[j+1].x=xNeutre;
                tab[j+1].y=yNeutre;
            }
            else if ((tab[j].x==tab[j+1].x) && (tab[j].y>tab[j+1].y)){
                xNeutre=tab[j].x;
                yNeutre=tab[j].y;
                tab[j].x=tab[j+1].x;
                tab[j].y=tab[j+1].y;
                tab[j+1].x=xNeutre;
                tab[j+1].y=yNeutre;
            }

        }
    }
    return 0;
}
int bull_dia(point tab[],int size){
    int xNeutre=0;
    int yNeutre=0;
    for (int i=0;i<size-2;i++){
        for (int j=0;j<size-1-i;j++){
            if (tab[j].x+tab[j].y>tab[j+1].x+tab[j+1].y){
                xNeutre=tab[j].x;
                yNeutre=tab[j].y;
                tab[j].x=tab[j+1].x;
                tab[j].y=tab[j+1].y;
                tab[j+1].x=xNeutre;
                tab[j+1].y=yNeutre;
            }
            else if (tab[j].x+tab[j].y>tab[j+1].x+tab[j+1].y){
                if (tab[j].x>tab[j+1].x){
                    xNeutre=tab[j].x;
                    yNeutre=tab[j].y;
                    tab[j].x=tab[j+1].x;
                    tab[j].y=tab[j+1].y;
                    tab[j+1].x=xNeutre;
                    tab[j+1].y=yNeutre;
                }
            }

        }
    }
    return 0;
}
int main(){
    
    
    printf("[");
    afficher_tab(tp,36);
    printf("]\n");
    bull_lexi(tp,36);
    printf("[");
    afficher_tab(tp,36);
    printf("]\n");//lisibilité oblige
    bull_dia(tp,36);
    printf("[");
    afficher_tab(tp,36);
    printf("]\n");//lisibilité oblige
    return 0;
}