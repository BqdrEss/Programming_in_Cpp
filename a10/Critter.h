#include <string>
 using namespace std;
 
 class Critter {
    //private data
    private:
    string name;
    double hunger;
    int boredom;
    double height;
    double thirst;
    //we add 2 functions
    double conv(double);
    int conv();
    public:
    //our 3 constructors
    Critter();
    Critter(string);
    Critter(string, double, int, double=10.00);
    Critter(string, double,double, int, double);
    // setter methods
    void setName(string& newname);
    void setHunger(double newhunger);
    void setThirst(double newthirst);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    // getter methods
    string getName();
      double getHunger();
    double getThirst();
    int getBoredom();
    double getHeight();
      // service method
      void print();
};
