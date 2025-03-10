//
// Created by nicho on 3/10/2025.
//

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

struct Node {
    int data;
};

class Single_Linked_List {
public:
    Node* head{};
    Node* tail{};
    int num_items = 0;
    void push_front() {}
    void push_back() {}
    void pop_front() {}
    void pop_back() {}
    Node front() {}
    Node back() {}
private:
    void insert() {}
    bool remove() {}
    size_t find() {}
};

#endif //SINGLE_LINKED_LIST_H
