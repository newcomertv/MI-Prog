{- t -> Char -> t
\x -> \y -> if y =='a' then x else x

(Char -> t) -> t
\x -> x 'a'

t -> (Bool, t)
\x -> (True, x)

(t -> Char, Bool)
\x -> ('a', True) -}



{- Exercice 2 -}

{- 1. decompress -}


test1 = "aaababb"
test2 = [(3,'a'), (1,'b'),(1,'a'),(2,'b')]


{- repetitions is a function that counts how many times in a row starting from the left a character is being repeated returning that value+1 -}

rpt_me_pls n char = if n > 0 then char: rpt_me_pls (n-1) char
                else []

decompress string = case string of
    []->[]
    (a1,a2):t-> rpt_me_pls a1 a2 ++ decompress t


compress string= case string of
    []->[]
    h:t-> (repetitions h t, h) : (compress (lst_n_elements (repetitions h t)))

    {-   2.   -}
{- Javanais -}

voyelle x = case x of
    'a'-> True
    'e'-> True
    'i'-> True
    'o'-> True
    'u'-> True
    'y'-> True
    _-> False


fst_n_elements count string = if count == 0 then []
                                else case string of
                                    h:t -> h: fst_n_elements (count-1) t

lst_n_elements count string = if count == 0 then string else 
                                                            case string of
                                                                h:t -> lst_n_elements (count-1) t


nth_element (string, count) = case string of 
    [] -> error("list empty")
    t:q->if count==0 then t
         else nth_element(q,count-1)
 

add_at_count_av count string= fst_n_elements count  string ++ "av" ++ lst_n_elements count string

javanais_aux string state count = case state of 
    0 -> if voyelle (nth_element (string, count)) then javanais_aux (add_at_count_av count string) 1 (count+1)
            else javanais_aux string 0 (count+1)
    1 -> if voyelle (nth_element (string, count)) then javanais_aux string 1 (count+1)
        else javanais_aux string 0 (count+1) 


javanais string = javanais_aux string 0 0

{- Exercice 3 -}

 data BoolExp =
    Vrai
    |Faux
    |Non BoolExp
    |Et BoolExp BoolExp
    |Ou BoolExp BoolExp deriving Show

exemple = Ou ((Non) (Et ((Faux) (Vrai)))
 


{- Nikolas von Lonski -}