#define N 20
typedef int line[N];
typedef line matrice[N];

void addition(matrice a, matrice b, matrice c)
{
    int i = 0, j = 0;
    while (i < N)
    {
        while (j < N)
        {
            c[i][j] = a[i][j] + b[i][j];
            j++;
        }
        j = 0;
        i++;
        /* code */
    }
}
