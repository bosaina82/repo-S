#include"Queue.h"
#include<assert.h>
template<class T>
inline void Queue<T>::pus(T val)
{
    Node<t>* newNode = newNode<T>(val);
    if (tail = nullptr)
        tail = newNode;
        head = newNode;
    else
        tail-> = newNode;
    tail = newNode;
    size++;
   
}

template<class T>
void Queue<T>::pop()
{
    assert(empty() == false);
    Node<T>* tpm = head->next;
    delete head;
    head = tpm;
    if (head = nullptr)
        tail = nullptr;
    size--;
}

template<class T>
inline int Queue<T>::size()
{
    return size;
}

template<class T>
  bool Queue<T>::empty()
{
    if (size==0)
        return true;
    else
        return false;
}

template<class T>
T Queue<T>::front()
{
    assert(empty() == false);
    return head->value;
}
 template<class T>
 Queue<T>::Queue() :head(nullptr) tail(nullptr), size(0)
 {
 }
    template<class T>
    inline Queue<T>::~Queue()
    {
        while (empty() == false)
        {
            pop();
        }
    }