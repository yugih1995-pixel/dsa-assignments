#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int v){ data=v; next=NULL; }
};

Node* insert(Node* head,int v){
    Node* n=new Node(v);
    if(!head) return n;
    Node* t=head;
    while(t->next) t=t->next;
    t->next=n;
    return head;
}

int findMiddle(Node* head){
    Node* slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}

int main(){
    Node* head=NULL;
    int arr[]={1,2,3,4,5};
    for(int x:arr) head=insert(head,x);
    cout<<"Middle: "<<findMiddle(head)<<endl;
}