#include "stdafx.h"
#include <iostream>
using namespace std;

//제작자 모드
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

	//실수로 double 자료형 실인수가 넘어오는 경우를 차단한다.
	void SetData(double dParam) = delete;

private:
	int m_nData;
};

//사용자 코드
int main()
{
	CMyData a;

	//CMyData::SetData(int) 메서드가 호출된다.
	a.SetData(10);
	cout << a.GetData() << endl;

	CMyData b;

	//CMyData::SetData(double)메서드가 호출된다.
	b.SetData(5.5); //삭제된 함수를 참조하려해서 error
	cout << b.GetData() << endl;

	return 0;
}