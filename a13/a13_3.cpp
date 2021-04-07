/*
CH-230-A
a13 p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
 
using namespace std;
 
int main () {
    char ch, c = '\n';
    ofstream con;
    int n;
 
    //creating source file
   con.open("concatn.txt");
    if (!con) {
        cerr << "Error opening file." << endl;
        return 0;
    }
 
    //number of files to input
    cin >> n;
 
    //inputting file names
    string fname[n];
    for (int i = 0; i < n; i++) {
        cin >> fname[i];
    }
 
    for (int i = 0; i < n; i++) {
        //converting name from string to array of chars
        int len = fname[i].length();
        char arr[len + 1];
        strcpy(arr, fname[i].c_str());
 
        //reading files with input names
        ifstream temp;
        temp.open(arr);
        if (!temp) {
            cerr << "Error !!!" << endl;
            return 0;
        }
 
        //copying file content from temp to concatn
        while (temp.eof() == 0) {
            temp >> ch;
            con << ch;
        }
        con << c;
        temp.close();
    }
    con.close();
 
    return 0;
}
