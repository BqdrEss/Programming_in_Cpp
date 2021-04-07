/*
CH-230-A
a12 p1
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>
using namespace std;
int main() {
 
    Hexagon h0("Hexagon1",2,3,9,"blue");
    Hexagon h1("Hexagon2",0,0,15,"green");
    Hexagon h2=h1;
    h0.printName();
    cout<<"Perimeter :"<<h0.Perimeter()<<endl;
    cout<<"Area :"<<h0.Area()<<endl;
    h0.printName();
    cout<<"Perimeter :"<<h1.Perimeter()<<endl;
    cout<<"Area :"<<h1.Area()<<endl;
    h2.printName();
    cout<<"Perimeter :"<<h2.Perimeter()<<endl;
    cout<<"Area :"<<h2.Area()<<endl;
    return 0;
}
