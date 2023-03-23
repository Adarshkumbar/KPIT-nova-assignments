#include <iostream>
#include "bitmap.h"
using namespace std;

template <typename T>
Queue<T>::Queue()
{
    this->front = -1;
    this->rear = -1;
    this->size = 5;
    this->arr = new T[5];
}

template <typename T>
Queue<T>::Queue(int s)
{
    this->front = -1;
    this->rear = -1;
    this->size = s;
    this->arr = new T[s];
}

template <typename T>
void Queue<T>::insert(T data)
{
    if (!this->isfull())
    {
        if (this->isempty())
        {
            this->front++;
            this->rear++;
        }
        this->arr[this->rear] = data;
        if (this->rear == this->size - 1)
            this->rear = 0;
        else
            this->rear++;
    }
}

template <typename T>
T Queue<T>::remove()
{
    T x;
    if (!this->isempty())
    {
        x = this->arr[this->front];
        if (this->front == this->size - 1)
            this->front = 0;
        else
            this->front++;
    }
    return x;
}

template <typename T>
bool Queue<T>::isfull()
{
    return this->rear == this->front && this->rear != -1 && this->front != -1;
}

template <typename T>
bool Queue<T>::isempty()
{
    return this->front == -1 && this->rear == -1;
}