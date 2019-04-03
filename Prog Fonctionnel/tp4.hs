
type arbre = feuille | branche of int * arbre * arbre

type ’a arbre = feuille | branche of ’a * ’a arbre * ’a arbre

taille a =
case of a
feuille -> 0
| branche(_,g,d) ->
1 + taille g + taille d