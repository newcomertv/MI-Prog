#include <stdlib.h>

#define N 10

typedef int line[N];
typedef line matrice[N];

int nombreDeZeros(matrice matrix)
{
    int count1 = 0, count2 = 0, counter = 0;
    while (count1 < N)
    {
        while (count2 < N)
        {
            if (matrix[count1][count2] == 0)
                counter++;
            count2++;
        }
        count2 = 0;
        count1++;
    }
    return counter;
}

/*
matrice matrice_build()
{
    matrice placeholder[N][N];
    int i = 0, j = 0;
    while (i < N)
    {
        while (j < N)
        {
            placeholder[i][j] = (i + j);
            j++;
        }
        j = 0;
        i++;
    }
    return placeholder[];
}
*/

int main(int argc, char const *argv[])
{
    return 0;
}
