/*
CH-230-A
a11 p1
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include<iostream>
#include "Box.h"
using namespace std;
 
int main( ){
 
    int n;
    cout<<"enter number of boxes"<<endl;
    cin>>n;
    //we dynamically create an array of 2∗n boxes
    double height[n], width[n],depth[n];
    Box* b = new Box[2*n];
 
    for (int i =0;i<n;i++){
        cout<<"\n\nHeight: ";
        cin>>height[i];
        cout<<"Width: ";
        cin>>width[i];
        cout<<"Depth: ";
        cin>>depth[i];
    }
    //we set the variables
    for (int i=0;i<n;i++){
      b[i].setHeight(height[i]);
      b[i].setWidth(width[i]);
      b[i].setDepth(depth[i]);
    }
    //we copy n boxes in the other n
    for (int i =0;i<n;i++){
      b[n+i]=b[i];
    }
 
    //printing the volume
    for(int i=0;i<2*n;i++){
      cout<<"\nvolume "<<i+1<<" = "<< b[i].getHeight()*b[i].getDepth()*b[i].getWidth()<<endl;
    }
    //free memory
    delete [] b;
    return 0;
}
