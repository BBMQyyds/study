#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//��Ԫʵ��
//ȫ�ֺ�������Ԫ�ࡢ��Ա����

//class house
//{
//	friend void goodfriend();
//public:
//	house()
//	{
//		sittingroom = "����";
//		bedroom = "����";
//	}
//	string sittingroom;
//private:
//	string bedroom;
//};


//void goodfriend()
//{
//	house house1;
//	cout << "����" << house1.sittingroom << endl;
//	cout << "����" << house1.bedroom << endl;
//}

//int main()
//{
//	goodfriend();
//	char arr[] = "www\0www";
//	printf("%d", sizeof(arr));
//	printf("\a\a\a\a");
//}

//���������

//1���Ӻ����������


//class person
//{
//public:
//	person operator+ (person& p)
//	{
//		person tmp;
//		tmp.m_age = this->m_age + p.m_age;
//		return tmp;
//	}
//	int GetAge()
//	{
//		return m_age;
//	}
//private:
//	int m_age = 10;
//};

//class person
//{
//public:
//	friend person operator+(const person& p1, const person& p2);
//	int GetAge()
//	{
//		return m_age;
//	}
//private:
//	int m_age = 10;
//};


//person operator+(const person& p1, const person& p2)
//{
//	person tmp;
//	tmp.m_age = p1.m_age + p2.m_age;
//	return tmp;
//}

//void test1()
//{
//	person p1;
//	person p2;
//	person p3 = p1 + p2;
//	//ʵ��Ϊ
//	//person p3 = p1.operator+(p2);���ǳ�Ա����ʵ��
//	//ȫ�ֺ���ʵ��ʱ��ʵ��Ϊ
//	//person p3 = operator+(p1,p2);
//	cout << p3.GetAge() << endl;//���20
//}

//2���������������(��ӡʱֻ����ȫ�ֺ���)

//class person
//{
//public:
//	int m_age = 10;
//};

//�˴���Ҫ����ֵ����������

//ostream& operator<<(ostream& cout,person& p)
//{
//	cout << p.m_age;
//	return cout;
//}

//void test2()
//{
//	person p;
//	cout << p<<" hello world"<<endl;
//}

//3������������������أ��º�����


class My_Add
{
public:
	int operator()(int x, int y)
	{
		return x + y;
	}
};

void test3()
{
	//����������÷º���
	cout<<My_Add()(100, 200)<<endl;
}

int main()
{
	//test1();
	//test2();
	test3();
}