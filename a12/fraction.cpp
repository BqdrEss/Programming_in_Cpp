#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction()
{
    num = 1;
    den = 1;
}
 
Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
 
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}
 
int Fraction::gcd(int a, int b)
{
    if(a==0){return b;}
  else if(b==0){return a;}
  else if(a==b){return a;}
  else if(a<b){return Fraction::gcd(a,b-a);}
  else{return Fraction::gcd(a-b,b);}
}
 
int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
 
}
 
void Fraction::print()
{
    cout << num << "/" << den <<endl;
}
 
ostream & operator<<(ostream & out ,const Fraction & z ){
  if(z.den==1){cout<<z.num;}
  else{out << z.num << "/" << z.den;}
    return out;
}
 
istream & operator>>( istream & in ,Fraction & f ){
  int a,b;
  in >> a >>b;
  f.num=a;
  f.den=b;
  if (f.den == 0){std::cout<<"Math error";};
    return in;
}
 
bool Fraction::operator<(Fraction a){
  if(num*a.den > a.num*den){
    return false;
  }
  else{return true;}
}
 
bool Fraction::operator>(Fraction a){
  if(num*a.den < a.num*den){
    return false;
  }
  else{return true;}
}
void Fraction::operator=(Fraction &f){
    num=f.num;
    den=f.den;
}
 
Fraction Fraction::operator*(Fraction &f){
  Fraction a(num * f.num , den * f.den);
    return a;
}
Fraction Fraction::operator/(Fraction &f){
  Fraction a(num * f.den , den * f.num);
    return a;
}
Fraction Fraction::operator+(Fraction &f){
  int n=lcm(den,f.den);
  Fraction a(((num * n)/den)+ (n*f.num)/f.den , n);
    return a;
}
Fraction Fraction::operator-(Fraction &f){
  int n=lcm(den,f.den);
  Fraction a(num * n/den -(n*f.num)/f.den , n);
    return a;
}
