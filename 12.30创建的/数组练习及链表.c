#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<malloc.h>

//�޷����������

//int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
//{
//    if(k==0)
//    {
//        *returnSize = numSize;
//        return num;
//    }
//    int i = 0;
//    int tmp = numSize;
//    unsigned long long ret = 0;
//    unsigned long long sum = 0;
//    int count = 0;//ͳ�ƺ����м�λ
//    for(i=0;i<numSize;i++)
//    {
//        ret = (unsigned long long)(num[i])*pow(10,tmp-1);
//        sum += ret;
//        tmp--;
//    }
//    unsigned long long Sum_n_k = sum + k;
//    unsigned long long copy = Sum_n_k;
//    while(copy)
//    {
//        copy /= 10;
//        count++;
//    }
//    int* pReturnArr = (int*)malloc(sizeof(int)*count);
//    i = count-1;
//    for(;Sum_n_k;)
//    {
//        pReturnArr[i] = Sum_n_k % 10;
//        Sum_n_k /= 10;
//        i--;
//    }
//    *returnSize = count;
//    return pReturnArr;
//}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
{
    int kcopy = k;
    int kSize = 0;
    int ret = 0;
    while (kcopy)
    {
        kSize++;
        kcopy /= 10;
    }
    int len = kSize > numSize ? kSize : numSize;// k��num˭��λ������
    int i = numSize - 1;
    int carry = 0;//�Ƿ��λ
    int* returnArr = (int*)malloc(sizeof(int) * (len + 1));//��ʹ��λ��Ҳ����Ǳ����λ��һλ
    int m = len;//m��len�ĸ�����������returnArr�������Ԫ��ʱ��λ�±꣬������λ�ÿ�ʼ��
    int lencopy = len;//lencopy��len�ĸ�������������returnSize��ָ��ֵ
    while (len)
    {
        //�������Ԫ�ظ���С��k��λ��
        int a = 0;
        if (i >= 0)
        {
            a = num[i];
            i--;
        }
        ret = a + k % 10 + carry;
        k /= 10;
        if (ret > 9)
        {
            ret -= 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        returnArr[m] = ret;
        len--;
        m--;
    }
    if (carry == 1)
    {
        returnArr[m] = 1;
        *returnSize = lencopy + 1;
        return returnArr;
    }
    else
    {
        //���ڶ���࿪����һ�����οռ䣬���λ��Ӳ���λʱ����Ҫ����returnArr+1��������һ��Ԫ��
        *returnSize = lencopy;
        return returnArr + 1;
    }
}

int main()
{
    int arr[] = { 3,8,0,3,0,2,7,0,7,6,4,9,9,1,7,6,6,1,6 };
    int k = 670;
    int resize = 0;
    int* p = &resize;
    addToArrayForm(arr, sizeof(arr) / sizeof(arr[0]), k, p);
}