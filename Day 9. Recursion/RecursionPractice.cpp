#include <iostream>

using namespace std;

int summation(int n) {
    // Base Case: WE ARE AT THE END
    if (n <= 0) {
        return 0;
    }
    // Recursive Case: KEEP GOING
    else {
        return n + summation(n-1);
    }
}

int factorial(int n) {
    // Base Case
    if (n <= 1) {
        return 1;
    }
    // Recurcive Case
    else {
        return n * factorial(n-1);
    }
}

int exponentiation(int n, int p) {
    // Base Case
    if (p <= 0) {
        return 1;
    }
    else {
        return 5 * exponentiation(n, p-1);
    }
}

int main() {
    cout << "Summation of 4: " << summation(4) << endl;
    cout << "Factorial of 4: " << factorial(4) << endl;
    cout << "Exponentiation of 4: " << exponentiation(4, 4) << endl;
    return 1;
}