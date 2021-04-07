/*
CH-230-A
a11 p6 cpp
Badr Essefiany
bessefiany@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
using namespace std;
 
int main() {
 double *a= new double[2]{4,3};
double *b= new double[2]{5,4};
 Vector v1();
 Vector v2(2,a);
 Vector v3=v2;
 Vector v4(2,b);
 cout<<"norm of v2: "<<v2.Norm()<<endl;
 cout<<"scalar product :"<<v2.scal_prod(v4)<<endl;
 cout<<"sum: ";
 v2.add(v4).print();
 cout<<"difference: ";
 v2.diff(v4).print();
 return 0;
}
