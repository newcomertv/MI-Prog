$(document).ready(function () {
    $('ul').on("click", "li", function () {
        $(this).toggleClass("done")
    })
    $('button').click(function () {
        console.log("buttonclick");
        variable = $('input').val();
        length = variable.length;
        if (length > 0) { $("ul").append('<li>' + variable + '</li>') }
        $('input').val("");
    })
})

