#include <stdio.h>

int main(){
  int x;
  
  printf("Ecrivez le nombre représentant le mois : ");
  scanf("%d",&x);
  if (x==2){
    printf("Il a 28 jours dans ce mois\n");
  }
  
  else if ((x==1)||(x==3)||(x==5)||(x==7)||(x==8)||(x==10)||(x==12)){
    printf("Il a 31 jours dans ce mois\n");
  }
  
  else {
    printf("Il a 30 jours dans ce mois\n");
  }
}
