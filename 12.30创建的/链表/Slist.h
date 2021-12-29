#pragma once

#include <stdio.h>
#include <stdlib.h>

#define SlistDataTpye int 


typedef struct SlistNode
{
	SlistDataTpye a;
	struct SlistNode* next;
}SlistNode;


//�����½��
SlistNode* CreatSlistNode(SlistDataTpye x);

//������β��
void SlistPushBack(SlistNode** pphead, SlistDataTpye x);

//������βɾ
void SlistPopBack(SlistNode** pphead);

//������ͷ��
void SlistPushFront(SlistNode** pphead, SlistDataTpye x);

//������ͷɾ
void SlistPopFront(SlistNode** pphead);

//���������(�������ظ�����)
SlistNode* SlistFind(SlistNode* phead,SlistDataTpye x);

//��������
void SlistInserAfter(SlistNode* pos,SlistDataTpye x);

//�������ɾ
void SlistEraseAfter(SlistNode* pos);

//��ӡ����������
void PrintSlist(SlistNode* phead);