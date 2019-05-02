mult x y = x*y
multBy25 = mult 25

functions x y = if x('A')==True then y(True) else 'Q'



data Couleur =
    Coeur
    | Carreau
    | Pique
    | Trefle deriving Eq

data Carte = As Couleur
    | Roi Couleur
    | Dame Couleur
    | Valet Couleur
    | Petite Integer Couleur




data Tree a = Tip | Node  a (Tree a)  (Tree a)


data Btree = Tete a 
            Queue a (Btree a) a (Btree a)

depth Tip = 0
depth (Node _ l r) = 1 + max (depth l) (depth r)


somme x y = x + y

plus25 x = somme 25




