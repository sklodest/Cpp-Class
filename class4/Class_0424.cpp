#include "Car.h"
#include "SUV.h"
#include "Sedan.h"

//객체생성 x 초기화
int Car::countCar = 0;

int main()
{
	//Car myCar;
	//SUV mySUV;
	//up casting
	//Car* ptr_myCar = &mySUV;
	//myCar.Break();
	//mySUV.Break();
	//ptr_myCar->Break(); //Car Break() 함수호출

	/*
	Car* ptr_myCar1 = new Car;
	Car* ptr_myCar2 = new SUV;
	ptr_myCar1->Break();

	//virtual 가상함수 사용한 오버라이딩
	ptr_myCar2->Break();
	*/

	//SUV mySUV;
	//mySUV . Break();
	//mySUV . Bell();
	//Car myCar;
	//클래스 타입 포인터 배열
	//Car* CarList[3];
	//CarList[0] = new SUV;
	//CarList[1] = new Sedan;
	//CarList[2] = new SUV;

	//for (int i = 0; i < 3; i++)
	//{
		//CarList[i]->Bell();
	//}
	//for (int i = 0; i < 3; i++)
	//{
		//delete CarList[i];   //동적할당 해제
	//}

	/*
	Car car1;
	Car car2;
	SUV SUV1;
	SUV SUV2;
	Sedan* ptr_sedan1 = new Sedan;
	Sedan* ptr_sedan2 = new Sedan;

	cout << Car::countCar << endl;
	cout << car1 .countCar << endl;
	*/

	Car car1;
	//car1 .max = 10; //불가
	Car(10);
	cout << car1.max << endl;

 }