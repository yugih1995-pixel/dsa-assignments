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

Node* reverse(Node* head){
    Node* prev=NULL,*cur=head,*nxt=NULL;
    while(cur){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    return prev;
}

void print(Node* h){
    while(h){ cout<<h->data<<" "; h=h->next; }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    int arr[]={1,2,3,4};
    for(int x:arr) head=insert(head,x);
    cout<<"Original: "; print(head);
    head=reverse(head);
    cout<<"Reversed: "; print(head);
}