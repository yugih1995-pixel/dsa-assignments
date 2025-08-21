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
    int s=0,e=n-2;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==mid+1){
            s=mid+1;
            
           
        }
        else if(arr[mid]>mid+1){
            e=mid-1;
            
        }
          
        }
        cout<<s+1;
    }
