// ENREGISTREZ LE FICHIER ET OUVREZ LE DANS UN IDE POUR OBTENIR LA COLORATION SYNTAXIQUE !
// Ou regardez le directement en ligne ici : https://jsfiddle.net/gd6vhx3n/

// tout le code effectué dans ce bloc ne sera appliqué qu'une fois le document prêt
// cela signifie que tout les éléments seront déjà chargés et pourront être manipulés
$(document).ready(function (e) {

    /* TP 6 */
    $('#todolist').on('dblclick', 'li', function (e) {
        $(this).toggleClass('done');
    });

    $('#addTask').on('click', function (e) {
        let taskText = $('#newTask').val();
        if (taskText) {
            $("#todolist").append("<li>" + taskText + "</li>");
        }
    });

    /* TP 7 */

    /* qs 1. Revoir le TP4 avec la création des classes */
    function ListItem(task, done) {

        /* qs 2. vérification des types */
        if (typeof task !== "string") { alert('Mauvais type pour l\'argument task'); return; }
        if (typeof done !== "boolean") { alert('Mauvais type pour l\'argument done'); return; }

        this.task = task;
        this.done = done;
    };

    /* qs 3. */
    $('#save').on('click', function () {
        // utilisation de la fonction each() pour boucler sur tous les éléments li de la page
        $('li').each(function () {
            // dans la boucle, le li courant est accessible avec $(this)
            let task = $(this).html(); // on récupère le contenu du li
            let done = $(this).hasClass('done'); // on récupère son statut avec la fonction hasClass()
            let item = new ListItem(task, done);

            console.group();
            console.log('Affichage sous forme d\'objet :');
            console.log(item); // Avec la console l'objet s'affiche correctement. Si on affichait "item" directement dans la page ou avec un alert() on aurait la valeur : [object Object]
            console.groupEnd();

            console.group();
            console.log('Affichage sous forme d\'une string en JSON : ');
            console.log(JSON.stringify(item)); // On transforme l'objet en une chaine JSON grâce à JSON.stringify() qui peut être affichée partout et lisible partout
            console.groupEnd();
        });
    });

    // on s'assure que le navigateur supporte le localStorage, sinon on affiche un alert()
    if (typeof Storage !== "undefined") {

        // listener sur le bouton "Sauvegarder" au click
        $('#save').on('click', function () {
            let items = []; // on crée un tableau vide qui contiendra tous les objets ListItem
            // utilisation de la fonction each() pour boucler sur tous les éléments li de la page
            $('li').each(function () {
                // dans la boucle, le li courant est accessible avec $(this)
                let task = $(this).html(); // on récupère le contenu du li
                let done = $(this).hasClass('done'); // on récupère son statut avec la fonction hasClass()
                let item = new ListItem(task, done);

                // on ajoute le nouvel objet créé dans notre tableau avec la fonction push()
                items.push(item);
            });
            // une fois qu'on a récupéré tous les éléments de la todolist dans notre tableau, on utilise le localStorage pour sauvegarder ce tableau au format JSON
            localStorage.setItem('items', JSON.stringify(items));
        });

        // listener sur le bouton "Charger" au click
        $('#load').on('click', function () {
            // on utilise try/catch pour parer aux problèmes de parse sur le JSON
            try {
                // on récupère les éléments sauvegardés dans le localStorage sous le nom "items" et on transforme le JSON en objet JS grâce à JSON.parse
                let items = JSON.parse(localStorage.getItem('items'));
                // on a récupéré le tableau d'élement, on boucle dessus pour écrire la Todolist
                items.forEach(function (item) { // notez que le paramètre de la fonction ("item") est l'élément courant du tableau dans la boucle forEach
                    // Notation particulière ci-dessous. On parle d'opérateur ternaire. Il s'agit d'un raccourci du if/else
                    // Pour en savoir plus : https://developer.mozilla.org/fr/docs/Web/JavaScript/Reference/Op%C3%A9rateurs/L_op%C3%A9rateur_conditionnel
                    let itemClass = item.done ? "done" : ""; // on regarde si la tâche est déjà terminée, si c'est le cas on garde en mémoire qu'il faut ajouter la classe "done", sinon on garde en mémoire qu'il n'y a pas de classe à ajouter
                    $("#todolist").append("<li class='" + itemClass + "'>" + item.task + "</li>"); // on ajoute au ul un nouvel élément li avec la classe définie avant (done ou vide) et le contenu récupéré du localStorage
                });
            } catch (ex) {
                console.error(ex);
            }
        });

        // BONUS : au chargement de la page, on regarde s'il y a des éléments sauvegardés dans le localStorage, si c'est le cas on affiche le nombre d'éléments dans le bouton "Charger"
        let items = JSON.parse(localStorage.getItem('items'));
        if (items.length) $('#load').html("Charger (" + items.length + ")");
    } else {
        alert('Utilisez un navigateur à jour pour pouvoir sauvegarder votre liste.')
    }
});