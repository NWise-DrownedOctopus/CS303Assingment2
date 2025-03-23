//
// Created by nicho on 3/10/2025.
//

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
using namespace std;
#include <vector>
#include <iostream>
// Linked List Class
// Any data type
// push_front
// push_back
// pop_front
// pop_back
// front, back
// empty

// void insert(size_t index, const Item_Type& item): Insert item at position index
// (starting at 0). Insert at the end if index is beyond the end of the list

// bool remove(size_t index): Remove the item at position index. Return true if
// successful; return false if index is beyond the end of the list.

// size_t find(const Item_Type& item): Return the position of the first occurrence of
// item if it is found. Return the size of the list if it is not found.

template <typename Item_Type>
class Single_Linked_List {
public:
    struct Node {
        Item_Type data;
        Node* next;
        Node(Item_Type value) : data(value), next(nullptr) {};
    };
    Single_Linked_List();
    ~Single_Linked_List();
    Node* head{};
    Node* tail{};
    int num_items = 0;
    void push_front(Item_Type value);
    void push_back(Item_Type value);
    void pop_front();
    void pop_back();
    Item_Type front();
    Item_Type back();
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item);
};

template<typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List() {
    head = nullptr;
    tail = nullptr;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(Item_Type value) {
    if (head == nullptr) {
        head = new Node(value);
        tail = head;
        num_items++;
        return;
    }
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
    num_items++;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(Item_Type value) {
    if (head == nullptr) {
        head = new Node(value);
        tail = head;
        num_items++;
        return;
    }
    Node* new_node = new Node(value);
    tail->next = new_node;
    tail = new_node;
    num_items++;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
    if (head == nullptr) {
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        num_items--;
        return;
    }
    const Node* temp = head;
    head = head->next;
    delete temp;
    num_items--;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
    if (head == nullptr) {
        return;
    }

    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
        num_items--;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    delete tail;
    tail = current;
    tail->next = nullptr;
    num_items--;
}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() {
    return head->data;
}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() {
    return tail->data;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
    if (index >= num_items) {
        push_back(item);
        return;
    }
    if (index == 0) {
        push_front(item);
        return;
    }
    Node* new_node = new Node(item);
    Node* current_node = head;
    Node* previous_node = nullptr;
    int count = 0;
    while (count < index) {
        previous_node = current_node;
        current_node = current_node->next;
        count ++;
    }
    previous_node->next = new_node;
    new_node->next = current_node;
    num_items++;
}

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
    if (index >= num_items) {
        return false;
    }
    if (index == 0) {
        pop_front();
        return true;
    }
    Node* current_node = head;
    Node* previous_node = nullptr;
    int count = 0;
    while (count < index) {
        previous_node = current_node;
        current_node = current_node->next;
        count ++;
    }
    previous_node->next = previous_node->next->next;
    delete current_node;
    num_items--;
    return true;
}

template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type &item) {
    Node* current_node = head;
    size_t index = 0;

    while (current_node != nullptr) {
        if (current_node->data == item) {
            return index;
        }
        current_node = current_node->next;
        index++;
    }
    return num_items;
}

template<typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    delete head;
    delete tail;
}

// Stack (using vector)
// - Create Stack Object
// - Check if stack is empty or not
// - Insert some integer values onto the stack
// - Remove an element from the stack
// Find the Top of the stack
// Find average value of the stack elements

class Stack{
public:
    Stack();
    ~Stack();
    int* head{};
    int* tail{};
    int num_items = 0;
    vector<int> v;
    bool empty() const;
    void insert(int value);
    int remove();
    int top() const;
    float average();
};
#endif //SINGLE_LINKED_LIST_H
