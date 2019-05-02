-- exercice 1
double x = 2*x
carre x = x*x

-- exercice 2
poly x = 2+(3*x)+(4*x^2)+(x^3)+(2*x^4)
cube x = x*x*x
puis4 x = x*x*x*x
poly2 x = 2+(3*x)+(4*carre x)+(cube x)+(2*puis4 x)
poly3 x = 2+x*(3+x*(4+x*(1+2*x)))

-- execice 3
semaine x = case x of
 1 -> "Lundi"
 2 -> "Mardi"
 3 -> "Mercredi"
 4 -> "Jeudi"
 5 -> "Vendredi"
 6 -> "Samedi"
 7 -> "Dimanche"
 _ -> "pas entre 1 et 7"

-- exercice 4
mois x = case x of
 1 -> "Janvier"
 2 -> "Fevrier"
 3 -> "Mars"
 4 -> "Avril"
 5 -> "Mai"
 6 -> "Juin"
 7 -> "Juillet"
 8 -> "Aout"
 9 -> "Septembre"
 10 -> "Octobre"
 11 -> "Novembre"
 12 -> "Decembre"
 _ -> "pas compris entre 1 et 12"

-- exercice 5
date a b c d = semaine a ++ " " ++ show(b) ++ " " ++ mois c ++ " " ++ show(d)

-- exercice 6
descriminant a b c = b*b-(4*a*c)

solution (a, b, c) = if descriminant a b c < 0
 then "erreur"
 else if descriminant a b c == 0
  then show((-b)/2*a)
  else "x1 =" ++ show(((-b)+sqrt(descriminant a b c))/2*a) ++ " x2 = " ++ show(((-b)-sqrt(descriminant a b c))/2*a)

-- recursivité
--
-- exerciece 1

puissance (x, n) = if n == 0
 then 1
 else x * puissance (x, n-1)

fibonacci n = if n == 0
 then 0
 else if n == 1
  then 1
  else fibonacci(n-1) + fibonacci(n-2)

existe_diviseur (n, d) = (d>1) && ((n`mod`d==0) || existe_diviseur(n, d-1))

premier n = n>1 && not(existe_diviseur(n, n-1))

-- exercice 2

monais (a, b, c, d, s) = 0

-- exercice 3

nb_add_fib n = if n == 0
 then 0
 else if n == 1
  then 0
  else 1 + nb_add_fib(n-1) + nb_add_fib(n-2)

-- exercice 4

v_fib n = if n == 0
 then (0,1)
 else let (a,b) = v_fib(n-1) in (b,a+b)

fib2 n = fst(v_fib(n))

-- exercice 5

parfait n = 0 

-- exercice 6

champernowne n = if n == 0
 then 0
 else 0

erdos n = 0