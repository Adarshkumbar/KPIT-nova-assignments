#include <iostream>
#include "bitmap.h"
using namespace std;

template <typename T>
Stack<T>::Stack()
{
    this->size = 5;
    this->top = -1;
    this->arr = new T[this->size];
}
template <typename T>
Stack<T>::Stack(int s)
{
    this->size = s;
    this->top = -1;
    this->arr = new T[this->size];
}
template <typename T>
void Stack<T>::push(T data)
{
    this->arr[++this->top] = data;
}
template <typename T>
T Stack<T>::pop()
{
    T pop;
    if (!this->isempty())
    {
        pop = this->arr[this->top];
        this->top--;
    }
    return pop;
}
template <typename T>
T Stack<T>::peep()
{
    if (!this->isempty())
    {
        return this->arr[this->top];
    }
    return this->top;
}
template <typename T>
bool Stack<T>::isfull()
{
    return this->size == (this->top + 1);
}
template <typename T>
bool Stack<T>::isempty()
{
    return this->top == -1;
}