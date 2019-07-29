#include <iostream>

using namespace std;

enum HairColor {
    BLONDE, BROWN, BLACK, RED, ORANGE, PINK, BLUE, GREEN, PURPLE, RAINBOW, OTHER
};

class Person {
    public:
    HairColor hairColor = BLACK;

    Person() {

    }
};

int main() {
    Person PeterParker = Person();
    // Create a new object with other allocation
    Person SpiderMan = PeterParker;

    SpiderMan.hairColor = PINK;

    cout << "Hair Color of Peter Parker: " << PeterParker.hairColor << endl;
    cout << "Hair Color of Spider Man: " << SpiderMan.hairColor << endl;
    return 1;
}