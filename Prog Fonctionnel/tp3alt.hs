--exercice 1
longueur_l l = case l of 
    [] -> 0
    t:q -> 1 + (longueur_l q)

tete_l l = case l of
    [] -> 0
    t:q -> t

reste_l l = case l of 
    [] -> []
    t:q -> q

nieme l n = case l of 
    [] -> error("nieme element d'une liste pas definie")
    t:q -> if n == 0 then t
    else nieme q (n-1)

ajouter_e_fin e l = case l of 
    [] -> [e]
    t:q -> t:(ajouter_e_fin e q)

renverser l = case l of 
    [] -> []
    t:q -> ajouter_e_fin t (renverser q)

concatener l1 l2 = case l1 of
    [] -> l2
    t1:q1 -> t1:(concatener q1 l2)

l0 = []
l1 = [1,2,3]
l2 = [3,4,5]
l3 = [1,2,3]
ll = [l1,l2,l3]

--exercice 2
union e1 e2 = case l1 of
    [] -> e2
    t1:q1 -> concatener e1 e2

est_element n e1 = case e1 of
    [] -> False
    t:q -> (n==t)||(est_element n q) 

intersection e1 e2 = case e1 of
    [] -> []
    t1:q1 -> if est_element t1 e2
        then t1:intersection q1 e2
        else intersection q1 e2

inclusion e1 e2 = case e1 of
    [] -> True
    t1:q1 -> (est_element t1 e2) && (inclusion q1 e2)

difference e1 e2 = case e1 of
    [] -> []
    t1:q1 -> if est_element t1 e2
        then difference q1 e2
        else t1:difference q1 e2

egal e1 e2 = (inclusion e1 e2)&&(inclusion e2 e1)

ajouter_e_ll e ll = case ll of
    [] -> []
    t:q -> (e:t):(ajouter_e_ll e q)

ensemble_des_parties e1 = case e1 of
    [] -> [[]]
    t:q -> let pe'=ensemble_des_parties q in concatener pe' (ajouter_e_ll t pe')

--exercice 3

data BTree a = Feuille a
    Noeud (BTree a) a (BTree a)

