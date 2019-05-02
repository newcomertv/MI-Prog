longueur l=case l of 
            []-> 0
            t:q->1+(longueur q)

tete l=case l of  
            []-> 0
            t:q->t


reste l =case l of 
            [] -> 0
            t:q -> q



niemeel(l,n) = case l of 
                [] -> error("liste empty")
                t:q->if n==0 then t
                     else niemeel(q,n-1)


reverse_list(l)=case l of
                []->[]
                t:q->add_el_in_list(t,reverse_list(q))


--add_el_in_list(e,l)= case l of 
--                [] -> [e]
--                t:q -> q:(add_el_in_list(e,t))



concatener(l1,l2)= case l1 of
                []->l2
                t1:q1-> t1:(concatener(q1,l2)) 


aplatir = foldr (\x -> \l -> [x]++l) [] 


union(l1,l2)=case l1 of 
             [] -> l2
             t1:q1 -> t1:(concatener(q1,l2))



est_elem e l1 = case l1 of
                    []-> False
                    t:q -> (e==t) || (est_elem e q)

intersect(l1,l2)=case l1 of
                    []-> []
                    t1:q1 -> if est_elem t1 l2 then t1:intersect(q1,l2)
                             else intersect(q1,l2)
    
inclus(l1,l2)= case l1 of
                    []-> True
                    t1:q1 -> est_elem(t1,l2)&&(inclus(q1,l2))

difference(l1,l2)= case l1 of
                    []-> []
                    t1:q1 -> if est_elem(t1,l2) then difference(q1,l2)
                             else t1:(difference q1 l2)

egal(l1,l2)= inclus l1 l2 && inclus l2 l1


ajouter_el_ll e l=case l of 
                  [] -> []
                  t:q ->(e:t):(ajouter_el_ll e q)

ensemble_des_parties(l)=case l of
                        []->[[]]
                        t:q-> let pe' = ensemble_des_parties q in concatener(pe',ajouter_el_ll(t,pe')) 

permut l1= case l of 
            [] -> []
            t:q -> add_el_in_list

     