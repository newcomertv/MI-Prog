carre x = x*x

p=(xp,yp)

fst p = xp

snd p = yp

milieu p1 p2 = let xm = ((fst p1) + (fst p2)) / 2.0 in let ym = ((snd p1)+(snd p2))/2.0 in (xm,ym)

droiteprp p1 p2 = let alpha = ((snd p2)-(snd p1)) / ((fst p2)-(fst p1)) in let beta = (snd p2) - (alpha * (fst p1)) in (alpha,beta)

mediatrice p1 p2 = let alpha = fst ((droiteprp p1 p2)) in let alphap = (-1)/alpha in let m = (milieu p1 p2) in let betap = (snd m) - alphap * (fst m) in (alphap,betap)

intersection2d d1 d2 = let x1 = ((snd d1)-(snd d2)) / ((fst d2)- (fst d1)) in let y1 = (fst d1) * x1 + (snd d1) in (x1,y1)

distance2p p1 p2 = sqrt(carre((fst p1)-(fst p2)) + carre((snd p1)-(snd p2)))

circonference a b c = 2 * pi * (distance2p (intersection2d(mediatrice a b) (mediatrice a c)) a)

