//#include <iostream>
//using namespace std;
//
//class Walk
//{
//public:
//	virtual void Show() const = 0;
//	void Show_state()
//	{
//		cout << "I'm walking" << endl;
//	}
//};
//class Person : public Walk
//{
//public:
//	void Show()
//	{
//		Show_state();
//	}
//	void Show_state()
//	{
//		cout << "I'm a person." << endl;
//	}
//};
//
//int main()
//{
//	Walk* wptr = new Walk();
//	Person* ptr1 = new Person();
//
//	wptr->Show();
//	ptr1->Show();
//	delete ptr1;
//	return 0;
//}