#include<iostream>
#include<string>
using namespace std;
class studentDB {
  public:
     string name;
     int roll_number;
     string branch;
     studentDB(string Aname,int Aroll_number,string Abranch){
        name=Aname;
        roll_number=Aroll_number;
        branch=Abranch;
     }
     
};

int main(){
   studentDB s1("ayush",15,"EEE");
   cout<<s1.name<<" "<< s1.roll_number<<" "<< s1.branch;
return 0;
}