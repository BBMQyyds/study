#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

//����ģ��

//class p
//{
//	//��Ҳ��Ҫ�ڴ���룬ռ�ÿռ�Ϊ����������������
//	//�����С�ķ���ͬ�ṹ��
//	char b;
//	char k;
//	int m;
//	char n;
//	int a;
//};

//int main()
//{
//	p pe;
//	std::cout << sizeof(pe);
//}

//thisָ�룬��ָ���ɱ���������

//class person
//{
//public:
//	void InitAge(int m_age)
//	{
//		//m_age = m_age;//��ʱ�β����Ա����ͬ�����¸�ֵʱ���ܸ�ֵ����Ա
//		this->m_age = m_age;//��thisָ�����������֣��ɶԳ�Ա��ֵ
//	}
//
//	//������ֵ���Ͳ�������ʱ�������������൱���´�����һ������
//	
//	//person AddAge(int m_age)
//	//{
//	//	//����thisָ��Ķ���
//	//	this->m_age += m_age;
//	//	return *this;
//	//}
//
//	//��������ʱ�����ص���thisָ��Ķ�����
//	person& AddAge(int m_age)
//	{
//		//����thisָ��Ķ���
//		this->m_age += m_age;
//		return *this;
//	}
//
//
//	int GetAge()
//	{
//		return m_age;
//	}
//
//private:
//	int m_age;
//};

//int main()
//{
//	person A1;
//	A1.InitAge(5);
//	//��ʽ����
//	A1.AddAge(10).AddAge(10).AddAge(10);
//	std::cout << A1.GetAge() << std::endl;//��addage����ֵ��������ʱ�����15��������ʱ����35
//}

//class person
//{
//	void mai()
//	{
//		
//	}
//	int a;
//	int b;
//};

int main()
{
	int size = 2;
	int* p = new int[size];
	p[0] = 1;
	p[1] = 1;
}
