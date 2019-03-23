#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int uN(int n)
{
    int result = 1;
 for(int i = 1 ; i <= n ; i++){
     result += (1/i);
 }
 return result;
}

int approx(int epsilon, int counter)
{
    if ((uN(counter++)-uN(counter)) < epsilon /3) return counter;
    approx(epsilon , ++counter);
}

void primary(int epsilon)
{
    int n = approx(epsilon, 0);
    n = uN(++n);
    printf("e - %d < %d",n , epsilon);
}

int main(int argc, char const *argv[])
{
    int epsilon= 1;
    primary(epsilon);

    return 0;
}
