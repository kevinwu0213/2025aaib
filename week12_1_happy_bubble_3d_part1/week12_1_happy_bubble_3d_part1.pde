//week12-1-happy-bubble-3d-part1
void setup(){
  size(300,300,P3D);
}
void draw(){
  background(255);
   pushMatrix();
   translate(mouseX,mouseY);
   sphere(60);
   popMatrix();

}
