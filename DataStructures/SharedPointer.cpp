//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//shared_ptr<int> sP1(new int());
//	shared_ptr<int> p1 = make_shared<int>();
//	*p1 = 78;
//	cout << "p1 = " << *p1 << endl;
//	cout << "p1 reference count = " << p1.use_count() << endl;
//	shared_ptr<int> p2(p1);
//	cout << "p2 ref count = " << p2.use_count() << endl;
//	cout << "p1 ref cnt = " << p1.use_count() << endl;
//	if (p1 == p2)
//		cout << "p1=p2" << endl;
//	else
//		cout << "p1!=p2" << endl;
//	p1.reset();
//	cout << "p1 ref cnt = " << p1.use_count() << endl;
//
//	p1.reset(new int(11));
//	cout << "p1 ref cnt = " << p1.use_count() << endl;
//
//	if (p1 == p2)
//		cout << "p1=p2" << endl;
//	else
//		cout << "p1!=p2" << endl;
//	p1 = nullptr;
//	cout << "p1 ref cnt = " << p1.use_count() << endl;
//	if (!p1)
//		cout << "p1 is NULL";
//	return 0;
//}