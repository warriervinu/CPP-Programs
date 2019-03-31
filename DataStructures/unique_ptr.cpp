//#include <iostream>
//#include <memory>
//using namespace std;
//struct Task
//{
//	int mId;
//	void display()
//	{
//		cout << mId;
//	}
//	Task(int id) :mId(id)
//	{
//		std::cout << "Task::Constructor" << std::endl;
//	}
//	~Task()
//	{
//		std::cout << "Task::Destructor" << std::endl;
//	}
//};
//
//int main()
//{
//	std::unique_ptr<Task> tP = make_unique<Task>(30);
//	tP->display();
//	// Create a unique_ptr object through raw pointer
//	std::unique_ptr<Task> taskPtr(new Task(23));
//
//	//Access the element through unique_ptr
//	int id = taskPtr->mId;
//
//	std::cout << id << std::endl;
//	taskPtr->display();
//	return 0;
//}