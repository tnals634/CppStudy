#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
public:
	CTest(int nParam) :m_nData(nParam) {};
	~CTest() {}

	//����� �޼���� ���� �� �����ߴ�.
	int GetData() const
	{
		//����� �޼���� mutable ��� �������� ���� �� �� �ִ�.
		m_nData = 20;
		return m_nData;
	}

	int SetData(int nParam)
	{
		m_nData = nParam;
	}

private:
	mutable int m_nData = 0; // mutable�� ������ ��� ���� ���� �����(const) �޼��忡���� ���Ⱑ ���ȴ�.
};

int main()
{
	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}