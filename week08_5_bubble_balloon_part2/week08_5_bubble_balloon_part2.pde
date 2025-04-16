//week08-5_bubble_balloon_part2
void setup(){
  size(400,400);//大小
}
int x,y,s;//氣球座標、大小
void draw(){
  background(255);
  ellipse(x,y-s/2,s*0.7,s);
  if(mousePressed) s++;
  else{
    if(y>s+1)y-=2;
  }
}
void mousePressed(){
  x=mouseX;
  y=mouseY;
  s=1;
}
