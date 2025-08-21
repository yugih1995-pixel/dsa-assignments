#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements--> ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in a sorted order:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<"missing element was "<<i+1;
            break;
        }
    }
}