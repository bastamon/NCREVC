// 0001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass(int len)
	{
		array = new int[len];
		arraySize = len;
		for (int i = 0; i < arraySize; i++)
		{
			array[i] = i + 1;
		}
	}

	~MyClass()
	{
		delete []array;
	}

	void Print() const
	{
		for (int i = 0; i < arraySize; i++)
			cout << array[i] << ' ';
		cout << endl;
	}

private:
	int *array;
	int arraySize;
};

int _tmain(int argc, _TCHAR* argv[])
{
	MyClass obj(10);
	obj.Print();
	system("pause");
	return 0;
}
