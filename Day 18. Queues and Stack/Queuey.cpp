#include <iostream>
#include <list>

using namespace std;

class Queuey {
    public:
    list<int> queue;

    Queuey() {};

    // Is are queue os empty?
    bool isEmpty() {
        return queue.empty();
    }

    // What is the size of queue
    int size() {
        return queue.size();
    }

    // Enqueuing an item
    void enqueue(int n) {
        queue.push_back(n);
    }

    // Dequeuing an item
    int degueue() {
        int firstElement = queue.front();
        queue.pop_front();
        return firstElement;
    }

    // Peek at the first item
    int peek() {
        return queue.front();
    }
};

int main() {
    Queuey numberQueue;

    numberQueue.enqueue(5);
    numberQueue.enqueue(7);
    numberQueue.enqueue(6);

    cout << "First out: " << numberQueue.degueue() << endl;
    cout << "Peek at the snewecond item: " << numberQueue.peek() << endl;
    cout << "Second out: " << numberQueue.degueue() << endl;
    cout << "Third out: " << numberQueue.degueue() << endl;

    return 1;
}