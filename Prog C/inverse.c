#include <stdio.h>
#include <stdlib.h>

void inverse(int tab[],int size)
{
    int i,temp;
    int j = size-1;
    while(i<j)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
    
}