// 003.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using std::ostream;
using std::cout;
using std::endl;


class MyVector
{
	double x;
	double y;
public:
	MyVector(double i = 0.0, double j = 0.0);
	MyVector operator + (MyVector j);
	friend MyVector operator - (MyVector i, MyVector j);
	friend ostream& operator<<(ostream& os, MyVector v);
};

MyVector:: MyVector(double i, double j) : x(i), y(j){};
MyVector MyVector::operator+(MyVector j)
{
	return MyVector(x + j.x, y + j.y);
}

ostream& operator<<(ostream& os, MyVector v)
{
	os << '(' << v.x << ',' << v.y << ')';
	return os;
}



int _tmain(int argc, _TCHAR* argv[])
{
	MyVector v1(2, 3), v2(4, 5), v3;
	v3 = v1 + v2;
	cout << v3 << endl;
	system("pause");
	return 0;
}

