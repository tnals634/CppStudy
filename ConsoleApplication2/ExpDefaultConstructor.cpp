#include <iostream>
using namespace std;

class CTest
{
public:
	//����Ʈ ������ ����
	CTest(void);

	/*//������ ���� ���Ǹ� ���� ���ο� �����ڸ� ����ϰ� ����Ʈ �����ڸ� ������� �ʴ´ٸ� ����Ʈ �����ڴ� ����� ���̶� �� �� ����.
	//������ �巯���� �ʾ� ȥ��������� ����.
	CTest(void) = delete; // �� �ڵ带 �ۼ��Ͽ� ������ٴ°��� �˷��ָ� ����.*/


	//����Ʈ ������ ���� �� ����!
	//CTest(void) = default; //�̷� ������ �����Ѵٴ� �͸� ���, '���ø�' ���α׷��ֽ� �ʿ�.
	int m_nData = 5;
};

//Ŭ���� �ܺο��� ����Ʈ ������ ����
CTest::CTest(void)
{

}

int main()
{
	CTest a;
	cout << a.m_nData << endl;
	return 0;
}