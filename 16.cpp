#include<iostream>
using namespace std;
int power(int a,int b){
    int power=1;

    for(int i=0;i<b;i++){
        power=power*a;
        
    }
    return power;
}
int main(){
   int res=power(2,3);
   cout<<res;
return 0;}