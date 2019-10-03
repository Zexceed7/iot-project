function prenderLed(){
    var ref = firebase.database().ref().child("LED");
    document.getElementById("botonEncender").style.backgroundColor = "green";
    document.getElementById("botonEncender").style.color = "white";
    document.getElementById("botonApagar").style.backgroundColor = "white";
    document.getElementById("botonApagar").style.color= "black";
    document.getElementById("cardLEDTitle").innerHTML = "ON";

    ref.set("ON");

}
function apagarLed(){
    var ref = firebase.database().ref().child("LED");
    document.getElementById("botonEncender").style.backgroundColor = "white";
    document.getElementById("botonEncender").style.color = "black";
    document.getElementById("botonApagar").style.backgroundColor = "red";
    document.getElementById("botonApagar").style.color= "white";
    document.getElementById("cardLEDTitle").innerHTML = "OFF";

    ref.set("OFF");

}

var refBoton = firebase.database().ref().child("boton");

refBoton.on("value", function(snapshot) {
var textoBoton = snapshot.val();
if(textoBoton == "Unpushed"){
    document.getElementById("botonImage").style.backgroundImage
    ="url('https://archive-media-0.nyafuu.org/vp/image/1384/27/1384275704432.gif')";
}else{
    document.getElementById("botonImage").style.backgroundImage 
    ="url('https://media1.tenor.com/images/0b6e85e7b9819b4fe7cde35d5a53ecd2/tenor.gif?itemid=7814726')";


}

});

function controlServo(val){
    document.getElementById("valorAnguloServo").innerHTML= val+ "&deg";
}

function controlServoBase(val){
    var ref = firebase.database().ref().child("anguloServo");
    ref.set(val);
}