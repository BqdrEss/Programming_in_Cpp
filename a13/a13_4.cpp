/*
CH-230-A
a13 p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
using namespace std;
 
class A {
  int x;
  public:
    void setX(int i) {
      x = i;
    }
    void print() {
      cout << x << endl;
    }
};
 
 
class B: virtual public A {
  public:
    B() {
      setX(10);
    }
};
 
class C: virtual public A
{
  public:
    C() {
      setX(20);
    }
};
 
 
class D: public B, public C {
};
 
int main()
{
  D d;
  d.print();
  return 0;
}
//the program is confused for the print function,
//it is called in 2 classes B and C so it does not know
// if it should print 20 or 10
