#include <iostream>
#include "Car.h"

using namespace std;

//Car GlobalCar("Global");

class Animal
{
public:
	string name;

public:
	Animal()
	{

	}
	Animal(string name)
	{
		cout << name << "����..." << endl;
	}
	void Run()
	{
		cout << name << "...�޸���..." << endl;
	}
};


/*int main()
{
	Car LocalCar("����");
	Car* MyCar_ptr = new Car("�����Ҵ�");
	delete MyCar_ptr;

	//Animal animal; //��ü ����
	//animal.name = "���̾�";  //�ɹ����� �� ����  �ʵ�/�Ӽ�
	//animal.Run(); //�ɹ��Լ� ȣ��  �޽õ�

	//tiger �ν��Ͻ� ����
	//Animal* tiger = new Animal("ȣ����"); 
	//delete tiger; //�޸𸮴���

	//Car MyCar; //��ü����
	//MyCar.Break();
	//MyCar.Run();
	//MyCar.GasFull(5);
	//Car MyCar(1000, 80, 2);
	//Car Mycar(100);



	//Car YouCar = Car(10, 5);

	//Car car;
	//	Car* ptr_car = &car;

		//cout << ptr_car->name << endl;
		//cout << ptr_car->gas << endl;
		//ptr_car->Break();
	//	ptr_car->GasFull(20);

		//cout << (*ptr_car).name << endl;

		//Car car;
		//car.setGas(440);
	//	cout << car.GetWeight() << endl;

	//Car MyCar("BMW", 1800, 120, 4);
	// Car YourCar(); ��ü x �Լ�O
	// Car YourCar = Car();
	//Car YourCar = Car();
	//Car YourCar;
	//Car* YourCar = new Car(); //�����Ҵ�
	//delete YourCar;
	
}*/
