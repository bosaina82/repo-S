#include "Stack.h"
#include<assert.h>
template<class T>
 T Stack<T>::top()
{
	assert(empty() == false);
	return head->value;
}
template<class T>
void Stack<T>::pop()
{
	assert(empty() == false);
	Node* tmp = head;
	head = head->next;
	delete tmp;
	size--;
}
template<class T>
void Stack<T>::push(T val)
{
	Node* newNode = new Node(val);
	head = newNode;
		size++;
}
template<class T>
bool Stack<T>::empty()
{
	if (size == 0)
		return true;
	else
	return false;
}
template<class T>
int Stack<T>::getSize()
{
	return size;
}
template<class T>
Stack<T>::Stack() :head(nullptr), size(0)
{
}

template<class T>
Stack<T>::~Stack()
{
	while (empty( )== false)
		pop();
}

