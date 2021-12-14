#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//����sizeof��������strlen���������

//int main()
 //{
	//int arr[] = { 1,2,3 };
	//printf("%d", sizeof(&arr[1])); ������Ԫ�ص�ַ  ��СΪ4��8�ֽ�
	//printf("%d", sizeof(&arr)); �����ַ  ��СΪ4��8�ֽ�
	//printf("%d", sizeof(*&arr)); ���飬����������ռ���ڴ�ռ�Ĵ�С
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d", sizeof(arr)); 6
	//printf("%d", strlen(arr)); ������
	//printf("%d", strlen(&arr)); //��ͨ�����룬�޷�����
//}

 //���Զ������������ͽ��������ð�������㷨

void swap(char* e1, char* e2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		 char tmp = *e1;
		 *e1 = *e2;
		 *e2 = tmp;
		 e1++;
		 e2++;
	}
}

void Bubble_Sort(void* arr, int sz, int width, float(*cmp)(void* e1, void* e2))
{
	int i = 0,j;
	for (i=0;i<sz;i++)
	{
		for (j=0;j<sz-i-1;j++)
		{
			float re = (float)cmp((char*)arr + j * width, (char*)arr + (j + 1) * width);
			if (re >= 0.0)
				swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
		}
	}
}


float cmp_int(void* e1, void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

void test1()
{
	int arr[] = { 3,6,12,79,5,2,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	Bubble_Sort(arr, sz, width, cmp_int);
}

float cmp_float(void* e1,void* e2)
{
	return (*(float*)e1 - *(float*)e2);
}

void test2()
{
	float arrf[] = { 2.0,3.0,3.6,3.55,5.4,5.3 };
	int sz = sizeof(arrf) / sizeof(arrf[0]);
	Bubble_Sort(arrf, sz, sizeof(arrf[0]), cmp_float);
	int i = 0;
}

int main()
{
	test1();
	printf("hh");
	printf("hh");
	test2();
}