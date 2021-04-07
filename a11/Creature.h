#ifndef __CREATURE_H
#define __CREATURE_H
 
#include <iostream>
using namespace std;
 
class Creature {
    public:
        Creature();
        void run() const;
 
    protected:
        int distance;
};
 
class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;
        ~Wizard();
 
    private:
        int distFactor;
};
 
class Ghost : public Creature {
    public:
        Ghost();
        void Inv() const;
        ~Ghost();
 
    private:
        int invisibility;
};
 
class Zombie : public Creature {
    public:
        Zombie();
        void Bite() const;
        ~Zombie();
 
    private:
        int bite;
};
#endif
