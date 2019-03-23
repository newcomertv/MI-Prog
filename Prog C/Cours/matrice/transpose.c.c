#define N 20
typedef int line[N];
typedef line matrice[N];

void transpose(matrice M)
{
    int tempo, i = 0, j = 0;
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            tempo = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = tempo;
        }
        /* code */
    }
}