/*
CH-230-A
a13 p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C: virtual public A
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
    public:
        D() : A(10), B(), C(){
        }
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
 
 
//we should create a constructor for D that declares the value
//of A, which is then inherited by classes B, C ,
//Otherwise there is connection missing between A and D
