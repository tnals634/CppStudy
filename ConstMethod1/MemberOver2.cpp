#include "stdafx.h"
#include <iostream>
using namespace std;

//������ ���
class CMyData
{
public:
	CMyData() :m_nData(0) { };

	int GetData(void)
	{
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}

	//�Ǽ��� double �ڷ��� ���μ��� �Ѿ���� ��츦 �����Ѵ�.
	void SetData(double dParam) = delete;

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

	//CMyData::SetData(double)�޼��尡 ȣ��ȴ�.
	b.SetData(5.5); //������ �Լ��� �����Ϸ��ؼ� error
	cout << b.GetData() << endl;

	return 0;
}