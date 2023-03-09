﻿#include <iostream>

//제작자 코드
class USERDATA
{
public:
	//멤버 변수 선언
	int nAge;
	char szName[32];

	//멤버 함수 선언 및 정의
	void Print(void)
	{
		//nAge와 szName은 Print() 함수의 지역 변수가 아니다.
		printf("%d, %s\n", nAge, szName);
	}
};

//사용자 코드
int main()
{
	USERDATA user = { 10,"철수" };

	user.Print();

	return 0;
}