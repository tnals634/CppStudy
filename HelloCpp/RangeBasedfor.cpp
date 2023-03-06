#include <iostream>
using namespace std;

int main()
{
	int aList[5] = { 10,20,30,40,50 };

	//�������� C��Ÿ�� �ݺ���
	for (int i = 0; i < 5; i++)
		cout << aList[i] << ' ';
	cout << endl;

	//���� ��� c++11 ��Ÿ�� �ݺ���
	//�� ����� ���� n�� �����Ѵ�.

	for (auto n : aList)
		cout << n << ' ';
	cout << endl;

	//n�� �� ��ҿ� ���� ������.
	for (auto& n : aList)
		cout << n << ' ';
	cout << endl;

	return 0;
}