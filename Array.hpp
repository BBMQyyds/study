#pragma once
#include<iostream>
using namespace std;

template<class T>
class Array
{
public:
	//���캯��
	Array() {};
	Array(int capacity)
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		this->paddress = new T[this->m_capacity];
	}

	Array(const Array& arr)
	{
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];
		for (int i = 0; i < arr.m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	//��������
	~Array()
	{
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
		}
	}

	//����=��[]
	Array& operator=(const Array& arr)
	{
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
		}
		this->m_capacity = this->m_size = 0;

		this->paddress = new T[arr.m_capacity];
		this->m_size = arr.m_size;
		this->m_capacity = arr.m_capacity;
		for (int i = 0; i < arr.m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	T operator[](int i)
	{
		return this->paddress[i];
	}

	//��ȡ��������
	int getCapacity()
	{
		return m_capacity;
	}

	//β����βɾ
	void PushBack(T val)
	{
		if (this->m_size < this->m_capacity)
			this->paddress[m_size++] = val;
		else
			return;
	}

	void PopBack()
	{
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//��ȡ�����С
	int getSize()
	{
		return m_size;
	}

private:

	T* paddress;
	int m_size;
	int m_capacity;

};
