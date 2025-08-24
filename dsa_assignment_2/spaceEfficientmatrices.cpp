#include <iostream>
using namespace std;

void diagonalMatrix(int n) {
    int arr[n];
    cout << "Enter " << n << " diagonal elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nDiagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << arr[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

void triDiagonalMatrix(int n) {
    int size = 3 * n - 2;
    int arr[size];

    cout << "Enter full " << n << "x" << n << " matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (i - j == 1) arr[i-1] = x;          
            else if (i == j) arr[n+i-1] = x;       
            else if (i - j == -1) arr[2*n+i-1] = x;
        }
    }

    cout << "\nTri-diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i - j == 1) cout << arr[i-1] << " ";
            else if (i == j) cout << arr[n+i-1] << " ";
            else if (i - j == -1) cout << arr[2*n+i-1] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

void lowerTriangularMatrix(int n) {
    int size = n*(n+1)/2;
    int arr[size];

    cout << "Enter full " << n << "x" << n << " matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (i >= j) {
                int index = i*(i+1)/2 + j;
                arr[index] = x;
            }
        }
    }

    cout << "\nLower Triangular Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << arr[i*(i+1)/2 + j] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

void upperTriangularMatrix(int n) {
    int size = n*(n+1)/2;
    int arr[size];

    cout << "Enter full " << n << "x" << n << " matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (i <= j) {
                int index = i*n - (i*(i-1))/2 + (j-i);
                arr[index] = x;
            }
        }
    }

    cout << "\nUpper Triangular Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) cout << arr[i*n - (i*(i-1))/2 + (j-i)] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

void symmetricMatrix(int n) {
    int size = n*(n+1)/2;
    int arr[size];

    cout << "Enter full " << n << "x" << n << " matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (i >= j) {
                int index = i*(i+1)/2 + j;
                arr[index] = x;
            }
        }
    }

    cout << "\nSymmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << arr[i*(i+1)/2 + j] << " ";
            else cout << arr[j*(j+1)/2 + i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, n;
    cout << "Enter size of matrix: ";
    cin >> n;

    cout << "\nMenu:\n";
    cout << "1. Diagonal Matrix\n";
    cout << "2. Tri-diagonal Matrix\n";
    cout << "3. Lower Triangular Matrix\n";
    cout << "4. Upper Triangular Matrix\n";
    cout << "5. Symmetric Matrix\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: diagonalMatrix(n); break;
        case 2: triDiagonalMatrix(n); break;
        case 3: lowerTriangularMatrix(n); break;
        case 4: upperTriangularMatrix(n); break;
        case 5: symmetricMatrix(n); break;
        default: cout << "Invalid choice!\n";
    }

    return 0;
}