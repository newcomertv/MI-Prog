#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exist(char arr[], char cara)
{
    int check = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == cara)
            check++;
        /* code */
    }
    if (check > 0)
        return 0;
    else
        return 1;
}

struct book
{
    char title[50];
    char author[50];
    int ID;
    int action; /* data */
};

struct book book_constr(char *title, char *author, int ID, int action)
{
    struct book var;
    var.title = title;
    var.author = author;
    var.ID = ID;
    var.action = action;
    return var;
}

float *arrayadd(float *array, int const size, int location, float element)
{
}

float *arraymodify(int instruction, float *array, int const size, int location, float element)
{
    switch (instruction)
    {
    case 1 /* constant-expression */:
        return arrayadd(array, size, location, element);
        break;
    case 2:
        return arrayrmv(array, size, location);
        break;
    case 3:
        return arrayrepelm(array, size, element);
        break;
        /* code */
    default:
        exit(-1);
        break;
    }
}

int dichotomie()
{
}
