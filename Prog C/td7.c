

int **mat_function(int **original, int size)
{
    /* code */

    int **example = (int **)malloc(2 * sizeof(int *));
    for (int i = 0; i < size; i++)
    {
        example[i] = (int *)malloc(size * sizeof(int));
        /* code */
    }
    for (int i = 0; i < size; i++)
    {
        for (int g = 0; g < size; g++)
        {
            /* code */
        }
        /* code */
    }
}

int **somme(int **mat1, int **mat2, int n)
{
    int **answer = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        answer[i] = (int *)malloc(n * sizeof(int));
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        for (int g = 0; g < n; g++)
        {
            answer[i][g] = mat1[i][g] + mat2[i][g];
            /* code */
        }

        /* code */
    }

    return answer;
}

typedef struct
{
    float re;
    float im; /* data */
} complexe;

complexe *new_complexe(float re, float im)
{
    complexe *value = (complexe *)malloc(sizeof(complexe));
    value->re = re;
    value->im = im;
    return value;
}

void print_complexe(complexe *p)
{
    printf("re %f , im %f", p->re, p->im);
}

complexe *addition_complexe(complexe *comp1, complexe *comp2)
{
    complexe *comp3 = (complexe *)malloc(sizeof(complexe));
    comp3->im = comp1->im + comp2->im;
    comp3->re = comp1->re + comp2->re;
    return comp3;
}

complexe *mult_complexe(complexe *comp1, complexe *comp2)
{
    complexe *comp3 = (complexe *)malloc(sizeof(complexe));
    comp3->im = comp1->re * comp2->im + comp1->im * comp2->re;
    comp3->re = comp1->re * comp2->re - comp1->im * comp2->im;
    return comp3;
}

typedef struct
{
    int n;
    int *table;
} polynome;

polynome *new_poly(int n)
{
    polynome *value = (polynome *)malloc(sizeof(polynome));
    value->table = (int *)malloc((n + 1) * sizeof(int));
    value->n = n;

    for (int i = 0; value->n >= i; i++)
    {
        value->table[i] = 1;
    }

    return value;
}

void print_poly(polynome *p)
{
    printf("degre %d |", p->n);
    for (int i = 0; p->n >= i; i++)
    {
        printf("  %d x^%d  |", p->table[i], i);
    }
}

polynome *addition_polynome(polynome *p1, polynome *p2)
{
    if (p1->n == p2->n)
    {
        polynome *p3 = new_poly(p2->n);
        for (int i = 0; i <= p1->n; i++)
        {
            p3->table[i] = p1->table[i] + p2->table[i];
        }
        return p3;
    }
    else if (p1->n > p2->n)
    {
        polynome *p3 = new_poly(p1->n);
        for (int i = 0; i <= p1->n; i++)
        {
            if (i <= p2->n)
                p3->table[i] = p1->table[i] + p2->table[i];
            else
            {
                p3->table[i] = p1->table[i];
            }
        }
        return p3;
    }
    else
    {
        polynome *p3 = new_poly(p2->n);
        for (int i = 0; i <= p2->n; i++)
        {
            if (i <= p1->n)
                p3->table[i] = p1->table[i] + p2->table[i];
            else
            {
                p3->table[i] = p2->table[i];
            }
        }
        return p3;
    }
}

polynome *produit_polynome(polynome *p1, polynome *p2)
{
}