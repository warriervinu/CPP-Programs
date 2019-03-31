////#include <string>
////#include <iostream>
////using namespace std;
////class Animal
////{
////protected:
////	std::string m_name;
////
////	// We're making this constructor protected because
////	// we don't want people creating Animal objects directly,
////	// but we still want derived classes to be able to use it.
////	Animal(std::string name)
////		: m_name(name)
////	{
////	}
////
////public:
////	std::string getName() { return m_name; }
////	virtual const char* speak() { return "???"; }
////};
////
////class Cat : public Animal
////{
////public:
////	Cat(std::string name)
////		: Animal(name)
////	{
////	}
////	
////	const char* speak() { return "Meow"; }
////};
////
////class Dog : public Animal
////{
////public:
////	Dog(std::string name)
////		: Animal(name)
////	{
////	}
////
////	const char* speak() { return "Woof"; }
////};
////
////void report(Animal &animal)
////{
////	std::cout << animal.getName() << " says " << animal.speak() << '\n';
////}
////
////int main()
////{
////	Cat cat("Fred");
////	Dog dog("Garbo");
////
////	report(cat);
////	report(dog);
////}
//
////---------------------------------------------------------------------------------------------------------
//#include <iostream> 
//using namespace std;
//
//class Base
//{
//protected:
//	int i;
//public:
//	Base(int a) { i = a; }
//	virtual void display()
//	{
//		cout << "I am Base class object, i = " << i << endl;
//	}
//};
//
//class Derived : public Base
//{
//	int j;
//public:
//	Derived(int a, int b) : Base(a) { j = b; }
//	virtual void display()
//	{
//		cout << "I am Derived class object, i = "
//			<< i << ", j = " << j << endl;
//	}
//};
//
//// Global method, Base class object is passed by value 
//void somefunc(Base obj)
//{
//	obj.display();
//}
//
//int main()
//{
//	Base b(33);
//	Derived d(45, 54);
//	somefunc(b);
//	somefunc(d);  // Object Slicing, the member j of d is sliced off 
//	return 0;
//}