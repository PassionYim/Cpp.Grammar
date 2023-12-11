//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Simple
//{
//private:
//	char * name;
//	int age;
//
//public:
//	Simple(const char * myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	void show() const
//	{
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//	~Simple()
//	{
//		delete []name;
//		cout << "called destructor"<< endl;
//
//	}
//};
//
//int main()
//{
//	Simple sm1("Lee Soo", 20);
//	Simple sm2(sm1);
//	sm1.show();
//	sm2.show();
//	return 0;
//}
//
