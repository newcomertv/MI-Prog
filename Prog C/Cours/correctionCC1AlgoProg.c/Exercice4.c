#include <stdio.h>

void cinqPremiers(int x)
{
    int compteur = 5;
    int diviseur, trouve;
    x--;
    while (compteur > 0 && x > 0)
    {
        diviseur = 2;
        trouve = 0;
        while (diviseur < x && !trouve)
        {
            if (x % diviseur == 0)
                trouve = 1;
            else
                diviseur++;
        } //fin de boucle while interieure
        if (trouve == 0)
        {
            printf("%d est premier", diviseur); /* code */
            compteur--;
        }
        x--;
    } //fin de boucle while exterieure
} //fin de fonction