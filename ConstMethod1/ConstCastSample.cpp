#include "stdafx.h"
#include <iostream>
using namespace std;

void TestFunc(const int& nParam)
{
	//����� ���������� �Ϲ� ������ ����ȯ�ߴ�.
	int& nNewParam = const_cast<int&>(nParam); //const_cast<������>(���)

	//���� 1-value�� �� �� �ִ�.
	nNewParam = 20;
}

int main()
{
	int nData = 10;

	//����� ������ ���������� ���� ����ȴ�.
	TestFunc(nData);

	//����� ���� ����Ѵ�.
	cout << nData << endl;

	return 0;
}