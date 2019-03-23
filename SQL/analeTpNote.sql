-- 1.	Liste des monuments (en affichant toutes les colonnes) de prix inconnu.
SELECT *
FROM L2I_MONUMENT;
--2.	Noms des monuments qui contiennent au moins trois mots (ex : 'Plaza San Marco').
SELECT *
FROM L2I_MONUMENT
WHERE NOMM LIKE '% % %';
--3.	Noms des clients ayant réservé un circuit après le 1er janvier 2015.

--4.	Liste des réservations effectuées pendant les dix dernières années.

--5.	Numéros des circuits qui n’ont pas été reservés depuis le  1er janvier 2015.

--6.	Numéro du circuit de prix minimum.
SELECT COUNT(*)
FROM L2I_MONUMENT
WHERE PRIX=0;
--7.	Noms des monuments que l’on peut visiter en France.
SELECT L2I_MONUMENT.NOMM
FROM L2I_MONUMENT INNER JOIN L2I_VILLE ON L2I_MONUMENT.NOMV = L2I_VILLE.NOMV
WHERE L2I_VILLE.PAYS LIKE 'France';
--8.	Nombre total de clients différents ayant réservé.
SELECT COUNT(DISTINCT(NOMC))
FROM L2I_RESER;
--9.	Noms des clients ayant effectué plusieurs réservations différentes (proposer une requête  avec jointure et une requête avec aggrégation).

--10.	Noms des clients ayant visité le monument ‘Tower Bridge’ dans une ville étape.

--11.	Pour chaque numéro de circuit, donner le nombre de villes étape.

--12.	Numéros par ordre croissant des circuits qui contiennent au moins trois villes étape.

--13.	Pour chaque circuit, donner le nombre total de monuments à visiter dans ses villes étape.

--14.	Pour chaque circuit, donner le nombre de monuments à visiter dans chacune de ses villes étape (en affichant 0 s’il n’y en a pas).

--15.	Numéro du circuit qui a le plus de monuments à visiter.