/*
CH-230-A
a9_p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include <algorithm> //we add this header to include count
using namespace std;
 
 int mycount(float x,float y){
    return y-x;
 }
 int mycount(char c,string s){
     int n = count(s.begin(), s.end(), c);
     return n; //count is used to determine the occurrence
 }             //of a char in a string
 int main(){
     float x=7,y=3;
     char c='i';
     string s="this is a string";
     cout<<"difference: "<<mycount(x,y)<<endl;//we print the first value returned
     cout<<"occurence: "<<mycount(c,s)<<endl;//we print the second value returned
     return 0;
 }