#include <iostream>

//std ���ӽ����̽��� using ������ �����Ѵ�.

using namespace std;

namespace TEST
{
	int g_nData = 100;

	void TestFunc(void)
	{
		//cout�� ���ؼ� ������ �������� �ʾƵ� �������.
		cout << "TEST::TestFunc()" << endl;
	}
}

//TEST ���ӽ����̽��� using ������ �Ѵ�.
using namespace TEST;

int main()
{
	//TestFunc()�� g_nData���� ���� ������ �� �ʿ䰡 ����.
	TestFunc();
	cout << g_nData << endl;

	return 0;
}