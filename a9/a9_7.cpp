/*
CH-230-A
a9_p7
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
using namespace std;
 
void swapping(int &a,int &b) {
    int c;  //we use a temporary int
    c=a;    //to store elements while swapping
    a=b;
    b=c;
} // swap ints
void swapping(float &x,float &y) {
    float z;    //we use a temporary float
    z=x;        //to store elements while swapping
    x=y;
    y=z;
} // swap floats
void swapping(const char * &str1,const char * &str2) {
    const char *temp;   //we use a temporary char
    temp=str1;          //to store elements while swapping
    str1=str2;
    str2=temp;
} // swap char pointers
int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout<<"before swapping: "<<endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout<<"after swapping: "<<endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
