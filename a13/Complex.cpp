#include <iostream>
#include "Complex.h"
using namespace std;
 
 
Complex::Complex() {
    r = 0;
    im = 0;
}
 
Complex::Complex(double nr, double ni) {
    r = nr;
    im = ni;
}
 
Complex::Complex(Complex& c) {
    r = c.r;
    im = c.im;
}
 
Complex::~Complex() {}
 
void Complex::setR(double nr) {
    r = nr;
}
 
void Complex::setIm(double ni) {
    im = ni;
}
 
double Complex::getR() {
    return r;
}
 
double Complex::getIm() {
    return im;
}
 
void Complex::print() {
    if (im > 0){
            cout << r << "+" << im << "i" << endl;
    }
    else if (im < 0){
            cout << r <<"-"<< im << "i" << endl;
    }
    else
        cout << r << endl;
}
 
 
void Complex::conjugate() {
    if (im < 0)
        cout << r << "+" << "+" << -im << "i" << endl;
    else if (im > 0)
        cout << r << "-" << -im << "i" << endl;
    else
        cout << r << endl;
}
 
 
 
istream& operator >> (istream& in, Complex& c) {
    in >> c.r;
    in >> c.im;
    return in;
}
 
 
ostream& operator << (ostream& out, const Complex& c) {
    if (c.im > 0)
        out << c.r << "+" << c.im << "i" << endl;
    else if (c.im < 0)
        out << c.r << "-" << c.im << "i" << endl;
    else
        out << c.r << endl;
    return out;
}
 
Complex Complex::operator + (const Complex& c) {
    Complex sum;
    sum.r=r+c.r;
    sum.im=im+c.im;
    return sum;
}
 
 
Complex Complex::operator - (const Complex& c) {
    Complex diff;
    diff.r=r-c.r;
    diff.im=im-c.im;
    return diff;
}
 
Complex Complex::operator * (const Complex& c) {
    Complex prod;
    prod.r=r*c.r-im*c.im;
    prod.im=im*c.r+r*c.im;
    return prod;
}
 
void Complex::operator = (const Complex& c) {
    r=c.r;
    im=c.im;
}
