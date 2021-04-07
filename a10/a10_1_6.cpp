/*
CH-230-A
a10_p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
 #include <iostream>
 #include "Critter.h"
 using namespace std;
 
  int main() {
    //the first instance
    cout << "First case:" << endl;
    Critter c1;
    c1.setHunger(2);//we set hunger to 2
    c1.print();
 
    //the second instance
    cout <<endl<< "name 2:" ;
    string newname;
    getline(cin, newname);
    Critter c2(newname);
    c2.setHunger(2);//we set hunger to 2
    c2.print();
 
    //the third instance
    string newnewname;
    int  newnewhunger, newnewboredom;
    double newnewheight,newnewthirst;
    cout << endl<<"name3: ";
    getline(cin, newnewname);
    cout << "hunger: " ;
    cin >> newnewhunger;
    cout << "thirst: ";
    cin >> newnewthirst;
    cout << "boredom: ";
    cin >> newnewboredom;
    cout << "height: " ;
    cin >> newnewheight;
    Critter c3(newnewname, 2, newnewboredom,newnewheight);
    c3.print();
 
    //the fourth instance
    Critter c4(newnewname, 2, newnewboredom );
    c4.print();
 
    //the fifth instance
    Critter c5(newnewname, 2,newnewthirst, newnewboredom,newnewheight);
    c5.print();
    return 0;
    }
