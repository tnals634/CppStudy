#include <iostream>

template <typename T>

T TestFunc(T a)
{
	std::cout << "�Ű����� a : " << a << std::endl;

	return a;
}

int main()
{
	std::cout << "int\t" << TestFunc(3) << std::endl;
	std::cout << "double\t" << TestFunc(3.3) << std::endl;
	std::cout << "char\t" << TestFunc('A') << std::endl;
	std::cout << "char*\t" << TestFunc("TestString") << std::endl;

	return 0;
}

