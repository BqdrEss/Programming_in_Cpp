/*
CH-230-A
a13 p6
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>       // std::cerr
#include <stdexcept>      // std::out_of_range
#include <vector>
 
using namespace std;
 
int main (void) {
    vector <int> vec;
    for (int i = 0; i < 20; i++)
        vec.push_back(8);
 
    try {
        cout << vec.at(20) << endl;
    }
    catch (const out_of_range& oor) {
        cerr << "Error: " << oor.what() << '\n';
    }
    return 0;
}