#include <iostream>

using namespace std;

//���� �����̹Ƿ� ȣ���� ������ ���� ������ �� �ִ�.

void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

int main()
{
	int x = 10, y = 20;

	//���� �����̸� �� ������ ���� ��ȯ�ȴ�.
	Swap(x, y);

	//��ȯ�� ����� ����Ѵ�.
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	return 0;
}