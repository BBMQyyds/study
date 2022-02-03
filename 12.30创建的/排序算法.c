#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* p, int x, int y)
{
	int tmp = p[x];
	p[x] = p[y];
	p[y] = tmp;
}

//ѡ������

void insertsort(int* p, int sz)
{
	int i,j;
	for (i = 1; i < sz; i++) // 0��i��Ҫ����
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (p[j] > p[j + 1])
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
}

void test01()
{
	int arr[] = { 1,2,3,41,2,21,3,46,345,12 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	insertsort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//�鲢����

void merge(int* p, int left, int mid, int right);

void mergesort(int* p, int left,int right)
{
	if (left >= right)
	{
		return;
	}
	int mid = left + ((right - left) >> 1);
	mergesort(p, left, mid);
	mergesort(p, mid + 1, right);
	merge(p,left,mid,right);
}

void merge(int* p, int left, int mid, int right)
{
	int p1 = left;
	int p2 = mid + 1;
	int i = 0;

	int* phelp = (int*)malloc(sizeof(int) * (right - left + 1));
	while (p1 <= mid && p2 <= right)
	{
		phelp[i++] = p[p1] < p[p2] ? p[p1++] : p[p2++];
	}
	while (p1 <= mid)
	{
		phelp[i++] = p[p1++];
	}
	while (p2 <= right)
	{
		phelp[i++] = p[p2++];
	}
	for (i = 0; i <= right - left; i++)
	{
		p[left + i] = phelp[i];
	}
	free(phelp);
}

void test02()
{
	int arr[] = { 41,2,21,3,46,345,12 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	mergesort(arr, 0, sz - 1);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//��������left�Ǵ����������һ��Ԫ���±꣬right�����һ��Ԫ���±�

int* partition(int* arr,int left, int right)
{
	int lessarea = left - 1; //С�����������ұ߽�
	int morearea = right; //��������������߽�(��+1����Ϊ֮ǰ������������λ��)

	while (left<morearea)
	{
		if (arr[left] > arr[right])
		{
			swap(arr, left, --morearea);
		}
		else if (arr[left] < arr[right])
		{
			swap(arr, left++, ++lessarea);
		}
		else
		{
			left++;
		}
	}
	swap(arr, right, morearea++); //��������������ȥ
	int* pboundary = (int*)malloc(sizeof(int) * 2);
	pboundary[0] = lessarea;
	pboundary[1] = morearea;

	return pboundary;
}

void quicksort(int* arr, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int pivot = left + (rand() % (right - left + 1)); //ȷ��������������±꣬��֤��left��right֮��
	swap(arr, pivot, right);//���任����������λ��
	int* pboundary = partition(arr,left,right); //��������Ĵ�С�߽�λ��
	quicksort(arr, left, pboundary[0]);
	quicksort(arr, pboundary[1], right);

}

void test03()
{
	int arr[] = { 2,1,34534,324,134,6344,235454,1,12,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr,0,sz-1);
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//������

void heapinsert(int*p, int index)
{
	while (p[index] > p[(index - 1) / 2])
	{
		swap(p, index, (index - 1) / 2);
		index = (index - 1) / 2;
	}
}

void heapify(int* p, int index, int heapsize)
{
	int left = 2 * index + 1;
	while (left<heapsize)
	{
		int largest = (left + 1 < heapsize && p[left] < p[left + 1]) ? left+1 : left;
		largest = p[index] > p[largest] ? index : largest;
		if (largest == index)
		{
			break;
		}
		swap(p, index, largest);
		index = largest;
		left = index * 2 + 1;
	}
}

void heapsort(int* p, int sz)
{
	if (p == NULL || sz < 2)
	{
		return;
	}
	int i;
	for (i = 0; i < sz; i++)
	{
		heapinsert(p, i);
	}

	int heapsize = sz;
	swap(p, --heapsize, 0);

	while(heapsize>0)
	{
		heapify(p, 0, heapsize);
		swap(p, 0, --heapsize);
	}
}

void test04()
{
	int arr[] = { 2,1,34534,324,134,6344,235454,1,12,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	heapsort(arr,sz);
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//���������ԣ���������Ͱ����

void sort()
{

}

void test05()
{
	int arr[] = { 2,1,34534,324,134,6344,235454,1,12,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//srand((unsigned int)time(NULL));
	//test01();
	//test02();
	//test03();
	test04();
}