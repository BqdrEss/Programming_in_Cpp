#include "Creature.h"
//default constructor will also inherite a distance of 10
Creature::Creature(): distance(10){
}
//default constructor will also inherite a
Wizard::Wizard() : distFactor(3){
    cout<<"A new wizard has spawned!"<<endl;
}
//default constructor will also inherite an invisibility percentage of 40%
Ghost::Ghost() : invisibility(40){
    cout<<"A new ghost has spawned!"<<endl;
}
//default constructor will also inherite a biteforce of 5
Zombie::Zombie() : bite(5){
    cout<<"A new zombie has spawned!"<<endl;
}
 
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
 
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
 
void Ghost::Inv() const
{
    cout << "Ghost is " << invisibility << "% invisible !\n";
}
 
void Zombie::Bite() const
{
    cout << "Zombie has a bite of " << bite << " tonnes!\n";
}
    //destructor messages
 
Wizard::~Wizard(){
    cout<<"\nWizard died!!"<<endl;
}
 
Ghost::~Ghost(){
    cout<<"\nGhost died!!"<<endl;
}
 
Zombie::~Zombie(){
    cout<<"\nZombie died!!"<<endl;
}
