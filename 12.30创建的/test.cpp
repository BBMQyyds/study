#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//���ֱ����n���쳲���������
long long* FibArr(int N)
{
	assert(N >= 0);
	int i = 0;
	int choose = 0;
	printf("���ϴ���쳲��������е�һ����1��Ҳ��0�ģ��������飬���ֶ�д��\n");
	printf("ѡ��쳲��������еĵ�һ�� 1.1 0.0\n");
again:
	printf("��ѡ��:>");
	scanf("%d", &choose);
	if (choose == 1)
	{
		long long* FibArr = (long long*)malloc(sizeof(long long) * (N + 1));
		FibArr[0] = 1;
		if (N < 2)
		{
			return FibArr;
		}
		FibArr[1] = 1;
		for (i = 2; i < N; i++)
		{
			FibArr[i] = FibArr[i - 1] + FibArr[i - 2];
		}
		return FibArr;
	}
	else if (choose == 0)
	{
		long long* FibArr = (long long*)malloc(sizeof(long long) * (N + 1));
		FibArr[0] = 0;
		if (N < 2)
		{
			return FibArr;
		}
		FibArr[1] = 1;
		for (i = 2; i < N; i++)
		{
			FibArr[i] = FibArr[i - 1] + FibArr[i - 2];
		}
		return FibArr;
	}
	else
	{
		printf("Ƥһ�ºܿ��ģ�");
		goto again;
	}
}

int main()
{
	printf("��������Ҫ����������(�˴����������)\n");
	printf("�����󵽵ڼ��:>");
	int n = 0;
	scanf("%d", &n);
	long long* p = FibArr(n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		printf("��%d��  %-5lld\n",i, p[i-1]);
	}
}