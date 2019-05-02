#include <stdlib.h>

typedef struct list
{
    int value;
    struct list *next;
} mylist;

struct list
{
    int value;
    struct list *next;
};

typedef struct list mylist;
typedef mylist *list;

//Exercices 5

list empty_list()
{
    return NULL;
}

int head_list(list l)
{
    return l->value;
}

list tail_list(list l)
{
    return l->next;
}

int lst_list(list l)
{
    if (l->next == NULL)
    {
        return l->value;
    }
    lst_list(tail_list(l));
}

list add_fst_list(list l, int e)
{
    list placeholder = (list)malloc(sizeof(list));
    placeholder->value = e;
    placeholder->next = l;
    return placeholder;
}

//mabye
list add_lst_list(list l, int e)
{
    list a = l;
    while (l->next == NULL)
    {
        a = a->next;
    }
    list b = (list)malloc(sizeof(list));
    b->next = NULL;
    b->value = e;
    a->next = b;
    return l;
}

//working
list rm_fst_list(list l)
{
    list a = tail_list(l);
    free(l);
    return a;
}

//maybe
list rm_lst_list(list l)
{
    list a = l->next;
    list b = l;
    while (a->next != NULL)
    {
        b->next = a;
        a = a->next;
    }
    free(b->next);
    b->next = NULL;
    return l;
}

//working
int length_list(list l)
{
    int count = 0;
    while (l->next != NULL)
    {
        l = l->next;
        count++;
    }
    return count;
}

//maybe
list add_i_list(list l, int i)
{
    list a = l;
    for (int t = 0; t < i; t++)
    {
        a = a->next;
    }
    list b = (list)malloc(sizeof(list));
    b->value = i;
    b->next = a->next;
    a->next = b;
    return l;
}