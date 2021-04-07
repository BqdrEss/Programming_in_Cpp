#include <iostream>
#include "City.h"
 
City::City (string aname,int anumb,string amayor,double aarea){
  name=aname;
  numb=anumb;
  mayor=amayor;
  area =aarea;
}
void City::setName(string& newname) {
    name = newname;
}
 
void City::setNumb(int newnumb) {
    numb = newnumb;
}
void City::setMayor(string& newmayor) {
    mayor = newmayor;
}
void City::setArea(double newarea) {
    area = newarea;
}
void City::print(){
    cout << "City: " <<name<<endl;
    cout<< "Number of inhabitants : " << numb << endl;
    cout<< "Mayor : " << mayor <<endl;
    cout<<"Area : "<<area<<"km2"<<endl;
    cout<<"\n\n"<<endl;
}
string City::getName(){
    return name;
}
 
int City::getNumb() {
    return numb;
}
 
string City::getMayor(){
    return mayor;
}
 
double City::getArea() {
    return area;
}
