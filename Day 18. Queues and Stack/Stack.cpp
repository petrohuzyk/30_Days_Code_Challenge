#include <iostream>
#include <list>
#include <stack>

using namespace std;

class Stack {

    list<int> stack;

    public:
    Stack() { }

    // Is stack empty?
    bool isEmpty() {
        return stack.empty();
    }

    // Remove last item
    int remove() {
        int lastElement = stack.back();
        stack.pop_back();
        return lastElement;
    }

    // Add item
    void add(int data) {
        stack.push_back(data);
    }

    // Peek the first one element
    int first() {
        return stack.front();
    }

    // Peek the last one element
    int last() {
        return stack.back();
    }
};

int main() {
    // My Stack
    Stack stack;

    stack.add(5);
    stack.add(7);
    stack.add(6);

    cout << "First out: " << stack.remove() << endl;
    cout << "Second out: " << stack.remove() << endl;
    cout << "Third out: " << stack.remove() << endl;
    
    return 1;
}