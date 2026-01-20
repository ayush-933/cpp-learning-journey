#include<iostream>
using namespace std;
int main(){


        int n,count=0,count2=-1;
        cin>>n;
        for(int i=1;i<n;i++){
            for(int j=1;j<=i;j++){
                count++;
                
                cout<<count<<" ";
            }
            count2++;
            count=count-count2;
            cout<<endl;
        }
return 0;}