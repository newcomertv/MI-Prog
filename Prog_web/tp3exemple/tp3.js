/*
 *
 * PARTIE 1
 *
 */

// qs 1 créer un tableau avec les notes
let notes = [10, 15, 6, 14, 14, 13, 19, 10, 17, 9];

// qs 2.1 créer une fonction d'affichage des notes avec boucle for
function afficherNotesBoucleFor(tableauNotes) {
    // on récupère l'élément dans lequel on va écrire le résultat
    let elementPourAffichage = document.getElementById("affichageTableau");

    // on crée une boucle qui va de 0 à la longueur du tableau - 1 
    for (let index = 0; index < tableauNotes.length; index++) {
        // pour chaque note, on met à jour le contenu du texte de l'élément en ajoutant la nouvelle note puis en pensant bien à retourner à la ligne (balise br)
        elementPourAffichage.innerHTML = elementPourAffichage.innerHTML + "Note à l'index " + index + " : " + tableauNotes[index] + "<br/>";
    }
}

// qs 2.2 créer une fonction d'affichage des notes avec boucle while
function afficherNotesBoucleWhile(tableauNotes) {
    // on récupère l'élément dans lequel on va écrire le résultat
    let elementPourAffichage = document.getElementById("affichageTableau");

    // on crée une boucle qui va de 0 à la longueur du tableau - 1 
    let index = 0;
    while (index < tableauNotes.length) {
        // pour chaque note, on met à jour le contenu du texte de l'élément en ajoutant la nouvelle note puis en pensant bien à retourner à la ligne (balise br)
        // notez la différence avec la première fonction, cette fois nous utilisons += pour l'affectation de la variable (voir les liens d'aide)
        elementPourAffichage.innerHTML += "Note à l'index " + index + " : " + tableauNotes[index] + "<br/>";

        // on incrémente index pour passer à la note suivante, équivaut à index = index + 1 ou encore index += 1
        index++;
    }
}

// qs 3 créer une fonction d'affichage des notes avec condition d'affichage
function afficherNotesDeuxArguments(tableauNotes, toutAfficher) {
    // on récupère l'élément dans lequel on va écrire le résultat
    let elementPourAffichage = document.getElementById("affichageTableau");

    // on crée une boucle qui va de 0 à la longueur du tableau - 1 
    let index = 0;
    while (index < tableauNotes.length) {

        // on n'affiche le résultat que si le boolean toutAfficher est à true (première partie de la condition)
        // si le boolean est à false, on regarde si la note est supérieure ou égale à 15 (seconde partie)
        // il s'agit d'une condition avec un OU logique entre les 2 parties, il suffit donc qu'une seule des deux parties retourne VRAI pour effectuer ce qu'il y a dans la condition
        if (toutAfficher || tableauNotes[index] >= 15) {

            // pour chaque note, on met à jour le contenu du texte de l'élément en ajoutant la nouvelle note puis en pensant bien à retourner à la ligne (balise br)
            // notez la différence avec la première fonction, cette fois nous utilisons += pour l'affectation de la variable (voir les liens d'aide)
            elementPourAffichage.innerHTML += "Note à l'index " + index + " : " + tableauNotes[index] + "<br/>";

        }

        // on incrémente index pour passer à la note suivante, équivaut à index = index + 1 ou encore index += 1
        // notez qu'il faut incrémenter peu importe les conditions d'affichage, sinon boucle infinie
        index++;
    }
}

// qs 4 créer une fonction d'affichage des notes avec condition d'affichage et check du type du second argument
function afficherNotesDeuxArgumentsEtCheck(tableauNotes, toutAfficher) {
    // on récupère l'élément dans lequel on va écrire le résultat
    let elementPourAffichage = document.getElementById("affichageTableau");

    // on compare le type pour s'assurer qu'il s'agisse d'un boolean
    if (typeof toutAfficher !== "boolean") {

        // on effectue l'affichage pour prévenir l'utilisateur
        elementPourAffichage.innerHTML = "Mauvais type pour le second argument";
        alert("Merci de mettre un boolean en second argument de la fonction");

        // on arrête la fonction immédiatement, tout ce qui se trouve après le return ne sera pas exécuté
        return;
    }

    // on crée une boucle qui va de 0 à la longueur du tableau - 1 
    let index = 0;
    while (index < tableauNotes.length) {

        // on n'affiche le résultat que si le boolean toutAfficher est à true (première partie de la condition)
        // si le boolean est à false, on regarde si la note est supérieure ou égale à 15 (seconde partie)
        // il s'agit d'une condition avec un OU logique entre les 2 parties, il suffit donc qu'une seule des deux parties retourne VRAI pour effectuer ce qu'il y a dans la condition
        if (toutAfficher || tableauNotes[index] >= 15) {

            // pour chaque note, on met à jour le contenu du texte de l'élément en ajoutant la nouvelle note puis en pensant bien à retourner à la ligne (balise br)
            // notez la différence avec la première fonction, cette fois nous utilisons += pour l'affectation de la variable (voir les liens d'aide)
            elementPourAffichage.innerHTML += "Note à l'index " + index + " : " + tableauNotes[index] + "<br/>";

        }

        // on incrémente index pour passer à la note suivante, équivaut à index = index + 1 ou encore index += 1
        // notez qu'il faut incrémenter peu importe les conditions d'affichage, sinon boucle infinie
        index++;
    }
}

// nous n'avons que déclaré les fonctions, pour qu'elles s'exécutent, il faut les appeler avec le bon paramètre :
// afficherNotesBoucleFor(notes);
// afficherNotesBoucleWhile(notes);
// afficherNotesDeuxArguments(notes, true);
// afficherNotesDeuxArguments(notes, false);
// afficherNotesDeuxArgumentsEtCheck(notes, "pas un boolean");
afficherNotesDeuxArgumentsEtCheck(notes, false);

/*
 *
 * PARTIE 2
 *
 */

function convertir() {
    // empêche la soumission normale du formulaire (voir les liens d'aide pour plus d'information)
    event.preventDefault();

    // on récupère les différentes données des champs input et select grâce à la propriété "value"
    // on s'assure de transformer la valeur du champ "valeur" en float pour les calculs à venir
    let val = parseFloat(document.getElementById('valeur').value);
    let unit = document.getElementById('unite').value;

    // on récupère l'élément dans lequel on affichera le résultat
    let res = document.getElementById('resultat');

    let calc = 0;

    // on effectue le calcul adéquat en fonction de l'unité choisie (valeur récupérée depuis le champ unite)
    // on affiche le résultat dans l'élément "resultat". Pour obtenir un résultat avec au maximum 2 chiffres après la virgule :
    // on utilise la fonction Math.round pour arrondir notre résultat après l'avoir multiplié par 100. On divise ensuite par 100 pour n'avoir plus que 2 chiffres après la virgule
    switch (unit) {
        case "cm":
            calc = Math.round(val * 2.54 * 100) / 100;
            res.innerHTML = val + " pouce(s) = " + calc + " centimètre(s)";
            break;
        case "pc":
            calc = Math.round(val / 2.54 * 100) / 100;
            res.innerHTML = val + " centimètre(s) = " + calc + " pouce(s)";
            break;
        case "l":
            calc = Math.round(val / 453.6 * 100) / 100;
            res.innerHTML = val + " gramme(s) = " + calc + " livre(s)";
            break;
        case "g":
            calc = Math.round(val * 453.6 * 100) / 100;
            res.innerHTML = val + " livre(s) = " + calc + " gramme(s)";
            break;
    }
}

