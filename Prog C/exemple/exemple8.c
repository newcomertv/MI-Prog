#include <stdio.h>

int f(int x) {
  x=x+1;
  printf("%d\n",x);
  return x;
}

int main () {
  int x = 3;
  printf("%d\n",x);
  x=f(x);
  printf("%d\n",x);
  return 0;
}
