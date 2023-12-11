//#include <iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	int num;
//
//public:
//	Simple(int n) : num(n)
//	{
//		cout << "New Obj: " << this << endl;
//	}
//	Simple(const Simple& copy) :num(copy.num)
//	{
//		cout << "New Copy Obj: " << this << endl;
//	}
//	~Simple()
//	{
//		cout << "Delete Obj: " << this << endl;
//	}
//};
//Simple SimpleFucncObj(Simple Obj)
//{
//	cout << "Para Address: " << &Obj << endl;
//	return Obj;
//}
//int main()
//{
//	Simple obj(10);
//	SimpleFucncObj(obj);
//
//	cout << endl;
//	Simple tmpRef = SimpleFucncObj(obj);
//	cout << "Return Obj: " << &tmpRef << endl;
//	return 0;
//}
//
