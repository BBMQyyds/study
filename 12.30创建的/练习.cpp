#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//ɾ���ظ��ַ�(���ַ�����ȫ����ͬһ�ַ�����һ���ַ����ַ��������ո�)

void DelRepeat(char* p)
{
	int i = 0;
	int n = strlen(p);
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = i + 1; j < n; j++)
		{
			if (p[i] == p[j])
			{
				p[j] = ' ';
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (p[i] == ' ')
		{
			int j = 0;
			int a = i;
			for (j = a + 1; j < n+1; j++)//��/0
			{
				p[a] = p[j];
				a++;
			}
			i -= 1;//��������ո�ĵ�����ʹ֮�ض����滻
		}
	}
}

//ɾ���ظ��ַ�(�ظ��ַ�ȫɾ���ַ��������ո�)

void DelRepeat1(char* p)
{
	int i = 0;
	int n = strlen(p);
	int count = 0;//��¼�ж��ٸ�i����¼
	int whether = 0;
	int j = 1;
	int* pi = (int*)malloc(sizeof(int));
	for (i = 0; i < n; i++)
	{
		int j = 0;
		whether = 0;
		for (j = i + 1; j < n; j++)
		{
			if (p[i] == p[j])
			{
				p[j] = ' ';
				whether++;
				if (whether == 1)
				{//��¼��ʱ��i
					count++;
					int* ptr = (int*)realloc(pi, sizeof(int) * count);
					if (ptr)
					{
						pi = ptr;
						pi[count - 1] = i;
					}
				}
			}
		}
	}
	for (i = count; i; i--)
	{
		p[pi[count-j]] = ' ';
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (p[i] == ' ')
		{
			int j = 0;
			int a = i;
			for (j = a + 1; j < n + 1; j++)//��/0
			{
				p[a] = p[j];
				a++;
			}
			i -= 1;//��������ո�ĵ�����ʹ֮�ض����滻
		}
	}
}

int cmp_int(const void* p1, const void* p2)
{
	return *((int*)p1) - *((int*)p2);
}

//�и��ַ������ǻ�������

void strtok1(char*str,char*tok)
{
	int i = 0;//ѭ������,����tok�е��ַ�
	int lenstr = strlen(str);
	int lentok = strlen(tok);
	int count = 0;
	int j = 0;//ѭ������������str�е��ַ�
	int* pi = (int*)malloc(sizeof(int));
	for (i = 0; i < lentok; i++)
	{
		for (j = 0; j < lenstr; j++)
		{
			if (tok[i] == str[j])
			{
				count++;//count��pi�����е�Ԫ�ظ���
				str[j] = '\0';
				int* ptr = (int*)realloc(pi,sizeof(int) * count);
				if (ptr)
				{
					pi = ptr;
					pi[count - 1] = j;//Ҫ����+1����ָ��\0����
				}
			}
		}
	}
	char* pt = str;//��Ϊstr�ĸ�����������str
	printf("%s\n", pt);
	if (count > 1)
	{
		qsort(pi, count, sizeof(int), cmp_int);
	}
	for (i = 0; i <= count - 1; i++)
	{
		pt = str;
		pt += pi[i] + 1;
		printf("%s\n", pt);
	}
}

int main()
{
	char str[81] = "";
	gets_s(str);
	//DelRepeat1(ch)
	char tok[81] = "";
	gets_s(tok);
	strtok1(str, tok);
}