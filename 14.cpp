#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int randomNum=(rand()%100+1);
    int num,count=0;
    cout<<"Enter a number between 1 to 100:";
    cin>>num;
    while(num!=randomNum){
        if(num>randomNum){
            cout<<"Try a lower number\n";
        }
        else if(num<randomNum){
           cout<<"Try a higher number\n";

        }

        cout<<"Try again:";
        cin>>num;
        count ++;
        }
        cout<<"Congratulations u guessed the right number\n";
        cout<<"Number of guesses u used :"<<count;
        
         return 0;
    }
        
    



