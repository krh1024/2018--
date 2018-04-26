Input = function() {
    this.w=false;
    this.a=false;
    this.d=false;
    this.s=false;
}

var input = new Input();


// 키를 눌렀을 때 true 가 됨.
// 키를 떼었을 때 false 가 되어야 함.
// 그러므로 2번으로 가야 함.
document.documentElement.onkeydown = function(e) {
    var keycode;
    if(window.event)
        keycode = window.event.keyCode;
    
    switch(keycode) {
        case 65:
            input.a = true;
            break;
        case 68:
            input.d = true;
            break;
        case 83:
            input.s = true;
            break;
        case 87:
            input.w = true;
            break;
    }
}

// 2번 키를 떼었을 때.
document.documentElement.onkeyup = function(e) {
    var keycode;
    if(window.event)
        keycode = window.event.keyCode;
    
    switch(keycode) {
        case 65:
            input.a = false;
            break;
        case 68:
            input.d = false;
            break;
        case 83:
            input.s = false;
            break;
        case 87:
            input.w = false;
            break;
    }
}