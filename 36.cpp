#include<iostream>
using namespace std;
int main(){
   char c[6]="abcde";
   char *ptr=&c[0];
   cout<<ptr<<endl;
   cout<<c<<endl;
   char a='\0';
   char *p=&a;
   cout<<p<<endl;
return 0;}