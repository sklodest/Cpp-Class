#pragma once
#include "Car.h"
class SUV : public Car
{
public:
	int newdata = 5;

public:
	void changeAttr()
	{
		gas = 10;
		//weight = 2000;

		cout << gas << endl;
		//cout << weight<<endl;

	}
	void Break()
	{
		__super::Break();
		cout << "SUV class Break 함수 호출" << endl;
	}
	virtual void Bell()
	{
		cout << "SUV 벨을 눌러라 호출" << endl;
	}
};

