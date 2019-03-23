#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float coef[100];
    int degre; /* data */
} polynome;

polynome poly_build(float coef[], int degre)
{
    polynome placeholder;
    placeholder.degre = degre;

    int count = 0;
    while (placeholder.degre > count)
    {
        placeholder.coef[count] = coef[count];
        count++;
    }
    return placeholder;
}

void deriveePoly(polynome polynb)
{
    polynome derived = poly_build(polynb.coef, polynb.degre);
    int count = 1;
    while (100 > count)
    {
        derived.coef[count] = (count + 1) * polynb.coef[count + 1];
        count++; /* code */
    }
    count = 0;
    while (count < 100)
    {
        polynb.coef[count] = derived.coef[count]; /* code */
        printf(" %f ", polynb.coef[count]);
        count++;
    }
}

int main(int argc, char const *argv[])
{
    //float a[] = init_float_arr(100);
    float x[100] = {3.,
                    2.,
                    4.};
    int b = 3;
    polynome y = poly_build(x, b);
    deriveePoly(y);
    return 0;
}
