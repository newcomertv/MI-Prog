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


