#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include<string>
using namespace std;

class student
{
public:

	string name;
	string stu_num;

	void printStudent()
	{
		cout << "ѧ������Ϊ: " << name << endl;
		cout << "����ѧ����: " << stu_num << endl;
	}
};


int main()
{
	student a;
	a.name = "����";
	a.stu_num = "212121";
	a.printStudent();
}