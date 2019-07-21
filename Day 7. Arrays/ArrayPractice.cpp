#include <iostream>

using namespace std;

void printArray(int array[]) {
    int array_size = sizeof(array)/sizeof(array[0]);
    cout << "Size of array: " << array_size << endl;
    cout << "[";
    for (int i=0; i<=array_size; i++) {
        cout << array[i];
        if (i < array_size) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    // Initializing arrays
    int array1[5];             // 0, 0, 0, 0, 0
    int array2[5] = {};        // 0, 0, 0, 0, 0
    int array3[] = {1, 20, 12, 14, 12000};
    int array4[] {1, 20, 12, 14, 12000};

    // Accesing the values an array
    int array[] = {3, 5, 8, 12};
    cout << array[0] << endl;

    // User print array
    printArray(array);

    // Foreach loop
    for (int x : array) {
        cout << x << endl;
    }

    return 0;
}