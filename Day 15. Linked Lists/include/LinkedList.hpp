#pragma once
#define NULL __null

class Node {
    public:
    // Properties
    Node * next;
    int data;

    // Methods

    // Constructors
    Node(int newData) {
        data = newData;
        next = NULL;
    }

    Node(int newData, Node * newNext) {
        data = newData;
        next = newNext;
    }

    // Getters and Setters
    int getData() { return this->data; }
    Node * getNext() { return this->next; }

    void setData(int newData) { this->data = newData; }
    void setNext(Node *newNext) { next = newNext; }
};

class LinkedList {
    public:
    // Properties
    Node * head;
    int count;

    // Constuctors
    // LinkedList() {
    //     head = NULL;
    //     count = 0;
    // }

    LinkedList(Node * newHead) {
        head = newHead;
        count = 1;
    }

    // Methods

    // Add
    void add(int newData) {
        Node temp = Node(newData);
        Node * current = head;
        while(current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(&temp);
        count++;
    }

    // Get
    int get(int index) {
        if (index <= 0) {
            return -1;
        }
        Node * current = head;
        for (int i = 0; i < index; i++) {
            current = current->getNext();
        }
        return current->getData();
    }

    // Size
    int size() {
        return count;
    }

    // Is empty
    bool isEmpty() {
        return head == NULL;
    }

    // Remove
    void remove() {
        // remove from the back of the list
        Node * current = head;
        while (current->getNext()->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(NULL);
        count--;
    }
};
