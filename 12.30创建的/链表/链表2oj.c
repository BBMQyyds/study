#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

//�Ƴ�ָ��Ԫ��

struct ListNode* removeElements(struct ListNode* head, int val)
{
    if (head == NULL)
    {
        return head;
    }

    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = head->next;
    struct ListNode* returnlist = prev;

    int whether = 0;

    while (cur)
    {
        //�ҵ���δ�ҵ����ֲ�ͬ������
        if (cur->val == val)
        {
            //�ҵ�ʱ�����ɾ�����Ƿ�Ϊͷ���
            if (prev == NULL)
            {
                //ɾͷ���ʱ������ֵ��Ҫ�Ķ������ش�ʱ��nextֵ
                whether = 1;
                returnlist = next;
            }
            if (prev)
            {
                prev->next = next;
            }
            free(cur);
            cur = next;
            if (next)
            {
                next = next->next;
            }
            continue;

        }
        //δ�ҵ�ʱ����������
        prev = cur;
        cur = next;
        if (next)
        {
            next = next->next;
        }
    }
    if (whether == 1)
    {
        return returnlist;
    }
    return head;
}

//��ָ Offer 22. �����е�����k���ڵ�

//struct ListNode* getKthFromEnd(struct ListNode* head, int k)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    int kcopy = k;
//    while(kcopy)
//    {
//        if(fast)
//        {
//            fast = fast->next;
//        }
//        kcopy--;
//    }
//    while(fast)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}