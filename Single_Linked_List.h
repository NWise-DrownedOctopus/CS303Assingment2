//
// Created by nicho on 3/10/2025.
//

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
using namespace std;

template <typename Item_Type>
class Single_Linked_List {
public:
    Single_Linked_List();
    ~Single_Linked_List();
    Item_Type* head{};
    Item_Type* tail{};
    int num_items = 0;
private:
    struct Node {
        Item_Type* data;
        Node* next;
        Node(Item_Type* value) : data(value), next(nullptr) {};
    };
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
    delete head;
    head = head->next;
    num_items--;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
    if (tail == nullptr) {
        return;
    }
    if (head->next == nullptr) {
        delete head;
        delete tail;
        head = nullptr;
        tail = nullptr;
        num_items--;
    }
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

}

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {

}

template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type &item) {

}
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};
class Stack{
public:
    Stack();
    ~Stack();
    Node* head{};
    Node* tail{};
    int num_items = 0;
private:
    bool empty() const;
    void insert(int value);
    int remove();
    int top();
    float average();
};

#endif //SINGLE_LINKED_LIST_H
