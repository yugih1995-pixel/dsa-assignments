#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size-> ";
    cin>>size;
    int value;
    queue<int>q;
    
    cout<<"enter the elements:\n";
    for(int i=0;i<size;i++){
        cin>>value;
        q.push(value);
    }
    int n= q.size();
   
     
     queue<int>y;
     queue<int>x;
     for(int i=0;i<n/2;i++){
           y.push(q.front());
           q.pop();
     }
      for(int i=0;i<n/2;i++){
           x.push(q.front());
           q.pop();
     }
     for(int i=0;i<n/2;i++){
        q.push(y.front());
        q.push(x.front());
        y.pop();
        x.pop();

     }
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
}