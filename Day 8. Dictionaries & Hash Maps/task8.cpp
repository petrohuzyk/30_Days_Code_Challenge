
/* 
Task:
    Given names and phone numbers, assemble a phone book that maps friends' 
    names to their respective phone numbers. You will then be given an unknown number 
    of names to query your phone book for. For each name queried, print the associated entry 
    from your phone book on a new line in the form name=phoneNumber; if an entry for name
    is not found, print Not found instead.

Note: 
    Your phone book should be a Dictionary/Map/HashMap data structure. 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    // Create dictionary
    map<string,string> phoneBook;
    map<string,string>::iterator it;
    int n;
    string name, phone;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> phone;
        phoneBook.insert(make_pair(name, phone));
    }
    string input_name;
    while (cin >> input_name) {
        it = phoneBook.find(input_name);
        if (it != phoneBook.end()) {
            cout << it->first << "=" << it->second << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
     
    return 0;
}

