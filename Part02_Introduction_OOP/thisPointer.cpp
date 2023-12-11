//#include <iostream>
//
//using namespace std;
//
//class Simple
//{
//private:
//	int num;
//public:
//	Simple(int num)
//	{
//		this->num = 200;
//		num = 100;
//		cout << "num = " << this->num << ", " << "address = " << this << endl;
//	}
//	void show()
//	{
//		cout << num << endl;
//	}
//	Simple* getaddress()
//	{
//		return this;
//	}
//};
//
//int main(void)
//{
//	Simple sim1(100);
//	Simple* ptr1 = sim1.getaddress();
//	cout << ptr1 << ", ";
//	ptr1->show();
//
//	Simple sim2(200);
//	Simple* ptr2 = sim2.getaddress();
//	cout << ptr2 << ", ";
//	ptr2->show();
//	return 0;
//
//}