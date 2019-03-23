function Cours(prof, titre) {
    this.prof = prof;
    this.titre = titre;
}

var premierCours = new Cours("prof", "titre");


function displayText(event) {
    console.log(event);
    var target = event.target.querySelector('.description');
    target.style.display = 'block'
}


function hideText(event) {
    console.log(event);
    var target = event.target.querySelector('.description');
    target.style.display = 'none'
}

function newCours() {
    var a = document.querySelector('#firstProf').value;
    var b = document.querySelector('#firstTitle').value;
    var c = document.querySelector('#secondProf').value;
    var d = document.querySelector('#secondTitle').value;

    var tab = [a, b];
    var tab2 = [c, d];
    var e = new Cours(tab, tab2);
    console.log(e)
}

var elements = document.querySelectorAll('.image');

for (let i = 0; i < elements.length; i++) {
    elements[i].addEventListener('mouseenter', displayText);
    elements[i].addEventListener('mouseleave', hideText);
}