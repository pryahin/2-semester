#pragma once
#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
/*
\file
\brief ������������ ����, ����������� ��������� ������ �������
\warning ������ ��������� ����������� ������������� � ������� �����
*/
template <class T>
class Queue
{
	mutable bool isFull;
	const size_t size;
	size_t top, bottom;
	T *arr;
public:
	Queue(size_t n = 100)
		: isFull(false), size(n), top(0), bottom(0), arr(new T[size])
	{
	}
	/*
	\brief ��������� ������� �� �������
	\return bool-��������, ������������, ������ �� �������
	*/
	bool empty() const
	{
		return top == bottom && !isFull;
	}
	/*
	\brief ��������� �������� � ����� �������
	\param val ��������, ������� ����� ��������

	������� ����������� ������ ���� ������� �� ������
	*/
	void push(T val) {
		if (isFull)
			return;
		arr[bottom] = val;
		bottom = (bottom + 1) % size;
		if (top == bottom)
			isFull = true;
	}
	/*
	\brief ������� �������� �� ������ �������

	������� ����������� ������ ���� ������� �� ������. ���������� ���� ����, ��� ������� ������
	*/
	void pop() {
		if (empty())
			return;
		isFull = false;
		top = (top + 1) % size;
	}
	/*
	\brief ���������� ������ �������
	\return ��������, ����������� � ������ �������

	������� ����������� ������ ���� ������� �� ������.
	*/
	T front() const {
		if (!empty())
			return arr[top];
		else
			throw std::runtime_error("queue is empty");
	}
	~Queue() {
		delete[] arr;
	}
};


#endif // QUEUE_H_INCLUDED