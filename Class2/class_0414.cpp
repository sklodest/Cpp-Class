#include <iostream> //c++ library
#include <stdio.h> //c library
#include<math.h>
#include "MyFirst.h"
#include "MyMath.h"
#define CRT_SECURE_NO_WARNINGS
#define Pi 3.14

using namespace std;

int Sum(int a, int b);

/*
int main()
{
	cout << "Hello" << endl;
	int c;       //���� ����
	int aa = 3;  //���� ����, �ʱ�ȭ
	int bb = 4;  //���� ����, �ʱ�ȭ
	//�Լ��� ȣ�� �� return ���� int c ���� ����
	c = Sum(aa, bb);
	cout << c << endl;

	cout << Sum(10, 5) << endl;
	cout << F::Sum(10, 5) << endl;
	cout << M::Sum(5, 4) << endl;

	���� �ѷ� r * 2 * Pi
	���� ���� r * r * Pi
	float r = 3;    //������
	float l;       //���� �ѷ�
	float s;      //���� ����

	l = r * 2 * Pi;
	s = r * r * Pi;

	cout << l << endl;
	cout << s << endl;

	printf("Hello");
	cout << endl;
	printf("Hello\n");
    printf("Hello\?");
	cout << endl;
	printf("\"Hello\"");
	cout << endl;

	//char initial = 'S';
	//printf("My Name is %c. \n", initial);
	//printf("I am %d years old.\n", 15);
	//printf("Good bye.\n");
	//printf("%d %d %d", 10, 5, 20);  // decimal
/*
	char input;
	scanf_s("%c", &input);
	printf("�̸�: %c", input);
	scanf_s("%c", &input);
	printf("����: %c\n", age);
	*/

	/*
	int age;
	char initial;
	cin >> age;
	cin >> initial;

	cout << "Hi" << endl;
	cout << "My Name is" << initial << endl;
	cout << "I am" << age << " years old" << endl;
	cout << "Good bye!";
	*/

	//return 0;


//�Լ� ����� ����
	int Sum(int m, int n)

{ 
int temp = m + n;
return temp;
}