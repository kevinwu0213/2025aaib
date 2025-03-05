//week03-4-mousePressed-mouseX-mouseY-float
void setup(){//設定，做一次
 size(400,400);
}
float x=200,y=200;
void draw(){
  //if(mousePressed) ellipse(mouseX,mouseY,50,30);
  background(#5DD7FA);
  if(mousePressed){
    x=(x+mouseX)/2;
    y=(y+mouseY)/2;
  }
  ellipse(x,y,50,30);
}
