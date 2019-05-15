#include <stdio.h>

typedef struct
{
  int x;
  int y;
} point;

// fonction : affichage d'un point
// arguments : un point
// retour :  rien
// pre-conditions :
// post-conditions :

void afficher_point(point p)
{
  printf("(%d, %d)", p.x, p.y);
  return;
}

//fonction : Affichage d'un pointeur sur un point
//arg : un point et un pointeurs qui pointe sur ce meme point
//retour : rien
//pre-cond :
//post-cond :

void afficher_pointeur_point(point p, point *pt)
{
  pt = &p;
  printf("l'adresse de p est : %d \n", *pt);
  return;
}

// fonction : affichage d'un tableau de points
// arguments : un tableau de points et sa taille
// retour :  rien
// pre-conditions :  le second parametre est la taille du premier
// post-conditions :

void afficher_point_tab(point t[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    afficher_point(t[i]);
    printf("\t");
  }
  printf("\n");
  return;
}

int main()
{
  point tp[36] = {{3, 1}, {3, 5}, {4, 1}, {5, 3}, {6, 2}, {3, 2}, {5, 2}, {3, 4}, {3, 3}, {6, 1}, {4, 4}, {2, 2}, {6, 6}, {5, 5}, {3, 6}, {2, 6}, {1, 2}, {2, 3}, {6, 4}, {5, 6}, {4, 3}, {4, 6}, {2, 4}, {1, 1}, {6, 5}, {4, 5}, {2, 1}, {5, 4}, {2, 5}, {5, 1}, {1, 3}, {1, 4}, {1, 5}, {6, 3}, {4, 2}, {1, 6}};
  point *pt;
  afficher_point_tab(tp, 36);
  afficher_pointeur_point(tp[0], pt);
  return 0;
}
