#define N 20
typedef int line[N];
typedef line matrice[N];

int aux_multiplication(matrice a, matrice b, int i, int j)
{
    int storage = 0;
    int counter = 0;
    while (counter < N)
    {
        storage += a[i][counter] * b[counter][j];
        counter++; /* code */
    }
    return storage;
}

void multiplication(matrice a, matrice b, matrice c)
{
    int i = 0, j = 0;
    while (i < N)
    {
        while (j < N)
        {
            c[i][j] = aux_multiplication(a, b, i, j);
            j++;
        }
        j = 0;
        i++;
        /* code */
    }
}