function adivinaElNumero(){
    var maximo = 10;
    var minimo = 0;
var numeroAlAzar = Math.floor(Math.random() * (maximo-minimo))+1;
var numeroDeUsuario = document.getElementById("Numero").value;

if (numeroDeUsuario == numeroAlAzar) {
    document.getElementById("marcador").innerHTML = "Adivinaste";
}else{
    document.getElementById("marcador").innerHTML = " No Adivinaste";
}
}   
function siEsPrimo(){
    var valorUsuario = document.getElementById("input-numero-primo").value;
    var numero = valorUsuario - 1;
    var residuo = 0;

while (numero >1){
    residuo = valorUsuario % numero
    if (residuo ==0 ){
        document.getElementById("resultado-primo").innerHTML = "No es primo"
        break
    }else{
        document.getElementById("resultado-primo").innerHTML = "Si es primo"

    }
    numero = numero -1
}
}
function mayusculas(){
    var nombre = document.getElementById("usuario-nombre").value
    nombreMay = nombre.toUpperCase();

    document.getElementById("Nombre-mayus").innerHTML = nombreMay;
}
