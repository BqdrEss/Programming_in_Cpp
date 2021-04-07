#include <string>
#include <iostream>
#include "Critter.h"
using namespace std;
 
Critter::Critter() {
  height=5; //set height to 5
  boredom=0;
  hunger=0;
  name= "default_critter";
  thirst=hunger;
 }
 
Critter::Critter(string newname){
  name=newname ;
  height=5; //height to 5 again
  boredom=0;
  hunger=0;
  thirst = hunger;
}
 
Critter::Critter(string newname, double newhunger, int newboredom, double newheight) {
  name=newname; //set all variables to new ones
  height=newheight;
  hunger=conv(newhunger);
  boredom=newboredom;
  thirst=conv();
}
 
Critter::Critter(string newname, double newhunger,double newthirst, int newboredom, double newheight){
  name=newname; //set all variables to new ones
  height=newheight;
  thirst=newthirst;
  hunger=conv(newhunger);
  boredom=newboredom;
}
 
void Critter::setName(string& newname) {
    name = newname;
}
 
void Critter::setHunger(double newhunger) {
    hunger = conv(newhunger);
}
void Critter::setThirst(double newthirst){
  thirst=newthirst;
}
void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}
void Critter::setHeight(double newheight) {
    height = newheight;
}
 
void Critter::print() {
 
    cout <<endl<< "I am " << getName() <<endl;
  cout<<"My hunger level is " << getHunger() <<endl;
   cout<<"My thirst level is " << getThirst() <<endl;
  cout<<"My boredom level is " << getBoredom() <<endl;
  cout<<"My height is "<<getHeight()<<endl;
}
string Critter::getName(){
  return name;
}
double Critter::getHunger() {
    return conv();
}
double Critter::getThirst(){
  return thirst;
}
int Critter::getBoredom() {
    return boredom;
}
double Critter::getHeight() {
    return height;
}
double Critter::conv(double hunger){
  return (hunger/10);
}
int Critter::conv(){
  return (int)(hunger*10);
}