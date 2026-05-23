#pragma once
#include<iostream>
#include"clsMyQueue_DinamicArr.h"
using namespace std;

template<class T>
class clsMyStackArr:public clsMyQueue_DinamicArr<T>
{
public:

	void Push(T val) {

		clsMyQueue_DinamicArr<T>::_myDinamicArray.InsertAtBigninng(val);
	}

	T Top() {
		return clsMyQueue_DinamicArr<T>::Frount();
	}

	T Butoom() {
		return clsMyQueue_DinamicArr<T>::Back();
	}
};

