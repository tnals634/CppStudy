#include <cstdio>

#define ADD(a,b)((a)+(b)) //��ũ�� �ڵ�

int Add(int a, int b) // �Ϲ� �Լ�
{
	return a + b;
}

inline int AddNew(int a, int b) //�ζ��� �Լ�
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