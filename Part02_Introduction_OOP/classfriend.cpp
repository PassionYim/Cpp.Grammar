/*#include <iostream>

class A
{
private:
	int num1;
	int num2;
	int num3;
	friend class B;
public:
	A(int n1, int n2, int n3)
		:num1(n1), num2(n2), num3(n3)
	{
		std::cout << "A => num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << std::endl;

	}
};

class B
{
private:
	int num1;
	int num2;
	int num3;
public:
	B(int n1, int n2, int n3)
		:num1(n1), num2(n2), num3(n3)
	{
		std::cout << "B => num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << std::endl;

	}
	void Adder(B& ob1, A& ob2);
};
void B::Adder(B& ob1, A& ob2)
{
	std::cout << "A + B => num1: " << ob1.num1 + ob2.num1 << ", num2: " << ob1.num2 + ob2.num2 << ", num3: " << ob1.num3 + ob2.num3 << std::endl;
}

int main()
{
	A a1(1, 2, 3);
	B b1(4, 5, 6);
	b1.Adder(b1, a1);
	return 0;
}*/