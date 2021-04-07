/*
CH-230-A
a13 p7
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <exception>
 
using namespace std;
 
 
class OwnException: public exception {
    public:
        const char* what() {
            return "OwnException\n";
        }
};
 
 
void throw_exception(int exception) {
    switch(exception) {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException();
            break;
    }
}
 
int main() {
    int i = 0;
    while (i < 4){
        try {
            throw_exception(i);
        }
        catch (OwnException& ex) {
            cerr << "Caught in main: " << ex.what();
        }
        catch (char ex) {
            cerr << "Caught in main: " << ex << endl;
        }
        catch (int ex) {
            cerr << "Caught in main: " << ex << endl;
        }
        catch (bool ex) {
            cerr << "Caught in main: " << ex << endl;
        }
        i++;
    }
 
    return 0;
}
