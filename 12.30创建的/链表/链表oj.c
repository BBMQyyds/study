#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    //�����ѭ������������������ָ����Ϊ�˴�ŵ�������ַ����Ȼ��ָһʱ���޷�Ѱ����һ��
    struct ListNode* pnewhead = NULL;//�µ�ͷ����ʼ��Ϊβ��Ϊ��
    struct ListNode* pafter = head;
    struct ListNode* pafterafter = pafter->next;
    while (pafter)
    {
        pafter->next = pnewhead;//���η�ת���������
        pnewhead = pafter;//����һλ
        pafter = pafterafter;
        if (pafterafter)//�˴������ж������һ����Կ�ָ������ã��������д���
        {
            pafterafter = pafterafter->next;
        }
    }
    return pnewhead;
}