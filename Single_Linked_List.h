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
    void push_front();
    void push_back();
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

}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_front() {

}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back() {

}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {

}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {

}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() {

}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() {

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



#endif //SINGLE_LINKED_LIST_H
