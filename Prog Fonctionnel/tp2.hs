{-
derive = [1..9]


 derivee x count derive =
    if count == 0 
        then 
        let derive = x in 
            if count < length x then 
                let (derive !! count) = count * x !! count in 
                    count+1 in 
                        derivee x count derive 
            else derive 
     else if count < length x then 
             let (derive !! count) = count * x !! count in 
                    count +1 in 
                        derivee x count derive 
            else derive
-}

resultat = [0]

derivat (polynome,degre) = if degre  == 0 then reverse(resultat) else let x = polynome !! degre in let y = x * degre in y:resultat --derivat(polynome,degre-1)
