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

class cube
{

public:
	void setSideLenth()
	{
		cin >> Side_lenth;
	}

	int getArea()
	{
		return Side_lenth * Side_lenth;
	}

	int getVolume()
	{
		return Side_lenth * Side_lenth * Side_lenth;
	}

private:
	int Side_lenth;
	int area;
	int volume;
};

class point
{
public:
	void setx()
	{
		cin >> p_x;
	}
	void sety()
	{
		cin >> p_y;
	}
	int getx()
	{
		return p_x;
	}
	int gety()
	{
		return p_y;
	}
private:
	int p_x;
	int p_y;
};

class circle
{
public:
	void setR()
	{
		cin >> R;
	}

	int getR()
	{
		return R;
	}

	void setCenPoint(point O)
	{
		CenPoint = O;
	}
	
	point getCenPoint()
	{
		return CenPoint;
	}
private:
	point CenPoint;
	int R;
};

bool isinc(circle& a, point& x)
{
	int distance =
		(x.getx() - a.getCenPoint().getx()) * (x.getx() - a.getCenPoint().getx())
		+ (x.gety() - a.getCenPoint().gety()) * ((x.gety() - a.getCenPoint().gety()));
	int r = a.getR();
	if (distance == r * r)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	circle A;
	point O;
	O.setx();
	O.sety();
	A.setCenPoint(O);
	A.setR();
	point X;
	X.setx();
	X.sety();
	bool ret = isinc(A, X);
	if (ret == true)
	{
		cout << "��" << endl;
	}
	else
		cout << "����" << endl;
	/*cube a;
	a.setSideLenth();
	cout<<"�����"<<a.getArea() << endl;
	cout<<"�����"<<a.getVolume();*/
	/*student a;
	a.name = "����";
	a.stu_num = "212121";
	a.printStudent();*/
}