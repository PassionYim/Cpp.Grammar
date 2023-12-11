//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void Show()
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
//class PartTimeStudent :public Student
//{
//public:
//	void Show()
//	{
//		Show_state();
//	}
//	void Show_state()
//	{
//		cout << "I'm a Part-Time-Student" << endl;
//	}
//};
//
//int main()
//{
//	Person* ptr1 = new Person();
//	Student* ptr2 = new Student();
//	PartTimeStudent * ptr3 = new PartTimeStudent();
//
//	ptr1->Show();
//	ptr2->Show();
//	ptr3->Show();
//	delete ptr1;
//	delete ptr2;
//	delete ptr3;
//	return 0;
//}