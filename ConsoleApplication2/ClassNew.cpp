#include <iostream>
using namespace std;

class CTest
{
	int m_nData;
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}
};

int main()
{
	cout << "Begin" << endl;

	//new �����ڸ� �̿��� �������� ��ü�� �����Ѵ�.
	CTest* pData = new CTest;
	cout << "Test" << endl;

	//�迭�� new������ ������ �� �ִ�.
	//CTest* pData = new CTest[3];

	//delete �����ڸ� �̿��� ��ü�� �����Ѵ�.
	delete pData;
	cout << "End" << endl;
	
	//�迭�� ������ ���� �ݵ�� �迭�� �����ؾ��Ѵ�.
	//delete [] pData;

	return 0;
}