// please refer to shapes.h for methods documentation
 
#include <iostream>
#include "Shapes.h"
# define PI 3.14159265359
using namespace std;
 
//default constructors
Shape::Shape(){
    name = "default_name";
    }
 
CenteredShape::CenteredShape(){
 
    x = 0.00;
    y = 0.00;
}
 
RegularPolygon::RegularPolygon(){
    EdgesNumber = 0;
}
 
Circle::Circle(){
    Radius = 0.00;
}
 
Rectangle::Rectangle(){
    Width= 0.00;
    Height= 0.00;
}
 
Square::Square(){
    Side= 0.00;
}
 
Shape::Shape(const string& n) : name(n) {
}
 
void Shape::printName() const {
    cout <<"\n"<< name <<":"<< endl;
}
 
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
 
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}
 
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
}
Rectangle::Rectangle(const std::string& n, double nx, double ny, double nwidth, double nheight):RegularPolygon(n,nx,ny,4){
    Width = nwidth;
    Height = nheight;
}
Square::Square(const string& n, double nx, double ny, double nside):RegularPolygon(n,nx,ny,4){
    Side = nside;
}
    // setters and getters
void Shape::setName(string n){
    name = n ;
}
string Shape::getName(){
    return name;
}
void CenteredShape::setX(double nx){
    x = nx;
}
double CenteredShape::getX(){
    return x;
}
void CenteredShape::setY(double ny){
    y = ny;
}
double CenteredShape::getY(){
    return y;
}
void RegularPolygon::setEdgesNumber(int ne){
    EdgesNumber = ne;
}
int RegularPolygon::getEdgesNumber(){
    return EdgesNumber;
}
void Rectangle::setWidth(double w){
    Width = w;
}
void Rectangle::setHeight(double h){
    Height = h;
}
double Rectangle::getWidth(){
    return Width;
}
double Rectangle::getHeight(){
    return Height;
}
 
void Square::setSide(double ns){
    Side = ns;
}
 
double Square::getSide(){
    return Side;
}
 
    //methods:
 double Circle::Perimeter(){
    return 2*PI*Radius;
}
double Circle::Area(){
    return PI*Radius;
}
double Rectangle::Perimeter(){
    return (Width+Height)*2;
}
double Rectangle::Area(){
    return Width*Height;
}
double Square::Perimeter(){
    return 4*Side;
}
double Square::Area(){
    return Side*Side;
}
