#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1. �и��ַ���

//int cmp_int(const void* p1, const void* p2)
//{
//	return *((int*)p1) - *((int*)p2);
//}

//void strtok1(char* str, char* tok)
//{
//	int i = 0;//ѭ������,����tok�е��ַ�
//	int lenstr = strlen(str);
//	int lentok = strlen(tok);
//	int count = 0;
//	int j = 0;//ѭ������������str�е��ַ�
//	int* pi = (int*)malloc(sizeof(int));
//	for (i = 0; i < lentok; i++)
//	{
//		for (j = 0; j < lenstr; j++)
//		{
//			if (tok[i] == str[j])
//			{
//				count++;//count��pi�����е�Ԫ�ظ���
//				str[j] = '\0';
//				int* ptr = (int*)realloc(pi, sizeof(int) * count);
//				if (ptr)
//				{
//					pi = ptr;
//					pi[count - 1] = j;//Ҫ����+1����ָ��\0����
//				}
//			}
//		}
//	}
//	char* pt = str;//��Ϊstr�ĸ�����������str
//	printf("%s\n", pt);
//	if (count > 1)
//	{
//		qsort(pi, count, sizeof(int), cmp_int);
//	}
//	for (i = 0; i <= count - 1; i++)
//	{
//		pt = str;
//		pt += pi[i] + 1;
//		if (pt[pi[i]] == pt[pi[i] + 1])
//		{
//			continue;
//		}
//		printf("%s\n", pt);
//	}
//}

//int main()
//{
//	char str[81] = "";
//	gets_s(str);
//	char tok[81] = "";
//	gets_s(tok);
//	strtok1(str, tok);
//}

//2. ��ʧ�����֣���������0��n��������ȱ��һ�����ҳ�����

//�²⣺�������������ɣ�������
//��������ͬ0��1

//int missingnumber(int* pi,int n)
//{
//	int a = 0;
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		a = a ^ i;
//	}
//	for (i = 0; i < n; i++)
//	{
//		a = a ^ pi[i];
//	}
//	return a;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,9,0 };
//	int n = 9;//0��9��������ʵ��
//	printf("%d",missingnumber(arr,n));
//}

//3. һ����������������һ�������������������Ķ��������Σ�ʱ�临�Ӷ�ΪO��n����ͬ�ϣ�

//4. ��������(ʱ�临�Ӷ�ΪO��n��)

//void singlenum(int* pi, int sz)
//{
//	int i = 0;//ѭ������
//	int a = 0;//������
//	int b = 1;//�ж϶�����λ�Ƿ�Ϊ1
//	int* p1 = (int*)malloc(sizeof(int)*(sz-1));
//	int count1 = 0;
//	int* p0 = (int*)malloc(sizeof(int)*(sz-1));
//	int count0 = 0;
//	//�����е�Ԫ��ȫ��������յõ����������������ֵ
//	if (p1 && p0)
//	{
//		for (i = 0; i < sz; i++)
//		{
//			a = a ^ pi[i];
//		}
//		//���������������ֵ�ĵ����ڼ�λ��1����Ϊ�����1�ģ�֤�������ڴ˴�������λ��ͬ��
//		for (i = 0; i < 32; i++)
//		{
//			if ((a & b) == 1)
//			{
//				int j = 0;//����ѭ�����ж������е�����i+1λ�Ķ�����λ�Ƿ���1����1�Ͳ���1�ķ�����
//				for (j = 0; j < sz; j++)
//				{
//					if (((pi[j] >> i) & b) == 1)
//					{
//						count1++;
//						p1[count1 - 1] = pi[j];
//					}
//					else
//					{
//						count0++;
//						p0[count0 - 1] = pi[j];
//					}
//				}
//				break;//if�����ɹ�һ�ξͿ��ԣ�����ظ������壬�����ܳ�bug
//			}
//			a = a >> 1;
//		}
//		int m = 0;//��������������������������е�һ������
//		int n = 0;//��������������������ֵ���һ��
//		for (i = 0; i < count0; i++)
//		{
//			m = m ^ p0[i];
//		}
//		for (i = 0; i < count1; i++)
//		{
//			n = n ^ p1[i];
//		}
//		if (count0 % 2 == 0)
//		{
//			printf("û����������");
//			return;
//		}
//		printf("%d %d", n, m);
//	}
//}

//int main()
//{
//	int arr[] = { 1,1,3,3,4,4,5,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	singlenum(arr, sz);
//}