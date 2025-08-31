#include<iostream>
using namespace std;

class Stack {
private:
    int arr[100];
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        top = -1;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! No element to pop." << endl;
        } else {
            cout << arr[top] << " is popped out." << endl;
            top--;
        }
    }

    void ifEmpty() {
        if (top == -1) cout << "Stack is empty." << endl;
        else cout << "Stack is not empty." << endl;
    }

    void ifFull() {
        if (top == capacity - 1) cout << "Stack is full." << endl;
        else cout << "Stack is not full." << endl;
    }

    void peek() {
        if (top == -1) cout << "Stack is empty, no top element." << endl;
        else cout << "Top element is: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of stack -> ";
    cin >> size;

    Stack s(size);
    int choice, value;

    while (1) {
        cout << "\nStack Menu:\n";
        cout << "1 -> Push element\n";
        cout << "2 -> Pop element\n";
        cout << "3 -> Check if empty\n";
        cout << "4 -> Check if full\n";
        cout << "5 -> Peek\n";
        cout << "6 -> Display the stack\n";
        cout << "7 -> Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element you want to push -> ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.ifEmpty();
                break;
            case 4:
                s.ifFull();
                break;
            case 5:
                s.peek();
                break;
            case 6:
                s.display();
                break;
            case 7:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid input! Try again." << endl;
        }
    }
}