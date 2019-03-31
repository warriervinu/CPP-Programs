//#include <iostream>
//
//using namespace std;
//
//const int MAX = 10;
//
//class Stack
//{
//public:
//	Stack();
//	void push(int);
//	int pop();
//private:
//	int	a[MAX + 1];  // we won't be using a[0]
//	int	top;       // "stack pointer"
//};
//
//Stack::Stack()
//{
//	top = 0;
//}
//
//void Stack::push(int x)
//{
//	if (top >= MAX)
//	{
//		cerr << "Stack overflow!" << endl;
//		return;
//	}
//	top++;
//	a[top] = x;
//}
//
//int Stack::pop()
//{
//	if (top == 0)
//	{
//		cerr << "Stack underflow!" << endl;
//		return 0;
//	}
//	int	returnval = a[top];
//	top--;
//	return returnval;
//}
//int main()
//{
//	Stack S;
//	for (int i = 0; i < 5; i++)
//		S.push(i * 3);
//	S.pop();
//	S.pop();
//	return 0;
//}