#include "stdafx.h"
#include <iostream>
using namespace std;

//������ �ڵ�
class CMyData
{
public:
	CMyData() :m_nData(0){};

	int GetData(void)
	{
		return m_nData;
	}
	void SetData(int nParam)
	{
		m_nData = nParam;
	}

	//�Ű������� double �ڷ����� ���� ���� �����ߴ�.
	void SetData(double dParam)
	{
		m_nData = 0;
	}

private:
	int m_nData;
};

//����� �ڵ�
int main()
{
	CMyData a;

	//CMyData::SetData(int) �޼��尡 ȣ��ȴ�.
	a.SetData(10);
	cout << a.GetData() << endl;

	CMyData b;

	//CMyData::SetData(double) �޼��尡 ȣ��ȴ�.
	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;
}