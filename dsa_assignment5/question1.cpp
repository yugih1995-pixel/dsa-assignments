#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() { head = NULL; }

    // (a) Insert at beginning
    void insertAtBeg(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // (b) Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }

    // (c) Insert before a specific value
    void insertBefore(int target, int value) {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }
        if (head->data == target) { // insert before first node
            insertAtBeg(value);
            return;
        }
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != target) {
            temp = temp->next;
        }
        if (temp->next == NULL) {
            cout << "Target " << target << " not found!\n";
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // (c) Insert after a specific value
    void insertAfter(int target, int value) {
        Node* temp = head;
        while (temp != NULL && temp->data != target) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Target " << target << " not found!\n";
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // (d) Delete at beginning
    void deleteAtBeg() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // (e) Delete at end
    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) temp = temp->next;
        delete temp->next;
        temp->next = NULL;
    }

    // (f) Delete specific node by value
    void deleteNode(int target) {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }
        if (head->data == target) {
            deleteAtBeg();
            return;
        }
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != target) {
            temp = temp->next;
        }
        if (temp->next == NULL) {
            cout << "Node " << target << " not found!\n";
            return;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }

    // (g) Search node
    void search(int value) {
        Node* temp = head;
        int pos = 1;
        while (temp != NULL) {
            if (temp->data == value) {
                cout << "Node " << value << " found at position " << pos << "\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Node " << value << " not found!\n";
    }

    // (h) Display
    void display() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    int choice, value, target;

    do {
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert Before a Node\n";
        cout << "4. Insert After a Node\n";
        cout << "5. Delete at Beginning\n";
        cout << "6. Delete at End\n";
        cout << "7. Delete Specific Node\n";
        cout << "8. Search for a Node\n";
        cout << "9. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtBeg(value);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                cout << "Enter target node value: ";
                cin >> target;
                cout << "Enter new value: ";
                cin >> value;
                list.insertBefore(target, value);
                break;
            case 4:
                cout << "Enter target node value: ";
                cin >> target;
                cout << "Enter new value: ";
                cin >> value;
                list.insertAfter(target, value);
                break;
            case 5:
                list.deleteAtBeg();
                break;
            case 6:
                list.deleteAtEnd();
                break;
            case 7:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;
            case 8:
                cout << "Enter value to search: ";
                cin >> value;
                list.search(value);
                break;
            case 9:
                list.display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}