#include <iostream>
using namespace std;

class CMyPoint
{
public:
	CMyPoint(int x)
	{
		cout << "CMyPoint(int)" << endl;
		//x ���� 100�� �Ѵ��� �˻��ϰ� ������ 100���� �����.
		if (x > 100)
			x = 100;

		m_x = 100;
	}

	CMyPoint(int x, int y)
		//x ���� �˻��ϴ� �ڵ�� �̹� �����ϹǷ� ����Ѵ�.
		:CMyPoint(x)
	{
		cout << "CMyPoint(int, int)" << endl;

		//y ���� 200�� �Ѵ��� �˻��ϰ� ������ 200���� �����.
		if (y > 200)
			y = 200;

		m_y = 200;
	}

	void Print()
	{
		cout << "x : " << m_x << endl;
		cout << "y : " << m_y << endl;
	}
private:
	int m_x = 0;
	int m_y = 0;
};

int main()
{
	//�Ű������� �ϳ��� �����ڸ� ȣ���Ѵ�.
	CMyPoint ptBegin(110);
	ptBegin.Print();

	//�̹����� �� ������ ��� ȣ���Ѵ�.
	CMyPoint ptEnd(50, 250);
	ptEnd.Print();

	return 0;
}