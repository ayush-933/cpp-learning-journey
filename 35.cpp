#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertbegin(int v){
    struct node *n,*temp;
    n=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        n->data=v;
        n->next=NULL;
        head=n;
    }
    else{
        n->data=v;
        n->next=head;
        head=n;
    }
}
int main(){
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
return 0;}