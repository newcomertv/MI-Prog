#include <stdio.h>
#include <stdlib.h>

//int* arr = [1,6,-3,4];


void permutation(int arr[], int size)
{
int a = arr[size-1];
for(size_t i = size; i > 0; i--)
{
    arr[i]=arr[i-1];/* code */
}
arr[0]= a;
printf("%d\n", a);
}

int main(int argc, char const *argv[])
{
  int arr[]={1,2,3,4};
permutation(arr,4);
    return 0;
}
