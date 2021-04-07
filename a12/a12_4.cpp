/*
CH-230-A
a12 p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
 
using namespace std;
 
int main(void)
{
    Fraction a(4, 1);
    Fraction b(3, 1);
    Fraction c(5);
  Fraction d;
  Fraction e;
 
    a.print();
    b.print();
    c.print();
 
  cin>>d;
  cin>>e;
  cout<<"the geatest fraction is: ";
  if(d<e){cout<<e<<endl;}
  else if(d>e){cout<<d<<endl;}
  cout<<"product: "<<d*e<<endl;
  cout<<"quotient: "<<d/e<<endl;
  cout<<"sum: "<<d+e<<endl;
  cout<<"difference: "<<d-e<<endl;
}
