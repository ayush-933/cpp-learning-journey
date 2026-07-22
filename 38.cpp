#include<iostream>
using namespace std;
void update(int **p){
    **p=**p+1;
   

}
int main(){
    int p=5;
    int *p1=&p;
    int **p2=&p1;
   cout<<p<<endl;
   cout<<p1<<endl;
   cout<<p2<<endl;
   update(p2);
    cout<<p<<endl;
   cout<<p1<<endl;
   cout<<p2<<endl;



return 0;}