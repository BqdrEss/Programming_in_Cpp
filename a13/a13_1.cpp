/*
CH-230-A
a13 p1
Badr Essefiany
Bessefiany@jacobs-university.de
*/

#include <regex>
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
 
using namespace std;
 
 
int main(int argc, const char * argv[]) {
    string fname;
    cout<<"enter file name: ";
    cin>>fname;
    string rn = fname;
    string o = "";
    int i;
    for (i = sizeof(fname)- 1; i >= 0; i--){
        if (fname[i] == '.'){
            break;
        }
    }
    fname.insert(i, "_copy");
    cout<<fname<<endl;
    ifstream src(rn);
    if (!src.good()){
        cout<<"File not found"<<endl;
        exit(1);
    }
    ofstream out(fname);
    if (!out.good()){cout<<"error opening output file"; exit(1);}
    string str;
    while(getline(src, str)){
        out << str<<endl;
 
    }
 
    return 0;
}
