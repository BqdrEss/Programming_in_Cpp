#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */
class City
{
private:  // data members are private
    string name;
    int numb;
    string mayor;
    double area;
 
public: // business logic methods are public
    //constructor:
    City (string aname,int anumb,string amayor,double aarea);
    // setter methods
    void setName(string& newname);
    void setNumb(int newnumb);
    void setMayor(string& newmayor);
    void setArea(double newarea);
    // getter method
    string getName();
    int getNumb();
    string getMayor();
    double getArea();
    // service method
    void print();
};
