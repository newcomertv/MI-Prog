#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int int_of_char (char c) {
return (c-65);
}
char char_of_int (int n) {
return (n+65);
}

char rotation(char contt, int cypher)
{
  int c = int_of_char(contt);
  c = c + cypher;
  c = c%26;
  char b = char_of_int(c);
  return b;
}

char* rotate(char word[], int count, int cypher)
{
  if (count >= strlen(word)) return word;
  word[count] = rotation(word[count],cypher);
  rotate(word, ++count, cypher);
}

int main(int argc, char const *argv[]) {
  int cypher;
  char word[99];
  printf("Enter a word you would like to cypher:\n");
  scanf("%s",word);
  printf("Enter the cypher scheme you would like to use:\n");
  scanf("%d",&cypher);
  char *a = rotate(word,0,cypher);
  printf("%s", a);
  /* code */
  return 0;
}
