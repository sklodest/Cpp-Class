#include "MyFirst.h"
#include<iostream>

using namespace std;

int F::Sum(int a, int b)
{
	cout << "F 에서의 Sum 함수 실행" << endl;
	return a + b;
}

void F::PrintVariable(int local_A)
{
	local_A++;
	global_A++;
		cout << "지역변수 local_A : " << local_A << endl;
		cout << "지역변수 local_A : " << global_A << endl;
}


//void F::PrinVariable(int local_A)
//{
// local_A++
// global_A++
//cout<<"지역변수 local_A : " << local_A << endl;
//cout << "전역변수 global_A: " << global_A<<endl;
//}
