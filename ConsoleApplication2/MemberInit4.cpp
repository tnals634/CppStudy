#include <iostream>
using namespace std;

//������ �ڵ�
class CTest
{
public:
	//������ �ʱ�ȭ ����� �̿��� ��� �ʱ�ȭ
	CTest()
		:m_nData(10), m_nData2(20)
	{

	}

	//�ΰ��� ��� ������ ����
	int m_nData;
	int m_nData2;

	//��� �Լ� ���� �� ����
	void PrintData(void)
	{
		//�� ���� ��� �����Ϳ� �����ϰ� ���� ����Ѵ�.
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