#include<iostream>
using namespace std;
int main(){
float x,y,sum,difference,product,quotient;
char op;
cout<<"enter two numbers:   ";
cin>>x>> y;
cout<<"enter the arithematic operation you want to do:";
cin>>op;
if(op=='+'){
    sum=x+y;
    cout<<sum;
} else if(op=='-'){
    difference=x-y;
    cout<<difference;
} else if(op=='*'){
    product=x*y;
    cout<<product;
} else if(op=='/'){
    if(y==0){
        cout<<"Error: division by zero";
    } else {
        quotient=x/y;
        cout<<quotient;
    }
} else {
    cout<<"Unknown operator";
}
    
    
    return 0;
}

