/*
Task
Given a base-10 integer, n , convert it to binary (base-2). 
Then find and print the base-10 integer denoting the maximum number of 
consecutive 1's in n's binary representation.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int counter = 0, maxCount = 0;
    for (int i = 0; n > 0; i++) {
        // cout << (n % 2) << " ";
        if ((n % 2) == 1) {
            counter++;
            if (maxCount < counter) {
                maxCount = counter;
            }
        }
        else {
            counter = 0;
        }
        n = n / 2;
        } 

    cout << maxCount << endl;


    return 0;
}
