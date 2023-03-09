#include <iostream>
using namespace std;

class CTest
{
public:
	//디폴트 생성자 선언
	CTest(void);

	/*//생성자 다중 정의를 통해 새로운 생성자를 기술하고 디폴트 생성자를 기술하지 않는다면 디폴트 생성자는 사라진 것이라 할 수 있음.
	//하지만 드러내지 않아 혼란스러울수 있음.
	CTest(void) = delete; // 이 코드를 작성하여 사라졌다는것을 알려주면 좋음.*/


	//디폴트 생성자 선언 및 정의!
	//CTest(void) = default; //이런 문법이 존재한다는 것만 기억, '템플릿' 프로그래밍시 필요.
	int m_nData = 5;
};

//클래스 외부에서 디폴트 생성자 정의
CTest::CTest(void)
{

}

int main()
{
	CTest a;
	cout << a.m_nData << endl;
	return 0;
}