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




{- exercice 1

char -> (Bool -> Bool)
let f1 = \x -> \y -> x == 'a' || y

(Char -> Bool) -> Bool
let f2 = \f -> not(f('A')

Char -> (Bool -> Char)
let f3 = \x -> \y -> if x == 'b' && y then 'a' else 'b'

(Char -> Bool) -> (Bool -> Char) -> Char
let f4 = \f -> \g -> if f('z') then g(False) else 'b'

-}

-- exercice 2

compos f g = \x ->f(g(x))

deriv f x0 h = (f(x0 + h) - f(x0))/h

u x = 3*x*x+1

v x = sin(x)
 

sigma n sequence = if n > 0 then sequence n + sigma (n-1) sequence else 0

special x n = (1-x)**n


inv100 x = if x > -1 && x < 1 then sigma 100 (special x) else 0