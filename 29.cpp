#include<iostream>
using namespace std;

int fibonacci(int n){
     if(n<=2){
         return n-1;
     }
     else if(n==3){
            return 1;
     }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }}


int main(){
      
     int n;
     cin>>n;
     int ans=fibonacci(n);
     cout<<"the "<<n<<"th element of the fibonacci series is:"<<ans<<endl;

return 0;

}