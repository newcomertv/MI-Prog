#include <stdio.h>
#include <stdlib.h>



int win(int player)
{
  printf("Player %d won!\n", player);
}

void log(int player, int choice/* arguments */) {
  printf("Player %d chose %d\n", player, choice);/* code */
}


int joueur_virtuel (int max_choice, int baton){
  int choice;
  if (baton<=max_choice)
    choice=baton;
  else
    switch (baton%max_choice) {
    case 0 : choice=max_choice-1;
      break;
    case 1 : choice=1;
      break;
    default : choice= baton%max_choice -1;
    }
  return choice;
}

void draw_sticks(int baton/* arguments */)
{
  for (size_t i = 0; i < baton; i++) {
  printf("|");  /* code */
  }/* code */
}

void game_loop(int baton, int player)
{
  int choice;
  draw_sticks(baton);
  if (player == 1)
    {
      printf("how many sticks do you want to remove?\n choose between 1 and 3\n");
      scanf("%d", &choice);
      log(player,choice);
      if ((baton - choice)==0) win(1);
      else {game_loop((baton - choice), 2);}
    }
  if (player == 2)
  {
    choice=joueur_virtuel(3,baton);
    log(player,choice);
    if ((baton - choice)==0) win(2);
    if (baton - choice)game_loop((baton - choice), 1);
  }
}

void game_init(){
  int baton;
  printf("Avec combien d'allumettes veux tu jouer?\n");
  scanf("%d", &baton);
  game_loop(baton,1);
}

int main(int argc, char const *argv[]) {
game_init();
/* code */
  return 0;
}
