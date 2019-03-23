chaine2 p1 p2 = 

chaine3 p1 p2 p3 =
if chaine2 p1 p2 then chaine2 (chaine2_v p1 p2) p3 else 
    if chaine2 p1 p3 then chaine2 (chaine2_v p1 p3) p2
        else False


