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

char rotation(char contt, int cypher)
{
    int c = int_of_char(contt);
    c = c + cypher;
    c = c % 26;
    char b = char_of_int(c);
    return b;
}

char *rotate(char word[], int count, int cypher)
{
    if (count >= strlen(word))
        return word;
    word[count] = rotation(word[count], cypher);
    rotate(word, ++count, cypher);
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

int mostcommon(char string[])
{
    int best = int_of_char(recchar(string));
    printf("%d     best\n", best);
    return best;
}

char *decode(char string[] /* arguments */)
{
    string = rotate(string, 0, (mostcommon(string) + 8));
    return string; /* code */
}

int main(int argc, char const *argv[])
{
    char var[] = "IYHCVSHSLAAYLSHWSBZMYLXBLUALLZASLL";
    strcpy(var, decode(var));
    printf("%s\n", var);
    return 0;
}
