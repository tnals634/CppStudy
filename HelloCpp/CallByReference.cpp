#include <iostream>
using namespace std;

//�Ű������� int�� ���� ���� �����̴�.
void TestFunc(int& rParam)
{
	//��ȣ���� �Լ����� ������ ���� �����Ѵ�.
	rParam = 100;
}

int main()
{
	int nData = 0;

	//������ ���� �μ� �����̴�.
	TestFunc(nData);
	cout << nData << endl;

	return 0;
}