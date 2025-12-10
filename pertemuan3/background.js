var colors = ["#45cf8fff","#bb1a1aff" ,"#afd119ff", "#FFF4F7"];
var index = 0;
function ubahBackground(){
    document.body.style.backgroundColor = colors[index];
    index++;

    if(index>= colors.length){
        index =0;
    }
}