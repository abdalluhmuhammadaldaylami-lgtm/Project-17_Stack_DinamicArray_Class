#include<iostream>
#include"clsMyStackArr.h"
using namespace std;

int main() {

	clsMyStackArr<int>MyStackArr;

	MyStackArr.Push(10);
	MyStackArr.Push(20);
	MyStackArr.Push(30);
	MyStackArr.Push(40);
	MyStackArr.Push(50);

	cout << "the Print List:\n";
	MyStackArr.Print();

	cout << "\nStack size :" << MyStackArr.Size() << endl;
	cout << "Stack frount :" << MyStackArr.Top() << endl;
	cout << "Stack Back :" << MyStackArr.Butoom() << endl;

	MyStackArr.Pop();
	cout << "\nStack After Pop :\n";
	MyStackArr.Print();

	cout << "\nItem (2) :" << MyStackArr.GitItem(2) << endl;

	MyStackArr.Reverse();
	cout << "\nQueue After Revers :\n";
	MyStackArr.Print();

	MyStackArr.insertAfter(2, 800);
	cout << "\nStack After insert Afert :\n";
	MyStackArr.Print();

	MyStackArr.InsertAtFrount(1000);
	cout << "\nStack After insert at frount :\n";
	MyStackArr.Print();

	MyStackArr.InsertAtBack(2000);
	cout << "\nStack After insert at back :\n";
	MyStackArr.Print();

	MyStackArr.Clear();
	cout << "\nStack After Clear :\n";
	MyStackArr.Print();

}