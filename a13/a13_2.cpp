/*
CH-230-A
a13 p2
Badr Essefiany
Bessefiany@jacobs-university.de
*/
 
#include<stdio.h>
#include<stdlib.h>
#include "Complex.h"
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    Complex z1, z2;
    ifstream in1, in2;
    ofstream out;
 
    in1.open("in1.txt", ios::in);
    in2.open("in2.txt", ios::in);
 
    out.open("output.txt", ios::out);
 
    in1 >> z1;
    in2 >> z2;
 
    cout << "z1 + z2 = " ;
    out << z1 + z2;
    cout << "z1 - z2 = " ;
    out<< z1 - z2;
    cout << "z1 * z2 = " ;
    out<< z1 * z2;
 
    out << z1 + z2;
    out << z1 - z2;
    out << z1 * z2;
 
    in1.close();
    in2.close();
    out.close();
 
    return 0;
}
