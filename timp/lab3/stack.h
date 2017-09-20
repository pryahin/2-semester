#pragma once
#ifndef STACK_INCLUDED
#define STACK_INCLUDED
/*
\file
\brief ������������ ����, ����������� ��������� ������ ����
\warning ������ ��������� ����������� ������������� � ������� �����
*/
template <class T>
class Stack
{
	const size_t size;
	size_t cur_size;
	T *arr;
public:
	Stack(size_t n = 100)
		: size(n), cur_size(0), arr(new T[size])
	{
	}
	/*
	\brief ��������� ���� �� �������
	\return bool-��������, ������������, ������ �� ����
	*/
	bool empty() const
	{
		return cur_size == 0;
	}
	/*
	\brief ��������� ���� �� ������������
	\return bool-��������, ������������, ������ �� ����
	*/
	bool full() const
	{
		return cur_size == size;
	}
	/*
	\brief ��������� �������� �� ������� �����
	\param val ��������, ������� ����� ��������
	������� ����������� ������ ���� ���� �� ������. ����� ������������� ������� ������ �����
	*/
	void push(T val)
	{
		if (!full())
			arr[cur_size++] = val;
	}
	/*
	\brief ������� �������� �� ������� �����
	������� ����������� ������ ���� ���� �� ������. ����� ����������� ������� ������ �����
	*/
	void pop()
	{
		if (!empty())
			arr[--cur_size] = 0;
	}
	/*
	\brief ���������� ������� �����
	\return ��������, ����������� � ������� �����
	������� ����������� ������ ���� ���� �� ������.
	*/
	T top() const
	{
		if (!empty())
			return arr[cur_size - 1];
		else
			throw std::runtime_error("stack is empty");
	}
	~Stack()
	{
		delete[] arr;
	}
};


#endif  //STACK_INCLUDED