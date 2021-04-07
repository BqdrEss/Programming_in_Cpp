/*CH-230-A
a9_p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
// this is a guessing game
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 
int rando () { //for our random number
    int die ;
    int count = 0;
    int randomNumber ;
    srand ( static_cast < unsigned int >( time (0) ) );
    while ( count < 10) {
        count ++;
        randomNumber = rand () ;
        die = ( randomNumber % 100) + 1;
    }
    return die;
    }
void fct(int x,int y){                      //this function define if
    if (x<y){cout<<"too low!!"<<endl;}      //the given number is higher
    else if (x>y){cout<<"too high!!"<<endl;}//or lower than the random number
}
int main(){
    string s;
    int n;
    cout<<"enter your name: "<<endl;
    getline(cin,s);//entering a string from the keyboard
    int r= rando();//generating random number
    cout<<"enter your number :"<<endl;
    while(1){       //we begin a loop that wont end
        int c=0;    //counter
        cin>>n;     //until the given number
        fct(n,r);   //equals the random number
        c++;
        if(r==n){
            cout<<"youpii, "<<s<<" you got it right in "<<c<<"tries !!";
            break;  //a nice message when it's right
        }
    }
    return 0;
}