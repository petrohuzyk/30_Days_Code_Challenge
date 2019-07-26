#include <iostream>
#include "HotChocolate.hpp"
#include "TemperatureException.hpp"

using namespace std;

int main() {
    double currentCocoTemp = 200;
    bool wrongTemp = true;

    while (wrongTemp) {
        try {
            HotChocolate::DrinkHotChocolate(currentCocoTemp);
            cout << "That coco was good!" << endl;
            wrongTemp = false;
        } catch (TooHotException e1) {
            cout << "That's TOO HOT!" << endl;
            currentCocoTemp -= 5;
        } catch (TooColdException e2) {
            cout << "That's SO COLD!" << endl;
            currentCocoTemp += 5;
        }
    }
    // This line will terminate program with user defined exception
    // HotChocolate::DrinkHotChocolate(currentCocoTemp);
    
    cout << "And it's gone!" << endl;
    return 1;
}