#include<iostream>
using namespace std;
void sortone(int arr[],int n){
     

     int i=0,j=n-1;
     while(i<j){
        if(arr[i]==0){
            i++;

        }
        else if(arr[j]==1){
            j--;
        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
     }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[9]={0,1,0,1,1,0,1,0,1};
    int n=9;
    sortone(arr,n);
    printarray(arr,n);
return 0;}