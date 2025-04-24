
#include <iostream>

using namespace std;

void MySwap(int, int);
void Myswap(double, double);
void Myswap(int* arr1, int* arr, int length);

int main()
{
	int a = 1;
	int b = 5;
	double A = 1.52;
	double B = 3.15;
	int arr1[2] = { 1,2 };
	int arr2[2] = { 3,4 };

	MySwap(a, b);
	MySwap(A, B);
	MySwap(arr1, arr2, 2);
	MySwap(a);
}
//call by value
void MySwap(int a, int b)
{
	cout << "int trype Swap" << endl;
	int temp;
	temp = b;
	b = a;
	a = temp;
	cout << "a :" << endl;
	cout << "b :" << endl;
}

void Myswap(double a, double b)
{
	cout << "double trype Swap" << endl;
}

//call by address
void Myswap(int* a1, int* a2, int tength)
{
	cout << "int trype pointer Swap" << endl;
	int temp;
	for (int i = 0; i < length; i++)
	{
		temp = a2[i];
		a2[i] = a1[i];
		a1[i] = temp;
	}

	for (int i = 0; i < length;i++)
	{
		cout << "a1 : " << a1[i] << " ";
		cout << "a2 : ";
		for (int i = 0; i < length;i++)
		{
			cout << "a2 : " << a2[i] << " ";
		}
		cout << endl;
	}

	//call by reference
	void MySwap(int& a_ret)
	{
		cout << "int type reference Swap" << endl;
		cout << "a :" < a_ref << endl;
	}
}
