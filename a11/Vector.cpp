#include<iostream>
#include<math.h>
#include "Vector.h"
using namespace std;
 
Vector::Vector(){//empty constructor
  n = 0;
}
 
Vector::Vector(int newn,double *newv){
n=newn;
v=newv;
}
 
void Vector::setN(int newn){//setters
  n=newn;
}
 
void Vector::setV(double *newv){
  v=newv;
}
int Vector::getN(){//getters
  return n;
}
double* Vector::getV(){
  return v;
}
 
Vector::~Vector(){//destructors
  delete []v;
}
double Vector::Norm()const{//methods
  double norm=0;
  for(int i=0;i<n;i++){
    norm+=v[i]*v[i];
  }
  return sqrt(norm);
}
Vector Vector::add(const Vector &a)const{
  double *b= new double[n];
  for(int i=0;i<n;i++){
    b[i]=a.v[i]+v[i];
  }
  Vector v(n,b);
  return v;
}
Vector Vector::diff(const Vector &a)const{
  double *b= new double[n];
  for(int i=0;i<n;i++){
    b[i]=a.v[i]-v[i];
  }
  Vector v(n,b);
  return v;
}
 double Vector::scal_prod(const Vector &a)const{
   double b = 0;
   for(int i =0;i<n;i++){
     b += a.v[i]*v[i];
   }
   return b;
 }
 void Vector::print(){
   cout<<"[";
   for(int i=0;i<n;i++){
    if(i==n-1){
      cout<<v[i]<<" ]"<<endl;
     }
    else {
      cout<<v[i]<<" , ";
    }
   }
 }
