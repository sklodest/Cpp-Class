#pragma once
#include"Car.h"

class Sedan : public Car
{
public:
	int seat = 0;

public:
	Sedan()
	{
		cout << "Sedan�� ����Ʈ ������ ȣ��" << endl;
	}
	Sedan(int i_weight,int i_seat)
	{
		//weight = i_weight;
		seat = i_seat;
		cout << "Sedan�� ������ �Ű�����2 ȣ��" << endl;
	}
	~Sedan()
	{
		cout << "sedan�� �Ҹ��� ȣ��" << endl;
	}
	virtual void Bell()
	{
		cout << "Sedan Bell ȣ��" << endl;
 	}
	void SedanFunction()
	{
		cout << "Sedan�� SedanFunction ȣ��" << endl;
	}
};

