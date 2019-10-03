
function dar(){
    var ref = firebase.database().ref().child("ON");
        ref.set("1");
}
function parar(){
    var ref = firebase.database().ref().child("ON");
    ref.set("0");
}
function alimentar(){
    dar();
    setTimeout(parar,1500);
}


