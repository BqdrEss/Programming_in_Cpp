#include<iostream>
#include "Box.h"
//constructors
Box::Box(){
    height=0;
    width=0;
    depth=0;
}
 
Box::Box(double newHeight,double newWidth,double newDepth){
    height=newHeight;
    width=newWidth;
    depth=newDepth;
}
// Copy constructor
Box::Box(const Box& b){
  height=b.height;
  width=b.width;
  depth=b.depth;
}
//destructor
Box::~Box(){
}
 
//setter methods
void Box::setHeight(double newHeight){
    height=newHeight;
}
 
void Box::setWidth(double newWidth){
    width=newWidth;
}
 
void Box::setDepth(double newDepth){
    depth=newDepth;
}
 
//getter methods
double Box::getHeight(){
    return height;
}
double Box::getWidth(){
    return width;
}
double Box::getDepth(){
    return depth;
}
