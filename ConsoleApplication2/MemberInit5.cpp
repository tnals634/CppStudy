#include <iostream>
using namespace std;

class CTest
{
public:
	//������ �ʱ�ȭ ����� �̿��� ��� �ʱ�ȭ
	CTest()
	{ }

	//c++11���� ����� ���ÿ� ��� ������ �ʱ�ȭ �� �� �ִ�.
	int m_nData = 10;
	int m_nData2 = 20;

	void PrintData(void)
	{
		cout << m_nData << endl;
		cout << m_nData2 << endl;
	}
};

//����� �ڵ�
int main()
{
	CTest t;
	t.PrintData();

	return 0;
}