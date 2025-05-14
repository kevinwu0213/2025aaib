//week13-5-sound
//找sound下載sound的涵式
import processing.sound.*;//使用聲音外掛
SoundFile mySound;
void setup(){
  size(400,400);
  mySound=new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void draw(){

}
