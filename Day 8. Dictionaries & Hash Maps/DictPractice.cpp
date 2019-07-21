#include <iostream>
#include <map>

using namespace std;

/* Map is container that store element formed by 
combinations of a key value and a mapped value */

int main() {
    // English thesaurus dictionary
    map<string, string> englishDictionary;

    // Putting keys and values inside a dictionary
    englishDictionary.insert(make_pair("Monday", "First"));
    englishDictionary.insert(make_pair("Thuesday", "Second"));
    englishDictionary.insert(make_pair("Wednesday", "Third"));
    englishDictionary.insert(make_pair("Thursday", "Forth"));
    englishDictionary.insert(make_pair("Friday", "Fifth"));

    // Retrieve thing from our dictionary
    cout << englishDictionary["Monday"] << endl;
    cout << englishDictionary["Thuesday"] << endl;
    cout << englishDictionary["Wednesday"] << endl;
    cout << englishDictionary["Thursday"] << endl;
    cout << englishDictionary["Friday"]<< endl;

    // Print out all keys
    for (map<string,string>::iterator it = englishDictionary.begin(); it != englishDictionary.end(); ++it) {
        cout << it->first << " ";
    }
    cout << endl;

    // Print all values
    for (map<string,string>::iterator it = englishDictionary.begin(); it != englishDictionary.end(); ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // Print out size
    cout << "The size of our dictionary is " << englishDictionary.size() << endl;
    cout << endl << endl;

    // Shopping list
    map<string, bool> shopingList;

    // Put sume stuff in dictionary
    shopingList.insert(make_pair("Butter", true));
    shopingList.insert(make_pair("Bread", false));
    shopingList.insert(make_pair("Soap", true));
    shopingList.insert(make_pair("Jam", true));
    shopingList.insert(make_pair("Cacao", true));

    // Retreive items
    for (map<string, bool>::iterator it = shopingList.begin(); it != shopingList.end(); ++it) {
        it->second ? cout << "true " : cout << "false ";
    }
    cout << endl;

    // Key-Value Pairs print out
    for (map<string, bool>::iterator it = shopingList.begin(); it != shopingList.end(); ++it) {
        cout << "Key: " << it->first << "; Value " << it->second << ";" << endl;
    }
    cout << endl;

    // Is empty?
    cout << "Is empty? "; 
    shopingList.empty() ? cout << "true" : cout << "false";
    cout << endl;

    // Remove some element
    shopingList.erase("Butter");

    // Replace values for a certain key
    shopingList["Jam"] = false;

    // Key-Value pairs print out
    for (map<string, bool>::iterator it = shopingList.begin(); it != shopingList.end(); it++) {
        cout << "Key: " << it->first << "; Value " << it->second << ";" << endl;
    }

    // Clear dictionary
    shopingList.clear();

    // Is empty?
    cout << "Is empty? ";
    shopingList.empty() ? cout << "true" : cout << "false";

    return 1;
}