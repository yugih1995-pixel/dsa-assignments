#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements--> ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
cout<<mpp.size();
}