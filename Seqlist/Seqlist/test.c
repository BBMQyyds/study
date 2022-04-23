#define _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

void test01()
{
	seqlist slist;
	SeqInit(&slist);
	SeqListPushBack(&slist,5);
	SeqListPushBack(&slist, 1);
	SeqListPushBack(&slist, 1);
	SeqListPushBack(&slist, 1);
	SeqListPopBack(&slist);

	SeqListPushFront(&slist, 11);
	SeqListPushFront(&slist, 11);
	SeqListPushFront(&slist, 11);
	SeqListPopFront(&slist);
	int pos = SeqListFind(&slist, 11);

	if (pos != -1)
	{
		printf("��һ����ֵΪ11��Ԫ���±�Ϊ%d\n", pos);
	}
	SeqListPrint(&slist);
}

int main()
{
	test01();
}