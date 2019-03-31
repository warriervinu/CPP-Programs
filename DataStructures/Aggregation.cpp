//#include <string>
//#include <iostream>
//using namespace std;
//class Teacher
//{
//private:
//	std::string m_name;
//
//public:
//	Teacher(std::string name)
//		: m_name(name)
//	{
//	}
//
//	std::string getName() { return m_name; }
//	~Teacher() { cout << "Teacher Destructor"; }
//};
//
//class Department
//{
//private:
//	Teacher *m_teacher; // This dept holds only one teacher for simplicity, but it could hold many teachers
//
//public:
//	Department(Teacher *teacher = nullptr)
//		: m_teacher(teacher)
//	{
//	}
//};
//
//int main()
//{
//	// Create a teacher outside the scope of the Department
//	Teacher *teacher = new Teacher("Bob"); // create a teacher
//	{
//		// Create a department and use the constructor parameter to pass
//		// the teacher to it.
//		Department dept(teacher);
//
//	} // dept goes out of scope here and is destroyed
//
//	// Teacher still exists here because dept did not delete m_teacher
//
//	std::cout << teacher->getName() << " still exists!";
//
//	delete teacher;
//
//	return 0;
//}
////--------------------------------------------------------------------------
//
////#include <iostream>
////
////int main()
////{
////	// Create a teacher outside the scope of the Department
////	Teacher *t1 = new Teacher("Bob"); // create a teacher
////	Teacher *t2 = new Teacher("Frank");
////	Teacher *t3 = new Teacher("Beth");
////
////	{
////		// Create a department and use the constructor parameter to pass
////		// the teacher to it.
////		Department dept; // create an empty Department
////		dept.add(t1);
////		dept.add(t2);
////		dept.add(t3);
////
////		std::cout << dept;
////
////	} // dept goes out of scope here and is destroyed
////
////	std::cout << t1->getName() << " still exists!\n";
////	std::cout << t2->getName() << " still exists!\n";
////	std::cout << t3->getName() << " still exists!\n";
////
////	delete t1;
////	delete t2;
////	delete t3;
////
////	return 0;
////}