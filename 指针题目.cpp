#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int Fibonacci(int n)
//{
//    //int a = 1;
//    //int b = 1;
//    //// write code here
//    //if (n > 0 && n <= 2)
//    //    return 1;
//    //else
//    //{
//    //    int j = 0;
//    //    for (; j < n - 2; j++)
//    //    {
//    //        int c = a + b;
//    //        a = b;
//    //        b = c;
//    //        if (j == n - 3)
//    //            return c;
//    //    }
//    //}
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a = Fibonacci(n);
//    printf("%d", a);
//}

//ָ�����/������Ŀ

//1.������ʽ���

//int main()
//{
//	/*char arr[] = { "abcde" };
//	printf("%d\n", sizeof(arr));             
//	printf("%d\n", sizeof(&arr));            
//	printf("%d\n", strlen(arr));             
//	printf("%d\n", strlen(&arr[0]));*/       
//
//	//��ά������ָ�루�Ѷ�ƫ�ߣ�
//
//	int arr[3][4] = { 0 };
//	//���˶�ά������Ϊ������Ԫ�ص�һά���飬ÿ���������ĸ�����Ԫ��
//
//	//printf("%d", sizeof(arr[0]));               16
//    //arr[0]�ǵ�һ���������Ԫ�صĵ�ַ
//    //��������������sizeof()�ڣ����������������
//
//	//printf("%d", sizeof(arr[0] + 1));           4or8
//	//arr[0]���ǵ�һ��������Ԫ�ص�ַ
//    //������������,arr[0]+1����Ĳ��ǵڶ���������Ԫ�ص�ַ�����ǵ�һ�еڶ���Ԫ�ص�ַ
//
//	//printf("%d", sizeof(arr + 1));
//	//arr�Ƕ�ά�������������û��sizeof��arr����Ҳû��&arr������arr����Ԫ�ص�ַ
//	//��arr�ǵ�һ�У���Ԫ�أ��ĵ�ַ,��arr+1�ǵڶ��еĵ�ַ
//
//	//printf("%d", sizeof(*(arr + 1)));                 
//	//�ڶ��е������С����16
//
//	//printf("%d", sizeof(&arr[0] + 1));
//	//�ڶ��еĵ�ַ����������ȼ���&����+������ȡ��ַ
//
//	//printf("%d", sizeof(*arr));
//	//arr�����ά��������Ԫ�صĵ�ַ
//
//	//printf("%d", sizeof(*(arr[3]));
//	//�����ϣ�arr[3]�����ڣ�����
//	//sizeof�ڲ���������ʵ���㣬���������������ͼ����С
//	//ֵΪ16
//}


//2.������

//int main()
//{
//	//int arr[3][2] = { (0,1),(2,3),(4,5) };
//	//int* p = arr[0];
//	//printf("%d", arr[0]);
//}