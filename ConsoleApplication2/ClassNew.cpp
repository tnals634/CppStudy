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

	//new 연산자를 이용해 동적으로 객체를 생성한다.
	CTest* pData = new CTest;
	cout << "Test" << endl;

	//배열로 new연산을 수행할 수 있다.
	//CTest* pData = new CTest[3];

	//delete 연산자를 이용해 객체를 삭제한다.
	delete pData;
	cout << "End" << endl;
	
	//배열로 생성한 것은 반드시 배열로 삭제해야한다.
	//delete [] pData;

	return 0;
}