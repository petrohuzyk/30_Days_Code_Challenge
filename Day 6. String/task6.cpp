#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_words;
    // cout << "Enter number of words";
    cin >> num_words;
    vector<string> words;

    for (int i=1; i <= num_words; i++) {
        string buff;
        cin >> buff;
        words.push_back(buff);
    }

    for (int i=0; i < words.size(); i++) {
        // print even indexes 
        for (int j=0; j<=words[i].size(); j++) {
            if ((j % 2) == 0) {
                cout << words[i][j];
            }
        }

        cout << " ";
        // print odd indexes
        for (int j=0; j<=words[i].size(); j++) {
            if ((j % 2) == 0) {
            }
            else {
                cout << words[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
