#include<iostream>
#include<cmath>
using namespace std;
double cube(double num){
    double result=pow(num,3);
    return result;
}
int main(){
double res=cube(2.3);
cout<<"the cube of 2.3 is "<<res;
return 0;}