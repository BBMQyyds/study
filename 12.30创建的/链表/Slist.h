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


//��ӡ����������
void PrintSlist(SlistNode* phead);