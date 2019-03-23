// fonction : joueur virtuel au jeu des allumettes.
// parametres : entiers p (nombre max autoris�) et r (nombre restant)
// resultat : entier (nombre d'allumettes � jouer)
// preconditions : r et p positifs strictement
// postconditions :
int joueur_virtuel (int p, int r){
  int i;
  if (r<=p)
    i=r;
  else
    switch (r%p) {
    case 0 : i=p-1;
      break;
    case 1 : i=1;
      break;
    default : i= r%p -1;
    }
  return i;
}
