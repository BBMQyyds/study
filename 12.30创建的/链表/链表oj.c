#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};


//��ָ���������ת������

//struct ListNode* reverseList(struct ListNode* head)
//{
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//    //�����ѭ������������������ָ����Ϊ�˴�ŵ�������ַ����Ȼ��ָһʱ���޷�Ѱ����һ��
//    struct ListNode* pnewhead = NULL;//�µ�ͷ����ʼ��Ϊβ��Ϊ��
//    struct ListNode* pafter = head;
//    struct ListNode* pafterafter = pafter->next;
//    while (pafter)
//    {
//        pafter->next = pnewhead;//���η�ת���������
//        pnewhead = pafter;//����һλ
//        pafter = pafterafter;
//        if (pafterafter)//�˴������ж������һ����Կ�ָ������ã��������д���
//        {
//            pafterafter = pafterafter->next;
//        }
//    }
//    return pnewhead;
//}



//ͷ���������ת������

//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* cur = head;
//    struct ListNode* NewHead = NULL;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = NewHead;
//        NewHead = cur;
//        cur = next;
//    }
//}







//83. ɾ�����������е��ظ�Ԫ�أ�һ�������

//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//    if (head == NULL)
//    {
//        return head;
//    }
//    struct ListNode* prev = head;
//    struct ListNode* cur = head->next;
//    struct ListNode* pprev = prev;
//    while (cur)
//    {
//        if (cur->val == prev->val)
//        {
//            pprev = prev;
//            while (cur && cur->val == prev->val)
//            {
//                prev = cur;
//                cur = cur->next;
//            }
//            pprev->next = cur;
//            prev = head;
//            cur = head->next;
//            continue;
//        }
//        prev = cur;
//        cur = cur->next;
//    }
//    return head;
//}