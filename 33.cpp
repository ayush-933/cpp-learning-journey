#include<iostream>
using namespace std;
int main(){
   cout<<"enter the size of the array:" << endl;
   int n;
   cin >> n;
   int a[n];
   for(int i=0;i<n;i++){
        cin>>a[i];

   }
   int key;
   cout<<"enter the element you want to search:"<<endl;
   cin>>key;
   int s=0,e=n;
   while(1){
    int mid=(s+e)/2;
    if(a[mid]>key){
        e=mid-1;

    }
   else if(a[mid]<key){
        s=mid+1;
   
   }
   else if(a[mid]==key){
    cout<<"element found at index "<<mid <<" "<<endl;
    break;
   }
   if(s>e){
    cout<<"element not found"<<endl;
    break;
   }
   };

return 0;}