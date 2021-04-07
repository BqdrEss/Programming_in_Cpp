/*
CH-230-A
a10_p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"
 
int main()
{
    //her we enter the three instances
    City Paris("Paris",10784830,"Hamid le pain1",105.4);
    City London("London",20584435,"Hamid le pain2",132.5);
    City Bremen("Bremen",37744306,"Hamid le pain3",74.8);
    //her we print the instances
    Paris.print();
    London.print();
    Bremen.print();
 
    return 0;
}
