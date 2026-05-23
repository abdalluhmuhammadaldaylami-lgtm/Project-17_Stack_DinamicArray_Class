#pragma once
#include<iostream>
using namespace std;

template<class T>
class clsMyDinamicArray
{
private:

	int _Size = 0;

public:
	T* _Array;

	clsMyDinamicArray(int size = 0) {
		if (size < 0)
		{
			_Size = 0;
		}
		_Size = size;
		_Array = new T[_Size];
	};

	~clsMyDinamicArray()
	{
		delete[] _Array;
	}

	void SetItem(T index, T value) {
		if (index >= _Size || index < 0)
		{
			return;
		}
		_Array[index] = value;
	}

	void PrintList() {
		for (int i = 0; i < _Size; i++)
		{
			cout << _Array[i] << " ";

		}
	}

	bool IsEmpty() {
		return (_Size == 0 ? true : false);
	}

	T Size() {
		return _Size;
	}

	void Resize(int size) {
		if (size < 0)
			size = 0;

		T* tempArray = new T[size];

		for (int i = 0; i < size; i++)
		{
			tempArray[i] = _Array[i];
		}

		_Size = size;
		delete[] _Array;

		_Array = tempArray;
	}

	int GitItem(int index)
	{
		return _Array[index];
	}

	void Reverse() {

		T* tempArray = new T[_Size];

		for (int i = 0; i < _Size; i++)
		{
			tempArray[i] = _Array[_Size - i - 1];
		}
		delete[] _Array;
		_Array = tempArray;
	}

	void Clear() {
		_Size = 0;

		T* temp = new T[_Size];
		delete[] _Array;
		_Array = temp;
	}

	void DeleteItemAt(T index) {
		if (index < 0 || index >= _Size)
		{
			return;
		}
		int count = 0;
		T* temp = new T[_Size - 1];
		for (int i = 0; i < _Size; i++)
		{
			if (i != index) {
				temp[count] = _Array[i];
				count++;
			}
			continue;
		}
		delete[] _Array;
		_Array = temp;
		_Size--;
	}

	void DeleteFristItem() {
		DeleteItemAt(0);
	}

	void DeleteLasttItem() {
		DeleteItemAt(_Size - 1);
	}

	int Find(T value) {
		for (int i = 0; i < _Size; i++)
		{
			if (_Array[i] == value) {
				return i;
			}
		}
		return -1;
	}

	void DeleteItem(int value) {
		int v = Find(value);

		if (v != -1) {
			DeleteItemAt(v);
		}
		else
		{
			return;
		}
	}

	void InsertAt(int index, T value) {
		if (index < 0 || index>_Size)
		{
			return;
		}
		_Size++;
		T* temp = new T[_Size];
		for (int i = 0; i < index; i++)
		{
			temp[i] = _Array[i];
		}
		temp[index] = value;

		for (int i = index + 1; i < _Size; i++)
		{
			temp[i] = _Array[i - 1];
		}
		delete[] _Array;
		_Array = temp;
	}

	void InsertAtBigninng(T value)
	{
		InsertAt(0, value);
	}

	void InsertBefore(int index, T value)
	{
		InsertAt(index - 1, value);
	}

	void InsertAfter(int index, T value)
	{
		InsertAt(index + 1, value);
	}

	void InsertEnd(T value)
	{
		InsertAt(_Size, value);
	}
};
