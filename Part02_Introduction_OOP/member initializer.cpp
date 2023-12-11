//#include <iostream>
//using namespace std;
//class SimpleClass
//{
//private:
//	int num1;
//	int num2;
//public:
//	SimpleClass()
//	{
//		num1 = 0;
//		num2 = 0;
//	}
//	SimpleClass(int n)
//	{
//		num1 = n;
//		num2 = 0;
//	}
//	SimpleClass(int n1, int n2)
//	{
//		num1 = n1;
//		num2 = n2;
//	}
//	/*
//	SimpleClass(int n1 = 0, int n2 = 0)
//	{
//		num1 = n1;
//		num2 = n2;
//	}
//
//	*/
//	void Show() const
//	{
//		cout << num1 << " " << num2 << endl;
//	}
//	int getn1() const
//	{
//		return num1;
//	}
//	int getn2() const
//	{
//		return num2;
//	}
//};
//
//class MiddleClass
//{
//private:
//	SimpleClass SC1;
//	SimpleClass SC2;
//public:
//	MiddleClass(const int& n1, const int& n2, const int& n3, const int& n4) : SC1(n1, n2), SC2(n3, n4)
//	{
//
//	}
//	void Show() const
//	{
//		cout << "SC1 :" << SC1.getn1() << ", " << SC1.getn2() << endl;
//		cout << "SC2 :" << SC2.getn1() << ", " << SC2.getn2() << endl;
//
//	}
//};
//int main(void)
//{
//	MiddleClass MC(1, 2, 3, 4);
//	MC.Show();
//	return 0;
//}