#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int int_of_char (char c) {
return (c-65);
}
char char_of_int (int n) {
return (n+65);
}

char rotation(char contt, int rot)
{
  int c = int_of_char(contt);
  c = c + rot;
  c = c%26;
  char b = char_of_int(c);
  return b;
}

char* rotate(char word[], int count)
{
  if (count >= strlen(word)) return word;
  word[count] = rotation(word[count],13);
  rotate(word, ++count);
}

int main(int argc, char const *argv[]) {

  char word[]="BONJOUR";
  char *a = rotate(word,0);
  printf("%s", a);
  /* code */
  return 0;
}
