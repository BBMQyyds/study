#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//������Ŀ

int main()
{
	//int arr[3][2] = { (0,1),(2,3),(4,5) };
	//��ֵ���Ϊ���ű��ʽ��Ϊ����ֵ
	//ʵ�ʸ�ֵ1��3��5����������Ԫ��Ĭ��Ϊ0
	//int a[3][2] = { {1,2},{3,4},{5,6} };
	//��ȫ��ֵ
	//��дΪ{1,2,3,4,5,6}

	//��Ŀ1
	//int arr[3][2] = { (0,1),(2,3),(4,5) };
	//int* p;
	//p = arr[0];
	//printf("%d", p[0]);
	//p[0]�൱��*(p+0),���Ϊ1

	//��Ŀ2(�ѶȽϴ�
	//int a[5][5];
	//int(*p1)[4];
	//p1 = a;
	//printf("%p,%d\n", &p1[4][2] - &a[4][2], &a[4][2] - &p1[4][2]);
	//��������ǿ�и�ֵ�޷����룬�����У����۽��Ϊ
	//0xFFFFFFFC �� -4
	
	//��Ŀ3
	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* ptr1 = (int*)(&aa + 1);
	//int* ptr2 = (int*)(*(aa + 1));//�˴���ǿ������ת���Ƕ����
	//printf("%d,%d",*(ptr1-1),*(ptr2-1));
	// 10 5

	//��Ŀ4
	/*const char* a[] = { "work","at","alibaba" };
	const char** pa = a;
	pa++;
	printf("%s\n", *pa);*/
	//at

	//��Ŀ5(�ѶȽϴ󣬻��ڴ沼�����ڽ��)
	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
	const char** cp[] = { c + 3,c + 2,c + 1,c };
	const char*** cpp = cp;

	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp+3);//ER
	printf("%s\n", *cpp[-2]+3);//ST
	printf("%s\n", cpp[-1][-1]+1);//EW
}