#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

////int main()
////{
////	int* p = (int*)malloc(INT_MAX);
////	if (p == NULL)
////	{
////		printf("%s\n", strerror(errno));
////	}
////}
// 
////��Ŀ1������������н��
//
////void GetMemory(char* p)
////{
////	p = (char*)malloc(100);
////}
////void test()
////{
////	char* str = NULL;
////	GetMemory(str);
////	strcpy(str, "hello world");
////	printf(str);
////}
////int main()
////{
////	test();
////}
////�����������Ϊ�Կ�ָ������˽����ã�str����ʱ������ֵ

