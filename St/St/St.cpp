#include<iostream>
#include<stack>
#include"stack.h"
#include"stack.cpp"
using namespace std;
int main()
{
	stack <int> st;
	st.push(1);
	st.push(2);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;

	while (st.empty () == false);
	return 0;
}
