void afficheheurePlus42(int h, int m)
{
    if ((m + 42) > 59)
    {
        if ((h + 1) > 23)
        {
            h = 0;
            m = (m + 42) - 60; /* code */
        }
        else
        {
            h++;
            m = (m + 42) - 60;
        }
        /* code */
    }
    else
    {
        m += 42;
    }
    printf("%d : %d \n", h, m);
}

int main()
{
    int h, m;
    printf("Entrez les heure: \n");
    scanf("%d", &h);
    printf("Entrez les minute: \n");
    scanf("%d", &m);
    printf("Dans 42min il sera: ");
    afficheheurePlus42(h, m);
    return 1;
}