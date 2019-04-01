
l = [1..5]

list = ["a","b","c"]

concat_string list = foldr (++) "" list



si_pair l = foldr (\x -> \r -> if x `mod` 2 == 0 then x:r else r) [] l

poly = [3,2,4,1] {- polynome telle que 3x^3+ 2x^2 + 4x +1 -}

list_head l = if length l > 0 then head l else []

{- valeur polynome x = if length polynome > 0 then let result1 = (list_head polynome) * (x ** ((length polynome)-1)) in valeur tail polynome x else result -}

valeur x poly = case poly of 
    [] -> 0
    t:r -> (valeur x r) * x + t

valeur2 x f = foldr (\t -> \r -> r * x + t) 0 f 

{-
foldr f b list applies function f by using argument b and the last element of list to start than proceeds recursively through the list 
using the previous result as element b and the list without it's last element as the new list
-}
    
adjoint l x = map x: l --wrong


prefix l = case l of 
    []    -> [[]]
    t : r -> [] ++ (adjoint t (prefix r))