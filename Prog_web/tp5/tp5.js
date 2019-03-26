$(document).ready(function () {

    //$("p").click(function () {
    //    alert($(this).text());
    //})
    /*     $(".something").click(function () {
            alert($(this).text())
        }) */
    /* 
        $("#hashtag").click(function () {
            alert($(this).text())
        })
     */
    $(".disparaitre").click(function () {
        $(".disparaitre").hide(1000, function () {
            $(".disparaitre").text("hello")
            $(".disparaitre").show(1000)

        })
    })
})
