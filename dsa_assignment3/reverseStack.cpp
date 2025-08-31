#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
    stack<char>s;
    int n=str.size();
    for(int i=0;i<n;i++){
        s.push(str[i]);
    }
    string st="";
   while(!s.empty()){
    st+=s.top();
    s.pop();
   }

 return st;
}
int main(){
    string str="DataStructures";
cout<<reverse(str);
}

