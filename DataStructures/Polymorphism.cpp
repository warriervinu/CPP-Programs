//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//class temp
//{
//	char* c;
//public:
//	temp(const char ch[])
//	{
//		c = new char();
//		strcpy(c, ch);
//	}
//	temp(const temp& obj)
//	{
//		c = new char(strlen(obj.c)+1);
//		strcpy(c, obj.c);
//	}
//	temp& operator=(const temp& obj)
//	{
//		if (&obj == this)
//			return *this;
//		c = new char(strlen(obj.c) + 1);
//		strcpy(c, obj.c);
//		return *this;
//	}
//};
//class Base
//{
//	int p;
//public:
//	virtual void vFn()
//	{
//		cout << "Base vFn" << endl;
//	}
//};
//class Derived :public Base
//{
//	int q;
////public:
////	void vFn()
////	{
////		cout << "Derived vFn" << endl;
////	}
////	void display()
////	{
////		cout << "Derived display" << endl;
////	}
//};
//
//int main()
//{
//	temp t("Vinu");
//	temp t1 = t;
//	Base* b = new Derived;  //Not possible when inheritance is public
//	cout << sizeof(b) << "   " << sizeof(Derived);
//	temp t3("Adithi");
//	t = t3;
//	//b->vFn();
//	return 0;
//}