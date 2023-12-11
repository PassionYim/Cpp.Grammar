#include <iostream>
#include <cstring>
using namespace std;

class people
{
private:
	char nameID[20];
	int Age, Weight, Height;
public:
	void peopleinit(const char* name, int age, int weight, int height);
	void show_peopleStruct();
};
struct people_st
{
	char nameID[20];
	int Age, Weight, Height;

	void show_peopleStruct();
};
int main(void)
{
	people A;
	people_st B = {"MS", 15, 160, 55};
	A.peopleinit("sm", 25, 175, 65);
	A.show_peopleStruct();
	B.show_peopleStruct();

	
}
void people::peopleinit(const char* name, int age, int weight, int height)
{
	strcpy_s(nameID, name);
	Age = age;
	Weight = weight;
	Height = height;
}
void people::show_peopleStruct()
{
	cout << "이름: ";
	cout << nameID;
	cout << ", 나이: ";
	cout << Age;
	cout << ", 키: ";
	cout << Height;
	cout << ", 몸무게: ";
	cout << Weight<<endl;

}
void people_st::show_peopleStruct()
{
	cout << "이름: ";
	cout << nameID;
	cout << ", 나이: ";
	cout << Age;
	cout << ", 키: ";
	cout << Height;
	cout << ", 몸무게: ";
	cout << Weight << endl;

}