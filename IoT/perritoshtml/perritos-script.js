function generarPerritos(){
    var archivos = ["perrito1.jpg",
    "perrito2.jpg",
    "perrito3.jpg",
    "perrito4.jpg",
    "perrito5.jpg",
    "perrito6.jpg",
    "perrito7.jpg",
    "perrito8.jpg",
    "perrito9.jpg",
    "perrito10.jpg"];
document.getElementById("imagenes").src = "perritos/"+ archivos[Math.floor(Math.random()*archivos.length)];

}   