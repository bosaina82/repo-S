#pragma once
#include"Node.h"
#include"Node.cpp"
template<class T>
class Queue
{
private:
	Node<T>* head;
	Node<T>* tail;
	int size;
public:
	void pus(T val);
    void pop();
    int size();
    bool empty();
    T front();
    Queue();
     ~Queue();
};



