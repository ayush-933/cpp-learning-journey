#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string SayDigit(int n){
    if(n==0) return "";
    int digit=0;
    digit=n%10;
    
    string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string ans="";
    ans=arr[digit]+" ";
    return SayDigit(n/10)+ans;


}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    string result=SayDigit(n);
   

    cout<<result<<endl;
  
return 0;}