/*
CH-230-A
a9_p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
using namespace std; //avoid using std
 
float a(float x);//calling the function
int main() {
    float x;
    cout<<"enter a value:  ";
    cin>>x;
    cout<<"absolute value of "<<x<<" is:  "<< a(x);
    return 0;
}
float a(float x){
    if (x< 0){//condition for negative terms
        return -x;
    }
    else{
        return x;
    }
}