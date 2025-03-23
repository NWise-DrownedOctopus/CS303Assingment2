//
// Created by nicho on 3/10/2025.
//

#include "Single_Linked_List.h"

// Stack (using vector)
// - Create Stack Object
// - Check if stack is empty or not
// - Insert some integer values onto the stack
// - Remove an element from the stack
// - Find the Top of the stack
// - Find average value of the stack elements

Stack::Stack() {
    head = nullptr;
    tail = nullptr;
}

bool Stack::empty() const {
    return v.empty();
}

// We want the tail of our vector to be the int at the zero index of the vector
void Stack::insert(int value) {
    if (head == nullptr) {
        v.push_back(value);
        head = &v[0];
        tail = &v[0];
        return;
    }
    v.push_back(value);
    tail = &v[v.size() - 1];
}

int Stack::remove() {
    if (head == nullptr) {
        return -1;
    }
    tail = &v[v.size() - 2];
    int old_value = v[v.size() - 1];
    v.pop_back();
    return old_value;
}

int Stack::top() const {
    if (v.empty()) {
        return -1;
    }
    return v.back();
}

float Stack::average() {
    if (head == nullptr) {
        return -1;
    }

    float sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    return sum / v.size();
}

Stack::~Stack() {
    delete head;
    delete tail;
}

