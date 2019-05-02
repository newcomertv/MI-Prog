{- \x -> \y -> if x then y else y
\x -> x (True)
\(x,y)-> if x=='a' && t ==1 then True else False
\x -> \y -> if x == 'a' && t==1 then True else False
 -}

der lst = case lst of
    [a]->("",a)
    t:r -> let (u,a) = der r in (t:u, a)

tourne lst = let (a,b) = der lst in b:a

apres m1 m2 = if m1 > m2 then True else False


heranos n = [2..n] 