#include<iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int top;
    int capacity;

public:
    Queue(int size) {
        capacity = size;
        top = size;
    }

    void push(int value) {
        if (top == 0) {
            cout << "queue Overflow! Cannot push " << value << endl;
        } else {
            arr[--top] = value;
            cout << value << " pushed into queue" << endl;
        }
    }

    void pop() {
        if (top == capacity) {
            cout << "queue Underflow! No element to pop." << endl;
        } else {
            cout << arr[top] << " is popped out." << endl;
            top++;
        }
    }

    void ifEmpty() {
        if (top == capacity) cout << "queue is empty." << endl;
        else cout << "queue is not empty." << endl;
    }

    void ifFull() {
        if (top == 0) cout << "queue is full." << endl;
        else cout << "queue is not full." << endl;
    }

    void peek() {
        if (top == capacity) cout << "queue is empty, no top element." << endl;
        else cout << "front element is: " << arr[top] << endl;
    }

    void display() {
        if (top == capacity) {
            cout << "queue is empty." << endl;
        } else {
            cout << "queue elements are: ";
            for (int i = capacity-1; i >= top; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of queue -> ";
    cin >> size;

    Queue s(size);
    int choice, value;

    while (1) {
        cout << "\nqueue Menu:\n";
        cout << "1 -> enque\n";
        cout << "2 -> deque\n";
        cout << "3 -> Check if empty\n";
        cout << "4 -> Check if full\n";
        cout << "5 -> Peek\n";
        cout << "6 -> Display the queue\n";
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