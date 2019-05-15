#include <stdio.h>

int afficher_tab(int tab[],int size){
    /*Affiche la taille d'un tableau donné*/
    
    for (int i=0;i<size;i++){
        printf("%d",tab[i]);//pas e retour chariot car pas lisible
    }
    
    return 0;
}

int tri_bulle(int tab[],int size){
    int neutre=0;
    for (int i =0;i<size-1;i++){
        for (int j=0;j<size-1-i;j++){
            if (tab[j]>tab[j+1]){
                neutre=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=neutre;
                neutre=0;//clear pour etre certain qu'il n'y ai aucun probleme
            }
        }
    }
    return 0;
}

int main(){
    
    int tab[5]={5,3,2,4,1};
    
    printf("[");
    afficher_tab(tab,5);
    printf("]\n");
    tri_bulle(tab,5);
    printf("[");
    afficher_tab(tab,5);
    printf("]\n");//lisibilité oblige
    return 0;
}
//TP6 les points