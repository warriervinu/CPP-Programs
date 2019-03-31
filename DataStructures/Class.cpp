//#include <iostream>
//#include <vector>
//using namespace std;
//class Example
//{
//	char* ePtr;
//public:
//	Example(char* ptr=nullptr):ePtr(ptr){
//	//*eptr = 
//	}
//	Example(const Example& obj)
//	{
//		ePtr = new char;
//		*ePtr = *obj.ePtr;
//	}
//	Example& operator=(const Example& obj)
//	{
//		if (&obj == this)
//			return *this;
//		delete ePtr;
//		ePtr = new char;
//		*ePtr = *obj.ePtr;
//		return *this;
//	}
//	Example(Example&& obj):ePtr(obj.ePtr)
//	{
//		obj.ePtr = nullptr;
//	}
//	Example& operator=(Example&& obj)
//	{
//		if (&obj == this)
//			return *this;
//		delete ePtr;
//		*ePtr = *obj.ePtr;
//		obj.ePtr = nullptr;
//		return *this;
//	}
//};
//int main()
//{
//	Example e1();
//	//vector<Example*> v(new Example());
//	//v.push_back(new Example);
//	return 0;
//}