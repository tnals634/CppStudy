#include <iostream>
using namespace std;

class CTest
{
	int m_nData;

public:
	//�������� �Ű������� ���޵� ������ ��� ������ �ʱ�ȭ�Ѵ�.
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		//������ �� �Ű������� ���� ���� ����Ѵ�.
		cout << "~CTest::CTest()" << m_nData << endl;
	}
};

int main()
{
	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;

	return 0;
}