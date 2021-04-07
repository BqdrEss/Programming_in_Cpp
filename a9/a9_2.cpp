/*
CH230-a
a9_p2
Badr Essefiany
bessefiany@jacobs-university.de
*/
#include <iostream>
 
using namespace std;
int main() {
    int n, i;
    double x;
    string s;
    cin >> n >> x >> s;
    for (i = 0; i < n; i++) {
        cout << s << ":" << x << endl;
    }
    return 0;
}