#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


//����Ƕ�׿��ܱȽ϶࣬���Ŀ�����ʱ�����ٿ����ܲ��ܼ򻯰�
int is_prime(int x)
{
	int i = 0;
	for (i = 2; i < sqrt(x); i++)
	{
		if (x % i == 0)
			break;
	}
	if (x % i != 0)
		return 1;
	return 0;
}

void Elements_Is_Prime(int n)
{
	int could = 1;//���ڵ�֪���ս��
	if (n < 5)//��Щ��һ�������ԣ������÷�����ȥ��
	{
		printf("���У�������Ŷ��");
		return;
	}
	//�Գ��������㷨�޷����2��3������������ֱ�ӣ�
	int ele1, ele2;
	for (ele1 = 2; ele1 < n - 1; ele1++)
	{
		ele2 = n - ele1;//��ele2��С��2��ʼ
		if (ele1 < ele2)//���ظ�
		{
			if (ele1 == 2)
			{
				ele2 = 3;//ele2���赥���г�2
				if ((ele2 + ele1) == n)
				{
					printf("�ɱ�ʾΪ���� %d %d �ĺ�", ele1, ele2);
					could++;
				}
				else
				{
					ele2 = n - ele1;
					int whether = is_prime(ele2);
					if (whether == 1)
					{
						printf("�ɱ�ʾΪ���� %d %d �ĺ�", ele1, ele2);
						could++;
					}
				}
			}
			else if (ele1 == 3)
			{
				int whether = is_prime(ele2);
				if (whether == 1)
				{
					printf("�ɱ�ʾΪ���� %d %d �ĺ�", ele1, ele2);
					could++;
				}
			}
			else//ele1>3����ʱ�����Գ��������㷨
			{
				int whether1 = is_prime(ele1);
				int whether2 = is_prime(ele2);
				if ((whether1 + whether2) == 2)
				{
					printf("�ɱ�ʾΪ���� %d %d �ĺ�", ele1, ele2);
					could++;
				}
			}

		}
	}
	if (could == 1)
		printf("���У�������Ŷ��");
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Elements_Is_Prime(n);
}