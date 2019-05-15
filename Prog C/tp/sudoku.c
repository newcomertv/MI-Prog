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
    int i = 0, j = 0, count = 0;
    int bloc_x = x / 3;
    int bloc_y = y / 3;
    while (count < 9)
    {
        ligne[count] = grid[count][x];
        colonne[count] = grid[y][count];
        count++;
    }
    for (int local = 0; local < 3; local++)
    {
        bloc[local] = grid[bloc_x + local][bloc_y];
    }
    for (int local = 0; local < 3; local++)
    {
        bloc[local + 3] = grid[bloc_x + local][bloc_y + 1];
    }
    for (int local = 0; local < 3; local++)
    {
        bloc[local + 6] = grid[bloc_x + local][bloc_y + 2];
    }
}

int unique_solution(int ligne[9], int colonne[9], int bloc[9])
{
    int storage[10], results[10];
    int i = 0, n = 0;
    while (i < 9)
    {
        switch (ligne[i])
        {
        case 0:
            storage[0]++;
            break;
        case 1:
            storage[1]++;
            break;
        case 2:
            storage[2]++;
            break;
        case 3:
            storage[3]++;
            break;
        case 4:
            storage[4]++;
            break;
        case 5:
            storage[5]++;
            break;
        case 6:
            storage[6]++;
            break;
        case 7:
            storage[7]++;
            break;
        case 8:
            storage[8]++;
            break;
        default:
            storage[9]++;
        }
        switch (colonne[i])
        {
        case 0:
            storage[0]++;
            break;
        case 1:
            storage[1]++;
            break;
        case 2:
            storage[2]++;
            break;
        case 3:
            storage[3]++;
            break;
        case 4:
            storage[4]++;
            break;
        case 5:
            storage[5]++;
            break;
        case 6:
            storage[6]++;
            break;
        case 7:
            storage[7]++;
            break;
        case 8:
            storage[8]++;
            break;
        default:
            storage[9]++;
        }
        switch (bloc[i])
        {
        case 0:
            storage[0]++;
            break;
        case 1:
            storage[1]++;
            break;
        case 2:
            storage[2]++;
            break;
        case 3:
            storage[3]++;
            break;
        case 4:
            storage[4]++;
            break;
        case 5:
            storage[5]++;
            break;
        case 6:
            storage[6]++;
            break;
        case 7:
            storage[7]++;
            break;
        case 8:
            storage[8]++;
            break;
        default:
            storage[9]++;
        }
    }
    for (int k = 0; k < 10; k++)
    {
        if (storage[k] == 0)
        {
            results[n] = k;
            n++;
        }
    }
    if (n == 1)
        return results[0];
    return 0;
}
int complete_grille_une_etape(grille exemple)
{
    int i = 0, j = 0, ligne[9], colonne[9], bloc[9];
    while (i < 9)
    {
        while (j < 9)
        {
            if (exemple[i][j] == 0)
            {
                calcul_ligne_colonne_bloc(exemple, ligne, colonne, bloc, i, j);
                if (unique_solution(ligne, colonne, bloc) == 0)
                    return 0;
            }
        }
    }
    return 1;
}