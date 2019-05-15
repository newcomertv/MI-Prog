var nb_lignes


var revenue


function ecrire_code()
let nbl = document.getElementsByClassName("lines");
let rev = document.getElementsByClassName("profit");
if ((nb_lignes % 5) == 0)
    revenue = (nb_lignes / 5)
nbl.innerHTML = nb_lignes;
rev.innerHTML = revenue;




$(document).ready(function () {
    $("button").click(function () {
        console.log("something");
        ecrire_code();
    })
})

