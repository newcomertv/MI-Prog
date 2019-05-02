data Tree a = Vide | Noeud (Tree a) a (Tree a)


bien_forme_arbrech a = case a of {
Vide -> True;
Noeud g x d ->
 bien_forme_arbrech g && bien_forme_arbrech d
 && est_sup x g && est_inf x d
}


est_sup x a = case a of {
 Vide -> True; Noeud g y d -> x>=y && est_sup x d
}

est_inf x a = case a of {
 Vide -> True; Noeud g y d -> x<=y && est_inf x g
} 

arbrech_of_list l =
    foldr insere_dans_arbrech Vide l


insere_dans_arbrech x a = case a of {
    Vide -> Noeud Vide x Vide;
    Noeud g y d ->
    if x<=y then Noeud (insere_dans_arbrech x g) y d
    else Noeud g y (insere_dans_arbrech x d)
   }


list_of_arbrech a = case a of {
    Vide -> [];
    Noeud g x d ->
    (list_of_arbrech g) ++ [x] ++ (list_of_arbrech d)
   }




bien_forme_tas a = case a of {
    Vide -> True;
    Noeud g x d ->
     bien_forme_tas g && bien_forme_tas d
     && est_sup_tas x g && est_sup_tas x d
    }



est_sup_tas x a = case a of {
     Vide -> True;
     Noeud _ y _ -> x>=y
    }





tas_of_list l =
        foldr insere_dans_tas Vide l
       

insere_dans_tas x a = case a of {
        Vide -> Noeud Vide x Vide;
        Noeud g y d ->
        if x<=y then Noeud (insere_dans_tas x g) y d
        else Noeud (insere_dans_tas y g) x d
       }