//On cherche r1 = sqrt(x) - Approximation de r1 est:
//r2 = (r1+(x/r1))/2

float racineRec(float nb, float epsilon, float r1)
{
    if ((nb - (r1 * r1)) < epsilon)
        return r1;
    else
    {
        float r2 = (r1 + (nb / r1)) / 2.;
        return racineRec(nb, epsilon, r2);
    }
}

int main(int argc, char const *argv[])
{
    float x, eps;
    printf("Entrez x: \n");
    scanf("&f", &x);
    printf("Entrez eps: \n");
    scanf("&f", &eps);
    float racine = racineRec(x, eps, x);
    printf("La racine de %f vaut %f", x, racine);
    return 0;
}
