#pragma once
#include<iostream>
using namespace std;

template<class T>
class SeqList
{
public:
	SeqList()
		:arr_(new T[1])
		, size_(0)
		, capacity_(1)
	{}
	SeqList(SeqList<T>& s)
	{
		arr_ = new T[s.Capasity()];
		for (int i = 0; i < s.Size(); ++i)
		{
			arr_[i] = s[i];
		}
		size_ = s.Size();
		capacity_ = s.Capacity();
	}
	/*�����޸ĵĽӿ�**************************************************************/
	void push_back(const T& val)
	{
		//���ݵĲ���
		if (size_ == capacity_)
		{
			size_t newcapacity = capacity_ * 2;
			Reserve(newcapacity);
		}
		arr_[size_] = val;
		++size_;
	}
	/*���������Ľӿ�**************************************************************/
	size_t Size()
	{
		return size_;
	}
	size_t Capacity()
	{
		return capacity_;
	}
	//�Զ�����
	void Reserve(size_t newcapacity)
	{
		T* newarr = new T[newcapacity];
		for (size_t i = 0; i < size_; ++i)
		{
			newarr[i] = arr_[i];
		}
		delete[] arr_;
		arr_ = newarr;
		capacity_ = newcapacity;
	}
	/*���ڲ��������صĽӿ�********************************************************************************/
	T& operator[](size_t pos)
	{
		return arr_[pos];
	}
	~SeqList()
	{
		delete[] arr_;
		arr_ = nullptr;
	}
private:
	T* arr_;
	size_t size_;
	size_t capacity_;
};

template<class T>
void Print(SeqList<T>& arr, size_t size)
{
	cout << "[]������" << endl;
	for (size_t i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	//cout << endl;
	//cout << "��Χѭ��" << endl;
	//for (auto s : arr)
	//{
	//	cout << *s << " ";
	//}
	cout << endl;
}