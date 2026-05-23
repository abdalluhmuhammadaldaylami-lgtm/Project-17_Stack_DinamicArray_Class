#pragma once
#include<iostream>
#include"clsMyDinamicArray.h";
using namespace std;

template<class T>
class clsMyQueue_DinamicArr
{
protected:
	clsMyDinamicArray<T>_myDinamicArray;

public:

	void Push(T val) {
		_myDinamicArray.InsertEnd(val);
	}

	void Print() {
		_myDinamicArray.PrintList();
	}

	short Size() {
		return _myDinamicArray.Size();
	}

	T () {
		return _myDinamicArray.GitItem(0);
	}

	T Back() {
		return _myDinamicArray.GitItem(Size() - 1);
	}

	void Pop() {
		_myDinamicArray.DeleteFristItem();
	}

	short GitItem(T item) {
		return _myDinamicArray.GitItem(item);
	}

	void Reverse() {
		_myDinamicArray.Reverse();
	}

	bool IsEmpty() {

		return _myDinamicArray.IsEmpty();
	}

	void insertAfter(T index, T val) {

		_myDinamicArray.InsertAfter(index, val);
	}

	void InsertAtFrount(T val) {

		_myDinamicArray.InsertAtBigninng(val);
	}

	void InsertAtBack(T val) {

		_myDinamicArray.InsertEnd(val);
	}

	void Clear() {

		_myDinamicArray.Clear();
	}
};

