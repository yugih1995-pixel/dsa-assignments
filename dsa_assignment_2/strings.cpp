#include<iostream>
#include<string>
using namespace std;
void conc(){
 string a,b;
        cin>>a;
        cin>>b;
        cout<<a+b;
}
void reverse(){
    string a;
    cin.ignore();
    getline(cin,a);
    int i=0,j=a.size()-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<a;
}
void deletes(){
    string a;
    cin.ignore();
    getline(cin,a);
    char c[a.size()];
    for(int i=0;i<a.size();i++){
        c[i]=a[i];
    }
    string total="";
    for(int i=0;i<a.size();i++){
      if(!(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||
           c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'))
           total+=c[i];
    }
    cout<<total;
}
void order(){
    string a;
    cin>>a;
    
      int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
               int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
            }
        }
    }
    cout<<a;
}
void convert(){
    char a;
    cin>>a;
    
        if (a >= 'A' && a <= 'Z') a = a + 32;
        cout << a;
}





int main(){
    int x;
    cout<<"choose an option\n";
    cout<<"(1)->concatenate one string to another\n";
    cout<<"(2)->reverse a string\n";
    cout<<"(3)->delete all vowels from string\n";
    cout<<"(4)->sort strings in alphabetical order\n";
    cout<<"(5)->convert uppercase to lowercase\n";
    cin>>x;

    if(x==1){
       conc();
    }

    else if(x==2){
        reverse();
    }
    
    else if(x==3){
        deletes();
    }

    else if(x==4){
        order();
    }

    else if(x==5){
        convert();
    }

}
