#include <iostream>
using namespace std;

//������ �ڵ�
class CRefTest
{
public:
	//������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ�Ѵ�.
	CRefTest(int& rParam) :m_nData(rParam)
	{

	};

	int GetData(void)
	{
		return m_nData;
	}

private:
	//������ ����� ��ü�� ������ �� �ݵ�� �ʱ�ȭ�ؾ� �Ѵ�.
	int& m_nData;
};

//����� �ڵ�
int main()
{
	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;

	//���� ������ a�� ���� �����Ǿ���.
	a = 20;
	cout << t.GetData() << endl;

	return 0;
}