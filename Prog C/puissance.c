#include <stdio.h>
#include <math.h>

int main(){
  float x;
  float perimetre;
  
  printf("La longueur du coté : ");
  scanf("%f", &x);
  perimetre=x*4.;
  printf("La périmètre de votre carré est : %f \n", perimetre);
  x=sqrt(x*x+x*x);
  printf("La taille de votre diagonale est : %f \n", x);
  return 0;
  }
