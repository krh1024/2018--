var canvas= document.getElementById("gameScreen");
var ctx=canvas.getContext('2d');

var rect = new Rectangle(150,150,50,50);
// rect = 가로 150 세로 150픽셀 너머에 50픽셀 50픽셀의 사각형을 그린다.

setInterval(function() {
    if(input.a) {
        rect.x = rect.x - 2;
    }
    else if(input.d) {
        rect.x = rect.x + 2;
    }
    
    if(input.w) {
        rect.y = rect.y - 2;
    }
    else if(input.s) {
        rect.y = rect.y + 2;
    }
    
},1);

setInterval(function() {
    ctx.clearRect(0,0, canvas.width, canvas.height);
    rect.Draw(ctx);
    //호출함수=사각형을 그린다.
},33);