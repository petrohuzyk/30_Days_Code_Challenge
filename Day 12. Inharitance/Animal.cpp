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

    void eat() {
        cout << "An animal is eating" << endl;
    }

    int getAge() { return this->age; }
};

class Dog: public Animal {
    public:
    Dog(int age) : Animal(age) {
        cout << "A dog has been created" << endl;
    }

    void ruff() {
        cout << "The dogs says ruff" << endl;
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

    void meow() {
        cout << "A cat meows!" << endl;
    }

    void prance() {
        cout << "A cat is prancing!" << endl;
    }
};

int main() {

    Animal a = Animal(5);
    Dog d = Dog(15);
    Cat c = Cat(5);
    d.ruff();
    c.meow();
    a.eat();
    d.eat();
    c.eat();
    d.run();
    c.prance();

    // print age
    cout << "Cat is age " << c.getAge() << endl;
    cout << "Dog is age " << d.getAge() << endl;

    return 0;
}