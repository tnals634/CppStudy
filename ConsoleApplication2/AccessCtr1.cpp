#include <iostream>
using namespace std;

//������ �ڵ�
class CMyData
{
	//�⺻ ���� ���� �����ڴ� 'private'�̴�.
	int m_nData;

public:
	int GetData(void)
	{ 
		return m_nData; 
	}
	void SetData(int nParam)
	{ 
		m_nData = nParam;
	}
};

//����� �ڵ�
int main()
{
	CMyData data;
	data.SetData(10);
	cout << data.GetData() << endl;

	return 0;
}