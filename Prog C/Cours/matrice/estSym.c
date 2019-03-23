#define N 20
typedef int line[N];
typedef line matrice[N];

int estSym(matrice M)
{
    int i = 0, j = 0;
    while (i < N)
    {
        while (j < N)
        {
            if (M[i][j] != M[i][j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}