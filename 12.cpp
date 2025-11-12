#include<iostream>
using namespace std;
int main(){
    bool isStudent=false;
    bool isCollege=true;
    if(isStudent && isCollege){
        cout<<"you are a college student";
    }
    else if(isStudent && !isCollege){
        cout<<"you are a school student";
        
    }
      else if(!isStudent && isCollege){
        cout<<"you are a college staff";
        
    }
    else{
        cout<<"you are not a student";
    }
return 0;}