#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>&A,int n){
     for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        int temp=A[i];
        A[i]=A[min];
        A[min]=temp;
     }
     
}


int main(){
     vector<int> A={64,25,12,22,11};
        int n=A.size();
        selectionsort(A,n);
        cout<<"sorted array: "<<endl;
        for(int i=0;i<n;i++){
            cout<<A[i]<<" ";
        }
return 0;}