/*
CH-230-A
a11 p2
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;
int main()
{
    //we create our first instances
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
 
    //we create our second instances
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
 
    //we create our third instances
    cout << "\nCreating a Ghost.\n";
    Ghost g;
    g.run();
    g.Inv();
 
    //we create our last instances
    cout << "\nCreating a Zombie.\n";
    Zombie z;
    z.run();
    z.Bite();
 
    return 0;
}
