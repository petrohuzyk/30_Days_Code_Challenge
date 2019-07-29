#include <iostream>

using namespace std;

template <typename obj>
void printArray(obj array[]) {
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

    string mystring = "Hello!";
    float array5[5] = {1.56, 1.89, 1.56, 1.98, 2.00};
    // User print array
    printArray(array);
    printArray(array5);
    // printArray(mystring);

    // Foreach loop
    for (int x : array) {
        cout << x << endl;
    }

    return 0;
}