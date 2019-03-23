

void moyenne(int n)
{
    float somme = 0;
    float note;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &note);
        somme += note;
        /* code */
    }
    printf("la moyenne est : %f \n", somme / n);
}
