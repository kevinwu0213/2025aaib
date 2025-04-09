//week08-4_bubble_balloon
//用mouse吹氣球
void setup(){
  size(400,400);//大小
}
int x,y,s;//氣球座標、大小
void draw(){
  background(255);
  ellipse(x,y-s/2,s*0.7,s);
  if(mousePressed) s++;
}
void mousePressed(){
  x=mouseX;
  y=mouseY;
  s=1;
}
