#include <cstdio>

#define ADD(a,b)((a)+(b)) //매크로 코드

int Add(int a, int b) // 일반 함수
{
	return a + b;
}

inline int AddNew(int a, int b) //인라인 함수
{
	return a + b;
}

int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);

	printf("ADD() : %d", ADD(a, b));
	printf("Add() : %d", Add(a, b));
	printf("AddNew() : %d", AddNew(a, b));

	return 0;
}