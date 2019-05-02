data Arbre a = Vide 
                |Noeud (Arbre a) a (Arbre a)



value = Noeud ((Noeud (Vide 3 Noeud (Vide 2 Vide)) 1 (Noeud (Vide 4 Vide))



recherche (v a) = case a of 
    Vide -> False
    Noeud a1 n a2 -> ((v==n) || (recherche v a1) || (recherche v a2))



taille a = case a of
    Vide -> 0
    Noeud a1 n a2 -> 1+ (taille a1) + (taille a2)



parcour a = case a of
    Vide -> []
    Noeud a1 n a2 -> n : (parcour a1) ++ (parcour a2)



max x y = if x <= y then y else x
{- (\x -> \y -> if x <= y then y else x) -}



hauteur a = case a of
    Vide-> 0
    Noeud a1 _ a2 -> 1+ ((\x -> \y -> if x <= y then y else x) (hauteur a1)(hauteur a2))