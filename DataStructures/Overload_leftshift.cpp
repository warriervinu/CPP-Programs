//#include <iostream>
//#include <string>
//using namespace std;
//
//class TaxPayer
//{
//	
//public:
//	const int PAN;
//	string name;
//	float tax;
//	TaxPayer() = delete;
//	TaxPayer(int p, string n, float t) :PAN(p), name(n), tax(t)
//	{
//
//	}
//	friend ostream& operator<<(ostream& out, const TaxPayer& obj);
//};
//
//class Student :public TaxPayer
//{
//	
//public:
//	Student(int p, string n, float t) :TaxPayer(p, n, t) {}
//	friend ostream& operator<<(ostream& out, const TaxPayer& obj);
//};
//class SmallBusiness :public TaxPayer
//{
//public:
//	friend ostream& operator<<(ostream& out, const TaxPayer& obj);
//};
//ostream& operator<<(ostream& out, const TaxPayer& obj) 
//{
//	out << "PAN : "<< obj.PAN << endl;
//	out << "Name : " << obj.name << endl;
//	out << "Tax : " << obj.tax << endl;
//	return out;
//}
//int main()
//{
//	TaxPayer* tObj = new Student(12345, "Vinu", 1000);
//	cout << *tObj;
//	TaxPayer tp(1, "KK", 2000);
//	cout << tp;
//	return 0;
//}