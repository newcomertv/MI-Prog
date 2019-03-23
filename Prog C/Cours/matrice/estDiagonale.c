#define N 20
typedef int line[N];
typedef line matrice[N];

int estDiagonale(matrice M)
{
    int nb = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j && M[i][j] != 0)
                return 0;
            if (i == j && M[i][j] != 0)
                nb++; /* code */
        }
        return 1;
    }