#include <iostream>
using namespace std;

//������ �ڵ�
class CTest
{
public:
	//CTest Ŭ������ '������ �Լ�' ���� �� ����
	CTest()
	{
		//�ν��Ͻ��� �����Ǹ� ��� �����͸� '�ڵ�����' �ʱ�ȭ�Ѵ�.
		m_nData = 10;
	}

	///��� ������ ����
	int m_nData;

	//��� �Լ� ���� �� ����
	void PrintData(void)
	{
		//��� �����Ϳ� �����ϰ� ���� ���� ����Ѵ�.
		cout << m_nData << endl;
	}
};

//����� �ڵ�
int main()
{
	CTest t;
	t.PrintData();

	return 0;
}