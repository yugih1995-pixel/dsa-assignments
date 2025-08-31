#include <bits/stdc++.h>
using namespace std;

int eval(vector<string>& arr) {
    stack<int> s;

    for (string token : arr) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = s.top();
             s.pop();
            int a = s.top();
             s.pop();

            if (token == "+"){
                 s.push(a + b);
            }
            else if (token == "-") s.push(a - b);
            else if (token == "*") s.push(a * b);
            else if (token == "/") s.push(a / b);
        } 
        else {
            s.push(stoi(token));
        }
    }

    return s.top();
}

int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);
    vector<string> expr;
    string token;

    while (iss >> token) {
        expr.push_back(token);
    }

    cout << eval(expr) << endl;

    return 0;
}