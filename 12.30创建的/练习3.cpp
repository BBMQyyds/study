#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1��ɾ��������ָ����Ԫ�أ�����ɾ����������Ԫ�ظ���,ʱ�临�Ӷ�O��n�����ռ�O��1��

//int delval(int* p, int len,int n )
//{
//	int i = 0;
//	int* pleft = p;
//	int count = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (pleft[i] == n)
//		{
//			*(pleft+i)=*p;
//			p += 1;
//			count++;
//		}
//	}
//	/*for (i = 0; i < len - count; i++)
//	{
//
//	}*/
//	return (len - count);
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,7,7,8 };
//	int i = 0;
//	int n = 7;
//	int len = sizeof(arr)/sizeof(arr[0]);
//	int newlen = delval(arr, len, n);
//	printf("%d\n", newlen);
//	for (i = 0; i < newlen; i++)
//	{
//		printf("%d", arr[len-newlen+i]);
//	}
//}

//2��ɾ�����������е��ظ���(��һ��)

//��������Ѿ�����ã��ظ�����ڣ���

//void delrepeat_all(int* p,int len)
//{
//	int a = 0;
//	int i = 0;
//	int* pleft = p;
//	for (i = 0; i < len-1; i++)
//	{
//		if (pleft[i] == pleft[i + 1])
//		{
//			pleft[i] = *p;
//			p += 1;
//			if (pleft[i + 1] != pleft[i + 2])
//			{
//				pleft[i + 1] = *p;
//				p += 1;
//			}
//		}
//	}
//}


//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,6,6,7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	delrepeat_all(arr, len);
//	int i = 0;
//	for (i = 0; i < len - 3; i++)
//	{
//		printf("%d", arr[i + 3]);
//	}
//}
