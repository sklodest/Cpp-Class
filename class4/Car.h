#pragma once
#include <iostream>

using namespace std;
class Car
{
//���ٽ����� private, protected, public
public:
	//�ɹ����� ¡��/�ʱ�ȭ
	string name = "SONATA";
	
	const int max = 4; 
	//���� �ɹ����� �ʱ�ȭx
	static int countCar;

protected:
		float gas = 100;

private:
       float weight = 1500;
public:
	//�ɹ��Լ� ����, method
	Car();  //������
	Car(string i_name)
	{
		name = i_name;
		cout << name << "...������..." << endl;
	}
	//Car(int max_t)
	Car(int max_t) : max(max_t)
	{
		cout << "max : " << max << endl;
	}
	Car(float gas, int max);
	Car(float i_weight, float i_gas, int i_max) :weight(i_weight), gas(i_gas), max(i_max)
	{
		/*
		this->weight = weight;
		this->gas = gas;
		this->max = max;
		*/
		//weight = i_weight;
		//gas = i_gas;
		//max = i_max;
		
		cout << weight << " : " << i_weight << endl;
		cout << "�ʱ�ȭ ������ ȣ��" << endl;
	}
	Car(string i_name, float i_weight, float i_gas, int i_max) : name(i_name), weight(i_weight), gas(i_gas), max(i_max)
	{
		cout << name << " : " << i_name << endl;
		cout << "�ŰԺ��� 4 �ʱ�ȭ ������ ȣ��" << endl;
	}
	~Car(); //�Ҹ���
	virtual void Bell() {};
	void Break();
	void Run();
	int GetMax();
	void GasFull(int);

	void setGas(float i_gas)
	{
		gas = i_gas;
		cout << gas << endl;
	}

	float GetWeight()
	{
		return weight;
	}

};

