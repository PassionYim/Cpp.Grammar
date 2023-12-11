//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void Show()
//	{
//		Show_state();
//	}
//	void Show_state()
//	{
//		cout << "I'm Person" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	void Show()
//	{
//		Show_state();
//	}
//	void Show_state()
//	{
//		cout << "I'm a Student" << endl;
//	}
//};
//
//int main()
//{
//	Person* ptr1 = new Student();
//
//	ptr1->Show();
//	delete ptr1;
//	return 0;
//}