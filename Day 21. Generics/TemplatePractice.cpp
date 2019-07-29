#include <iostream>
using namespace std;

template <typename anytype>

anytype GetMax(anytype a, anytype b) {
    anytype result;
    (a > b) ? result = a : result = b;
    return result;
}

int main() {
    int a = 5, b = 9;
    cout << "The integer result: " << GetMax<int>(a, b) << endl;
    float c = 5.14, d = 9.58;
    cout << "The long result: " << GetMax<float>(c, d) << endl;
    return 1;
}