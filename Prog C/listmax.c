#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* int length_of_int_array(int a[])
{
  int size = sizeof(a) / sizeof(int);
  return size;
} */


int max_of_array(int array[], int size)
{
  int i = 1;
  int max=array[0];
  int* test = array;
  while(size > i){
    if (max < array[i]) max = array[i];
    i++; /* code */
  }
  return max;
}

int main(int argc, char const *argv[]) {
  int array[]={1,2,10,3,4,6,7,8,9};
  int size = sizeof(array) / sizeof(int);
  printf("%d\n", size);
  int max = max_of_array(array, size);
  printf("%d\n", max);
  return 0;
}
