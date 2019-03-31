//#include <iostream>
//using namespace std;
//class Empty
//{
//	char i;
//public:
//	void display()
//	{
//		cout << i;
//	}
//};
//// Function that accepts no parameter
//// It is to break the recursion chain of vardiac template function
//void log()
//{
//}
//
///*
// * Variadic Template Function that accepts variable number
// * of arguments of any type.
// */
//template<typename T, typename ... Args>
//void log(T first, Args ... args) {
//
//	// Print the First Element
//	std::cout << first << " , ";
//
//	// Forward the remaining arguments
//	log(args ...);
//}
//
//
//int main() {
//
//	Empty e;
//	cout << sizeof(e);
//	log(2, 3.4, "aaa");
//
//	return 0;
//}