double x = 2 * x
carre x = x * x
cube x = x * carre x

poly x = x * (3 + 4 * x + carre x + 2 * cube x) + 2

day num= case num of 1 -> "lundi"
                     2 -> "mardi"


joursemaine jour = do
    if jour < 4
        then do if jour < 2
                then do "Lundi"
                else if jour == 3
                        then do "Mercredi"
                else "Mardi"
    else if jour < 6
        then do if jour == 4
                then do "Jeudi"
                else "Vendredi"
    else if jour == 7
        then do "Dimanche"
        else  "Samedi"


discriminant a b c = carre b - 4 * a * c

solution a b c = do
    if (discriminant a b c) < 0
        then error ("No solution")
    else if (discriminant a b c) == 0
        then do let c = - b / double a in c
        else let c = (-b - sqrt(discriminant a b c)) / double a in c



f1 a b = a+b

f2 (a, b) = a+b