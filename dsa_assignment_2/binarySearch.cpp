#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements--> ";
    cin>>n;
    int arr[n];
    cout<<"enter the "<<n<<" elements in sorted order :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    int flg=0;
    cout<<"enter the element you want to find--> ";
    cin>>x;
    int s=0,e=n-1;
    for(int i=0;i<n;i++){
        
        int mid=(s+e)/2;
        if(x==arr[mid]){
            cout<<"element found at index "<<mid;
            flg=1;
            break;
        }
        else if(x>arr[mid]){
            s=mid+1;
        }
        else e=mid-1;

        
    }
    if(flg==0)cout<<"element not in array";


}