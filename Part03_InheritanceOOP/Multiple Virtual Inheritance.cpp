#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base Constructor" << endl;
	}
	void SimpleFunc()
	{
		cout << "BaseOne" << endl;
	}
};
class MiddleOne :virtual public Base
{
public:
	MiddleOne() :Base()
	{
		cout << "MiddleOne Constructor" << endl;
	}
	void MiddleFuncOne()
	{
		SimpleFunc();
		cout << "MiddleOne" << endl;
	}
};
class MiddleTwo :virtual public Base
{
public:
	MiddleTwo() :Base()
	{
		cout << "MiddleTwo Constructor" << endl;
	}
	void MiddleFuncTwo()
	{
		SimpleFunc();
		cout << "MiddleTwo" << endl;
	}
};
class LastDerived :public MiddleOne, public MiddleTwo
{
public:
	LastDerived() :MiddleOne(), MiddleTwo()
	{
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc();
	}
};
int main()
{
	cout << "按眉积己 傈 ..." << endl;
	LastDerived ld;
	cout << "按眉积己 饶 ..." << endl;
	ld.ComplexFunc();
	return 0;
}