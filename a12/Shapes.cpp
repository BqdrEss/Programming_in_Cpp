// please refer to shapes.h for methods documentation
 
#include <iostream>
#include "Shapes.h"
#include <cmath>
using namespace std;
 
Shape::Shape(const string& n) : name(n) {
}
 
void Shape::printName() const {
    cout <<endl<< name << endl;
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
Shape::Shape(){
  name="default name";
}
CenteredShape::CenteredShape(){
    x=0;
    y=0;
}
RegularPolygon::RegularPolygon(){
  EdgesNumber=0;
}
 
Hexagon::Hexagon(){
    Side= 0.00;
    Color="default color";
}
Hexagon::Hexagon(const string& n, double nx, double ny, double nside,string ncolor):RegularPolygon(n,nx,ny,5){
    Side = nside;
    Color = ncolor;
}
void Hexagon::setSide(double ns){
    Side = ns;
}
 
double Hexagon::getSide(){
    return Side;
}
void Hexagon::setColor(std::string nc){
    Color=nc;
}
string Hexagon::getColor(){
    return Color;
}
double Hexagon::Perimeter(){
    return 6*Side;
}
double Hexagon::Area(){
    return 3*sqrt(3)/2*Side*Side;
}
Hexagon::~Hexagon(){}
ss