#include "Car.h"

Car::Car()
{
	//constructor
	// ��ü�� ������ �� ȣ�����ִ� �Լ�
	//�����ڿ����� �ʱ�ȭ ����
	//��ȯ�ڷ��� ����
	cout << "Car default Constructor ȣ��" << endl;

	++countCar;      
}

Car::Car(float g, int m)
{
	cout << "gas" << gas << endl;
	cout << "max" << max << endl;
	gas = g;
	//max = m;
	cout << "gas" << gas << endl;
	cout << "max" << max << endl;
	cout << "constructor �Ű����� float, int ȣ��" << endl;
}

Car::~Car()
{
	//�Ҹ���
	//��ü�� �Ҹ�� �� ȣ�����ִ� �Լ�
	//Overloading x
	//�ɹ������� �����Ҵ�� �޸� ����
	cout << name << "destructor ȣ��" << endl;
}



void Car::Break()
{
	cout << "Car class Break �Լ� ȣ��" << endl;
}

void Car::Run()
{
	cout << "Car class Run �Լ� ȣ��" << endl;
}

int Car::GetMax()
{
	return 0;
}

void Car::GasFull(int)
{
	cout << "Car class GasFull �Լ� ȣ��" << endl;
}

