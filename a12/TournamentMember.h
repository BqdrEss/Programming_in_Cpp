/*
    Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#include <cstring>
 
class TournamentMember {            // base class
    private:                   // private access modifier: could also be protected
        char fname[36];    // first name
    char lname[36];   //last name
    char date[36];   //date of birth
    static char loc[11]; //location
    int age;    //
    bool gen;  //gender
    public:
        TournamentMember();                    // empty construct
    ~TournamentMember();
    TournamentMember(char fn[],char ln[],char ndate[], int nage, bool ngen);  //
        TournamentMember(const TournamentMember &p);        // copy constructor
    void print()  ;      // prints the name
    static void setLoc(char nloc[]);
 
    //setters and getters
    inline void setFname(char fn[]){strcpy(fname,fn);};
    inline void setLname(char ln[]){strcpy(lname,ln);};
    inline void setDate(char ndate[11]){strcpy(date,ndate);};
    inline void setAge(int nage){age=nage;};
    inline void setGen(bool ngen){gen=ngen;};
    inline char *getFname(){return fname;};
    inline char *getLname(){return lname;};
    inline char *getDate(){return date;};
    inline int getAge(){return age;};
    inline bool getGen(){return gen;};
 
};
class Player : public TournamentMember{
  private:
    int num;  //number
    char pos[3];  //position as "rf"or"cb"
    static int goal; //number ofgoal scored
    bool foot;  //the foot our player use(right/left)
  public:
    //constructors:
     Player(char nfname[], char nlname[], char ndate[], int nage, bool ngen, int nnum, char npos[], int ngoal, bool nfoot);
    Player(const Player&);
    Player();
    ~Player();
    //setters and getters:
    inline void setName(int nnum){num=nnum;};
    inline int getName(){return num;};
    inline void setPos(char npos[]){strcpy(pos,npos);};
    inline char *getPos(){return pos;};
    inline void setFoot(bool nfoot){foot=nfoot;};
    inline bool getFoot(){return foot;};
    //methods:
    void printP();
    static void scoredGoals();
};
#endif
