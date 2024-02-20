// Implementation file for linked StackType
#include "Stack.h"

template<class T>
Stack<T>::Stack(){
    data = new T[MAX_ITEMS];
    top = 0;
}

template<class T>
Stack<T>::~Stack() {
    delete [] data;
    top = 0;
}

template<class T>
bool Stack<T>::IsFull() const {
    return top == MAX_ITEMS;
}

template<class T>
bool Stack<T>::IsEmpty() const {
    return top == 0;
}

template<class T>
void Stack<T>::Push(T item) {
    if(top == MAX_ITEMS)
        throw FullStack();

    data[top++] = item;
}

template<class T>
void Stack<T>::Pop() {
    if(top == 0)
        throw EmptyStack();

    top--;
}

template<class T>
T Stack<T>::Top() {
    if(top == 0)
        throw EmptyStack();

    return data[top - 1];
}
