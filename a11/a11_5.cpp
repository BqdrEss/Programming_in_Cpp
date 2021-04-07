/*
CH-230-A
a11 p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>
using namespace std;
int main() {
 
  Circle c("Circle", 0,0 , 7);
  Circle c2=c;
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle rc("Rectangle",0,0,2,4);
  Rectangle rc2=rc;
  Square s ("Square",0,0,3);
  Square s2=s;
 
  r.printName();
  c2.printName();
  cout<<"Perimeter: "<<c2.Perimeter()<<endl;
  cout<<"Area: "<<c2.Area()<<endl;
  rc.printName();
  cout<<"Perimeter: "<<rc2.Perimeter()<<endl;
  cout<<"Area: "<<rc2.Area()<<endl;
  s.printName();
  cout<<"Perimeter: "<<s2.Perimeter()<<endl;
  cout<<"Area: "<<s2.Area()<<endl;
 
 
}