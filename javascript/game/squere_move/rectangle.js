Rectangle = function(x,y,w,h) {
    this.x = x;
    this.y = y;
    this.w = w;
    this.h = h;
    
    this.Draw = function(ctx) {
        ctx.fillRect(this.x, this.y, this.w, this.h);
    }
}