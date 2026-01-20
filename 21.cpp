#include<iostream>
using namespace std;
class first_standard{
    public:
      string name;
      int roll_number;
      char grade;
    first_standard(string A_name,int A_roll_number,char A_grade){
      name=A_name;
      roll_number=A_roll_number;
      grade=A_grade;

    }

};
class topper: first_standard{
  
    if(grade<'c'||grade<'C'){
        cout<<"you are in the topper group";
    }
};
int main(){
    topper ayush("ayush",15,'A');
    cout<<ayush.grade;
return 0;}