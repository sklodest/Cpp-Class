#include "MyFirst.h"
#include<iostream>

using namespace std;

int F::Sum(int a, int b)
{
	cout << "F ������ Sum �Լ� ����" << endl;
	return a + b;
}

void F::PrintVariable(int local_A)
{
	local_A++;
	global_A++;
		cout << "�������� local_A : " << local_A << endl;
		cout << "�������� local_A : " << global_A << endl;
}


//void F::PrinVariable(int local_A)
//{
// local_A++
// global_A++
//cout<<"�������� local_A : " << local_A << endl;
//cout << "�������� global_A: " << global_A<<endl;
//}
