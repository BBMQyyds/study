#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SeqDateType;

typedef struct Seqlist
{
	SeqDateType* p;
	int size;
	size_t capacity;

}seqlist;

void SeqInit(seqlist* ps);
void SeqDestory(seqlist* ps);

// �����ݵĹ���:��ɾ��� 
void SeqListPrint(seqlist* ps);
void SeqListPushBack(seqlist* ps, SeqDateType x);
void SeqListPushFront(seqlist* ps, SeqDateType x);
void SeqListPopFront(seqlist* ps);
void SeqListPopBack(seqlist* ps);

// ˳������
int SeqListFind(seqlist* ps, SeqDateType x);
// ˳�����posλ�ò���x
void SeqListInsert(seqlist* ps, int pos, SeqDateType x);
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(seqlist* ps, int pos);
