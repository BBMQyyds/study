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

//21. �ϲ�������������

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    if (list1 == NULL || list2 == NULL)
//    {
//        if (list2 != NULL)
//        {
//            return list2;
//        }
//        else if (list1 != NULL)
//        {
//            return list1;
//        }
//        else
//            return NULL;
//    }
//    int lenlist1 = 0;
//    struct ListNode* cur1 = list1;
//    while (cur1)
//    {
//        cur1 = cur1->next;
//        lenlist1++;
//    }
//
//    int lenlist2 = 0;
//    struct ListNode* cur2 = list2;
//    while (cur2)
//    {
//        cur2 = cur2->next;
//        lenlist2++;
//    }
//
//    int minlen = lenlist1 < lenlist2 ? lenlist2 : lenlist2;
//    int whether = 0;
//    
//
//        if (minlen == lenlist1)
//        {
//            struct ListNode* prev_maxlen = NULL;
//            struct ListNode* curminlen = list1;
//            struct ListNode* curmaxlen = list2;
//
//            struct ListNode* minlen_next = list1->next;
//           
//            struct ListNode* returnlist = curminlen;
//
//            while (minlen)
//            {
//                while (curmaxlen && curminlen->val >= curmaxlen->val)
//                {
//                    prev_maxlen = curmaxlen;
//                    curmaxlen = curmaxlen->next;
//                    
//                }
//                if (prev_maxlen == NULL)
//                {
//                    whether = 1;
//                    returnlist = curminlen;
//                }
//                if (prev_maxlen)
//                {
//                    prev_maxlen->next = curminlen;
//                    
//                }
//                curminlen->next = curmaxlen;
//                curmaxlen = curminlen;
//                
//                curminlen = minlen_next;
//                if (curminlen)
//                {
//                    minlen_next = curminlen->next;
//                }
//                minlen--;
//            }
//            if (whether == 1)
//            {
//                return returnlist;
//            }
//            return list2;
//        }
//        else
//        {
//            struct ListNode* prev_maxlen = NULL;
//            struct ListNode* curminlen = list2;
//            struct ListNode* curmaxlen = list1;
//            struct ListNode* minlen_next = list2->next;
//            struct ListNode* maxlen_next = list1->next;
//            struct ListNode* returnlist = curminlen;
//            while (minlen)
//            {
//                while (curmaxlen && curminlen->val >= curmaxlen->val)
//                {
//                    prev_maxlen = curmaxlen;
//                    curmaxlen = curmaxlen->next;
//
//                }
//                if (prev_maxlen == NULL)
//                {
//                    whether = 1;
//                    returnlist = curminlen;
//                }
//                if (prev_maxlen)
//                {
//                    prev_maxlen->next = curminlen;
//                    
//                }
//                
//                curminlen->next = curmaxlen;
//                curmaxlen = curminlen;
//
//                curminlen = minlen_next;
//                if (curminlen)
//                {
//                    minlen_next = curminlen->next;
//                }
//                minlen--;
//            }
//            if (whether == 1)
//            {
//                return returnlist;
//            }
//            return list1;
//        }
//}


