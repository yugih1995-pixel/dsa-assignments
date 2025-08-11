#include <stdio.h>

int arr[100];
int n=0;

void createArray() {
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array created successfully.\n");
}

void displayArray() {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement() {
    int pos, value;
    if (n == 0) {
        printf("Array is empty, please create it first.\n");
        return;
    }
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d", &value);
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
    printf("Element inserted.\n");
}

void deleteElement() {
    int pos;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Element deleted.\n");
}

void linearSearch() {
    int value, found = 0;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Enter value to search: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Value found at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Value not found in array.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("please select one option\n(1)CREATE\n(2)DISPLAY\n(3)INSERT\n(4)DELETE\n(5)LINEAR SEARCH\n(6)EXIT\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createArray(); break;
            case 2: displayArray(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: printf("exiting the menu");return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
