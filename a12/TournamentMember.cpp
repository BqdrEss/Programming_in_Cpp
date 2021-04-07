// please refer to shapes.h for methods documentation
 
#include <iostream>
#include "TournamentMember.h"
using namespace std;
 
char TournamentMember::loc[11] = "default";
TournamentMember::TournamentMember(){
    strcpy(fname, "default");
    strcpy(lname, "default");
    strcpy(date, "0000-00-00");
    cout<<"Tournamentmember was created\n"<<endl;
}
 
TournamentMember::TournamentMember(char nfname[],char nlname[],char ndate[], int nage, bool ngen){
    strcpy(fname, nfname);
    strcpy(lname, nlname);
    strcpy(date, ndate);
    age=nage;
    gen=ngen;
    cout<<"working on it...\n"<<endl;
}
 
TournamentMember::~TournamentMember(){
  cout<<"Tournamentmember was deleted\n"<<endl;
  }
 
TournamentMember::TournamentMember(const TournamentMember &p){
  strcpy(fname, p.fname);
  strcpy(lname, p.lname);
  strcpy(date, p.date);
  age=p.age;
  gen=p.gen;
  cout<<"Tournamentmember was copied\n"<<endl;
  }
 
void TournamentMember::setLoc(char nloc[]){
    strcpy(loc, nloc);
}
void TournamentMember::print(){
  cout<<"first name: "<<fname<< "\nlastname: "<<lname<<std::endl;
    cout<<"birthday: "<<date<<"\nage: "<<age<<"\ngender: ";
      if (gen){cout<<"Male"<<endl;}
    else{cout<<"Female"<<endl;}
    cout<<"location: "<<loc<<"\n"<<endl;
}
 
Player::Player(char nfname[], char nlname[], char ndate[], int nage,bool ngen, int nnum, char npos[], int ngoal, bool nfoot):
TournamentMember(nfname,nlname,ndate,nage,ngen){
  num=nnum;
  strcpy(pos,npos);
  goal=ngoal;
  foot=nfoot;
  cout<<"\nWorking on Player Class...!"<<endl;
}
 
Player::Player(const Player &p){
  num=p.num;
  strcpy(pos,p.pos);
  goal=p.goal;
  foot=p.foot;
  cout<<"Player was copied\n"<<endl;
}
 
Player::Player(){
  num=0;
  strcpy(pos,"0");
  goal=0;
  foot=0;
  cout<<"Player class was created\n"<<endl;
}
 
Player::~Player(){
  cout<<"\nPlayer class was deleted"<<endl;
}
 
void Player::printP(){
    cout<<"number: "<<num<<"\nposition: "<< pos<<endl;
    cout<<"goals: "<<goal<<"\n"<<"footed: ";
    if(foot){cout<<"right"<<endl;}
    else {cout<<"left"<<endl;}
}
  int Player::goal=0;
 void Player::scoredGoals(){
   goal+=1;
 }