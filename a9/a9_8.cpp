/*
CH-230-A
a9_p8
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
using namespace std;
 
void subtract_max(int* arr,int n){
    int z=arr[0] ;
    for(int i=0;i<n;i++){//to define the max
         z=max(z,arr[i]);
       }
       for (int i = 0; i < n; i++){//we subtract the max from all the elements
        arr[i] = arr[i] - z;
    }
}
 
 
void deallocate(int* arr){//we free the memory
        delete []arr ;
        arr = NULL;
}
 
int main(){
    int n;
    cout<<"enter the size: "<<endl;
    cin >> n;
    int *a = new int[n];//memory allocation
    if (a == NULL) exit(1);
    cout<<"fill the array: "<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];  //we enter enter the elements of the array
            }
    cout << "\n";
    cout<<"array before subtracting: "<<endl;
    for(int i=0; i<n; i++){
        cout << a[i] << endl;//we print the array before subtracting
    }
    cout << "\n";
   subtract_max(a,n);
   cout<<"array after subtracting: "<<endl;
   for(int i=0; i<n; i++){
        cout << a[i] << endl;//we print the array after subtracting
    }
    cout << "\n";
    deallocate(a);
    return 0;
}