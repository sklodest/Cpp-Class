#include "MyFunction.h"
#include<iostream>

using namespace std;

void Checklncrement()
{
	static int static_B = 0;
	cout << "���� ���� ����" << ++static_B << endl;
}
