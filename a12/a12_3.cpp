/*
CH-230-A
a12 p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>
using namespace std;
int main() {
  TournamentMember t1;
  t1.print();
 
    char fname0[36] = "Friciano";
    char lname0[36] = "Norbel";
    char date0[11] = "1923-07-29";
 
    TournamentMember t2(fname0, lname0, date0, 23, 1);
    t2.print();
 
  char fname1[36] = "Abdelhak";
    char lname1[36] = "Boukarawi";
    char date1[11] = "1212-12-12";
  char loc1[11] = "SidiKassem";
 
    TournamentMember t3(fname1, lname1, date1, 12, 0);
  t3.setLoc(loc1);
  t3.print();
 
  TournamentMember t4(t3);
  t4.print();
 
  Player p1;
  p1.printP();
 
  int num0 = 21;
  char pos0[3]="DC";
  int goal0 = 2;
  bool foot0 = 1;
  Player p2(fname1,lname1,date1,12,0,num0,pos0,goal0,foot0);
  p2.printP();
 
  Player p3(p2);
  p3.printP();
  return 0;
}
