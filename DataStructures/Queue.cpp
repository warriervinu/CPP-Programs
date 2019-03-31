//#include <iostream>
//using namespace std;
//const int MAX = 10;
//class Queue
//{
//public:
//	Queue();
//	void add(int);
//	int remove();
//private:
//	int	a[MAX + 1];  // we won't be using a[0]
//	int	front, rear, n;  // n = number of items in the queue
//};
//
//Queue::Queue()
//{
//	n = 0;
//	front = rear = 1;  // any value >= 1 and <= MAX
//}
//
//void Queue::add(int x)
//{
//	if (n == MAX)
//	{
//		cerr << "Queue overflow!" << endl;
//		return;
//	}
//	n++;
//	rear = (rear == MAX ? 1 : rear + 1);
//	a[rear] = x;
//}
//
//int Queue::remove()
//{
//	if (n == 0)
//	{
//		cerr << "Queue underflow!" << endl;
//		return 0;
//	}
//	n--;
//	front = (front == MAX ? 1 : front + 1);
//	return a[front];
//}