#include <iostream>
#include <string>
#include<cstdio>

int main()
{
	int nAge;
	std::cout << "���̸� �Է��ϼ���." << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "������ �Է��ϼ���." << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "�̸��� �Է��ϼ���." << std::endl;
	std::cin >> strName;

	std::cout << "����� �̸��� " << strName << "�̰�, "
		<< "���̴� " << nAge << "�̸�, "
		<< "������ " << szJob << "�Դϴ�. " << std::endl;
	return 0;
}