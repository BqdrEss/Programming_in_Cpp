/*
CH-230-A
a9_p9
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <iostream>
#include <string.h>
#include<ctime>
#include<cstdlib>
using namespace std;
 
int rando ();   //function that gives us randomness
 
int main (){
    cout<<"try to guesse the word: "<<endl;
    int n;
    string s[17]={"computer","television","keyboard","laptop","mouse","tray","ball",    //the 17 word from where
    "laptop","suit","president","seeds","element","guess","loser","winner","fire","alarm"}; //the program will chose
    while(1){
        int c=0;
        n=rando();
        string ran =s[n];   //we choose randomly one word from the string
        string str,temp=ran;
        string vowels = "aeiou";
        while (temp.find_first_of(vowels) != string::npos) { //replaced the vowel with '_'
            temp[temp.find_first_of(vowels)] = '_';
        }
        cout<<temp<<endl;
        while(1){
            c++;      //we begin a loop that wont end
            cin>>str;//until the given number equals the random number
            if(str==ran){
            cout<<"you got it in "<<c<<" tries"<<endl;
            cout<<"would like to play again, if no type quit"<<endl;
            break;
            }
            if(str =="quit"){
                break;  //a nice message when it's right
            }
        }
        if(str =="quit"){
                break;  //a nice message when it's right
            }
        }
    return 0;
}
 
int rando () { //for our random number
    int die ;
    int count = 0;
    int randomNumber ;
    srand ( static_cast < unsigned int >( time (0) ) );
    while ( count < 10) {
        count ++;
        randomNumber = rand () ;
        die = ( randomNumber % 17) + 1;
    }
    return die;
    }
