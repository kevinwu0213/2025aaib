//week13-5-sound
//找sound下載sound的涵式
import processing.sound.*;//使用聲音外掛
SoundFile mySound,monkey,sword;
void setup(){
  size(400,400);
  monkey=new SoundFile(this, "Monkey 1.mp3");
  sword=new SoundFile(this, "sword slash.mp3");
  mySound=new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void mousePressed(){
  if(mouseButton==LEFT) monkey.play();
  if(mouseButton==RIGHT) sword.play();
}
void draw(){

}
