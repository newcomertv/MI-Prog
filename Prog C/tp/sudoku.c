#include <stdio.h>

typedef int grille[9][9];

void afficher_grille(grille grid)
{
    int i = 0, j = 0;
    while (i < 9)
    {
        while (j < 9)
        {
            printf("%d  ", grid[i][j]);
        }
        printf("\n");
    }
}

void calcul_ligne_colonne_bloc(grille grid, int ligne[], int colonne[], int bloc[], int x, int y)
{
}