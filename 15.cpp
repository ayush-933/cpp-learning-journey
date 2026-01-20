
#include<iostream>
using namespace std;
int main(){
     int option,amount,withdraw,deposit;
     cout<<"enter the amount:";
     cin>>amount;
    for(int i=1;i>0;i++){
        cout<<"choose an option:\n1.bank balance\n2.withdraw\n3.deposit\n4.exit";
        cout<<"option:";
        cin>>option;
        if(option==1){
            cout<<"your current bank balance is:"<<amount<<"\n";
        }
        else if(option==2){
            cout<<"enter the amount u want to withdraw:"<<"\n";
            cin>>withdraw;
            amount=amount-withdraw;
        }
        else if(option==3){
            cout<<"enter the amount u want to deposit:"<<"\n";
            cin>>deposit;
            amount=amount+deposit;
        }
        else break;
    }
return 0;}