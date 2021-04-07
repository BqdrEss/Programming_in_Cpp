/*
CH-230-A
a13 p8
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include <exception>
 
using namespace std;
 
class Motor {
    public:
        Motor(){throw "This motor has problems";}
};
 
class Car {
    public:
        Car() {try {Motor m;}
            catch (const char* err) {
                cerr << err << endl;
                throw "The car in this garage has problems with the motor";
            }
        }
};
 
class Garage {
    public:
        Garage() {
            try {
                Car c;
            }
            catch (const char* err) {
                throw err;
            }
        }
};
 
int main() {
    try {
        Garage g;
    }
    catch (const char* err) {
        cerr << err << endl;
    }
 
    return 0;
}
