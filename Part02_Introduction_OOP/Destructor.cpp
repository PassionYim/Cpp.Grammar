//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	void Show() const
//	{
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << age << endl;
//	}
//	~Person()
//	{
//		delete []name;
//		cout << "called destructor" << endl;
//	}
//};
//
//int main(void)
//{
//	Person man1("Kim E won", 29);
//	Person man2("Lee gwan won", 39);
//	man1.Show();
//	man2.Show();
//	return 0;
//}
