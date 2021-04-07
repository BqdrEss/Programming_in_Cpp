/*
CH-230-A
a9_p6
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
using namespace std;
 
int myfirst(int c[],int n){
    for(int i=0;i<n; i++)    //to determine and returns
        if(c[i]>0 && c[i]%2==0){ //the first positive and even value
            return  c[i];
            break;
        }
            return -1;   //returns -1 in other case
}
 
double myfirst(double c[],int n){
    for(int i=0; i<n ;i++)
        if(c[i]<=0 && c[i]==(int)c[i]){   //to determine and returns
            return  c[i];                    //the first negative element which
            break;                          //does not have a fractional part
        }
            return -1.1;   //returns -1.1 in other case
}
 
char myfirst(char c[]){
    for(int i=0;c[i]!='\0';i++){//to determine and returns consonants
        if((('a'<=c[i])&&(c[i]>='z'))||(('A'<=c[i])&&(c[i]>='Z'))){
           if((c[i]!='a') && (c[i]!='e') && (c[i]!='o') && (c[i]!='i') && (c[i]!='u')
              &&(c[i]!='A') && (c[i]!='E') && (c[i]!='O') && (c[i]!='I') && (c[i]!='U')){
                    return  c[i];
            }
        }
    }
    return '0';     //returns char 0 in other case
}
 
int main(){
     int arr11[5] = { -5, 3, 15, 40, 12071 };   //array of integers with positive and even value
     int arr12[5] = { 15, 3, 77, -40, 12071 };  //array of integers without positive and even value
     double arr21[5] = { 16.87, 2.0, 77.777, -40.01, -12071.00 }; //array of doubles
     double arr22[5] = { 16.87, 2.5, 77.777, -40.01, 17.98 }; //array of doubles
     char arr31[] = { "aeoiuAEbtot"};   //array of chars with  consonant
     char arr32[] = {  "aeoiuAEOUI" }; //array of chars with no consonant
     cout<<myfirst(arr11,5)<<endl;    //we print our arrays
     cout<<myfirst(arr12,5)<<endl;
     cout<<myfirst(arr21,5)<<endl;
     cout<<myfirst(arr22,5)<<endl;
     cout<<myfirst(arr31)<<endl;
     cout<<myfirst(arr32)<<endl;
    return 0;
 }