#include <stdio.h>
#include <string.h>

#define Max_str 50
#define Max_Nbr 20

typedef struct contact
{
    char Name[Max_str];
    char PName[Max_str];
    char Sexe;
    char Phone[Max_Nbr];
    char MPhone[Max_Nbr];
    struct contact *Next;
} carnet;

void display_cont(struct contact *person)
{
    printf("Name : %c \n", person->Name);
    printf("First Name : %c \n", person->PName);
    printf("Sex : %c \n", person->Sexe);
    printf("\n Phone : %c", person->Phone);
    printf("\n Mobile Phone : %c", person->MPhone);
}

struct contact *make_contact()
{
    struct contact *placeholder = malloc(sizeof(struct contact));
    printf("Name:");
    scanf("%c", &placeholder->Name);
    printf("First Name :");
    scanf("%c", &placeholder->PName);
    printf("Sex?");
    scanf("%c", &placeholder->Sexe);
    printf("Phone number:");
    scanf("%c", &placeholder->Phone);
    printf("mobile?");
    scanf("%c", &placeholder->MPhone);
    return placeholder;
}

void add_contact(struct contact *new_element, carnet *container)
{
    if (container->Next == NULL)
    {
        container->Next = new_element;
    }
    else
    {
        add_contact(new_element, container->Next);
    }
}

int match(char list[], char element)
{
    int value = 0;
    for (int i = 0; i < length(list); i++)
    {
        if (list[i] == element)
            value++;
    }
    return value;
}

void search_contact(char starting_letters[], carnet *container)
{
    int count = length(starting_letters);
    int i, dubble = 0;
    carnet *results;
    while (container->Next != NULL)
    {
        i = 0;
        while (i < count)
        {
            if (starting_letters[i] == container->Name[0] && dubble == 0)
            {
                add_contact(container, results);
                dubble++;
            }
        }
        dubble = 0;
    }
    while (results->Next != NULL)
    {
        display_cont(results);
        printf("\n Nxt Nxt Nxt \n");
        results = results->Next;
    }
}

void search_contact_conjoint(char starting_letters[], carnet *container)
{
    int i = 0, dubble = 0, count = length(starting_letters);
    carnet *results;
    while (container->Next != NULL)
    {
        if (match(starting_letters, container->Name[0]) == 0)
        {
            container = container->Next;
        }
        else if (match(starting_letters, container->Name[0]) != 0 && match(starting_letters, container->Next->Name[0] == 0))
        {
            add_contact(container, results);
            container = container->Next;
            add_contact(container, results);
        }
        else
        {
            add_contact(container, results);
        }
        container = container->Next;
    }
    while (results->Next != NULL)
    {
        display_cont(results);
        printf("\n Nxt Nxt Nxt \n");
        results = results->Next;
    }
}

int main(int argc, char const *argv[])
{
    carnet *test;
    struct contact *n1 = make_contact();
    test->Next = n1;
    return 0;
}
