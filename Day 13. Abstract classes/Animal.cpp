#include <iostream>

using namespace std;

class Animal {
    public:
    int age;
    // constructor
    Animal(int age) {
        this->age = age;
        cout << "An animal has been created!" << endl;;
    }

    virtual void eat() = 0;

    void sleep() {
        cout << "An animal is sleeping!" << endl;
    }

    int getAge() { return this->age; }
};

class Dog: public Animal {
    public:
    Dog(int age) : Animal(age) {
        cout << "A dog has been created" << endl;
    }

    void eat() {
        cout << "A dog is eating!" << endl;
    }

    void ruff() {
        cout << "The dogs says ruff" << endl;
    }

    void sleep() {
        cout << "The dog is sleeping!" << endl;
    }

    void run() {
        cout << "The dog is running" << endl;
    }
};

class Cat: public Animal {
    public:
    Cat(int age) : Animal(age) {
        cout << "A cat has been created" << endl;
    }

    void eat() {
        cout << "A cat is eating!" << endl;
    }

    void meow() {
        cout << "A cat meows!" << endl;
    }

    void sleep() {
        cout << "A cat is sleping!" << endl;
    }

    void prance() {
        cout << "A cat is prancing!" << endl;
    }
};

int main() {

    Dog d = Dog(15);
    Cat c = Cat(5);
    // d.eat();
    // c.eat();
    // d.sleep();
    // c.sleep();
 
    // Casting and conversions

    //standart conversion
    short a = 2000;
    int b;
    b = a;
    cout << "Type of a: " << typeid(a).name() << endl;
    cout << "Type of b: " << typeid(b).name() << endl;

    return 0;
}