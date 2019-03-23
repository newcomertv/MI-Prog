#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int int_of_char(char c)
{
    return (c - 65);
}
char char_of_int(int n)
{
    return (n + 65);
}

int max_of_array(int array[])
{
    int i = 0;
    int check;
    int max = 0;
    while (26 > i)
    {
        if (max < array[i])
        {
            max = array[i];
            check = (i + 1);
        }
        i++; /* code */
    }
    printf("%d  check\n", check);
    return check;
}

char recchar(char string[])
{
    int x;
    int score[26];
    for (int i = 0; i < 26; i++)
    {
        score[i] = 0; /* code */
    }
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%d  i\n", i);
        x = int_of_char(string[i]);
        printf("%d  x, %c    string[i]\n", x, string[i]);
        score[x - 1]++; /* code */
    }
    char b = char_of_int(max_of_array(score));
    printf("%c   b\n", b);
    return b;
}

int main(int argc, char const *argv[])
{
    char string[] = "PFOJCZOZSHHFSZODZIGTFSEISBHSSGHZSS";
    char best = recchar(string);
    printf("test %c\n", best);
    char a = char_of_int(32);
    printf("%c    a\n", a);
    return 0;
}
