#include<bits/stdc++.h>
using namespace std;

bool check(string k){
	
	stack<char> s;
	
	for(char ch:k){
		if(ch == '{' || ch == '[' || ch == '('){
			s.push(ch);
			
		}
		
		else{
			if(s.empty()) return false;
			
			char top = s.top();
			if((ch == ')' && top != '(') ||
			  (ch == ']' && top != '[') ||
			  (ch == '}' && top != '{'))
			  return false;
			  
			  s.pop(); 
		}
	}
	
	return s.empty();
	
}

int main() {
    string expr;
    cout << "Enter an expression with brackets: ";
    cin >> expr;

    if (check(expr)) {
        cout << "Balanced\n";
    } else {
        cout << "Not Balanced\n";
    }

    return 0;
}