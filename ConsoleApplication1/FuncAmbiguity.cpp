#include <iostream>

void TestFunc(int a)
{
	std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10)
{
	std::cout << "TestFunc(int,int)" << std::endl;
}

int main()
{
	TestFunc(5); //호출이 모호

	return 0;
}