#include <iostream>
//int main()


//	int mylnt = -10;
//	long myLong = -41251;
//	unsigned int myUint = 10;
//	unsigned myUlong = 41252;
//
//	//std::cout << mylnt << std::endl;
//	//std::cout << myLong << std::endl;
//	//std::cout << myUint << std::endl;
//	//std::cout << myUlong << std::endl;*/
//
//	//�Ǽ��� Ÿ��
//	float myFloat = 10.255;
//	myFloat = 150.233233233;
//	//std::cout << myFloat << std::endl;
//
//	//float A = 1.2;
//	//float B = 1.2;*/
//	//std::cout << (A + B) << std::endl;
//	//std::cout << (A + B == 2.3) << std::endl;     //0�� false (����)
//	//std::cout << (A == B) << std::endl;           //1�� true (��)
//
//	//������ Ÿ��
//	char myChar = 'A';
//	char myChar2 = 50;
//	char myChar3 = 66;
//	//std::cout << myChar << std::endl;
//	//std::cout << myChar2 << std::endl;
//	//std::cout << myChar3 << std::endl;
//	
//
//	//bool�� Ÿ��
//	bool isTrue = 0;
//	//std::cout << isTrue << std::endl;
//	isTrue = true;
//	//std::cout << isTrue << std::endl;
//	isTrue = 1;
//	//std::cout << isTrue << std::endl;
//	isTrue = false;
//	//std::cout << isTrue << std::endl;
//
//	//��� Ÿ��
//	const int limit = 20;
//	//limit = 10;
//	//std::cout << limit << std::endl;
//
//	//������ ����ȯ
//	int AA = 10.1355;
//	float BB = 10;
//	char CC = 97;
//	int DD = 'a';
//
//	//����� ����ȯ
//	int aa = (int)10.1355;
//	float bb = (float)10;
//	char cc = (char)97;
//	int dd = (int)'a';
//
//	float aaa = (float)aa;
//	float bbb = (float)bb;
//
//
//	//std::cout << AA << " : " << aa << ":"<<aaa<<std::endl;
//	//std::cout << BB << " : " << bb << ":"<<bbb<< std::endl;
//	//std::cout << CC << " : " << cc << std::endl;
//	//std::cout << DD << " : " << dd << std::endl;
//
//	//������
//	//1. ���������(arithemtic operator)
//	int result = 0;
//	result = 5 + 5 * 5; // * �켱����
//	//std::cout << result << std::endl;
//	result = (5 + 5) * 5; // () �켱����
//	//std::cout << result << std::endl;
//	result = 5 / 5;       // ��
//	//std::cout << result << std::endl;
//	result = 5*0;          //���ϱ� ����
//	//std::cout << result << std::endl;
//	result = 5 % 3;       // �������� %-������������
//	//std::cout << result << std::endl;
//	//result = 5 / 0;       // 0 ������, 0 ������ ���� �Ұ� x
//	//result = 5% 0;
//	//std::cout << result << std::endl;
//
//	float result2 = 0.0;
//
//
//	//result2 = 10 / 3;   //������(�ڵ�) ����ȯ
//	//result2 = 10.0 / 3.0;;;
//	result2 = (float)10/3;  //����� ����ȯ
//	//std::cout << result2 << std::endl;
//
//	//2. ���Կ�����(assignment operator)
//	int result3 = 5;
//	//result3 = result3 + 2;
//	//result3 += 2;
//	//result3 = result3 - 2;
//	//result3 -= 2;
//	//result3 *= 2;
//	//result3 /= 2;
//	result3 %= 2;
//	//std::cout << result3 << std::endl;
//
//	
//	//3. �񱳿�����(cmparison operator)
//	int a = 10;
//	int b = 3;
//	int c = 5;
//
//	//std::cout << (a == b) << std::endl; //0
//	//std::cout << (a != b) << std::endl; //1
//	//std::cout << (a > b) << std::endl;  //1
//	//std::cout << (a >= b) << std::endl; //1
//	//std::cout << (a < b) << std::endl;  //0
//	//std::cout << (a <= b) << std::endl; //0
//
//	//4. ��������(logical operator)
//	//std::cout << "AND   " << ((a >= b) && (a >= c)) << std::endl;  //1
//	//std::cout << "OR   " << ((a >= b) || (a >= c)) << std::endl;  //1
//	//std::cout << "NOT   " << !(a >= b) << std::endl;  //0
//
//
//	//5. ����������(increment and decrement operator)
//	int x = 5;
//	int y = (x++) + 5;    //��������
//	//int y = (++x) + 5;      //��������
//	//std::cout << y << std::endl;
//
//	//6. ��Ÿ ������
//	//��ǥ(,) ������
//	//int a = 10;
//	//int b = 5;
//	int xa = 10, xb = 5;
//	//int c;
//	//int d;
//	int xc, xd;
//	xc = xa + xb, xd = xa - xb;
//	//std::cout << xc << std::endl;
//	//std::cout << xd << std::endl;
//	
//	//���׿�����
//	int i = 10, j = 5;
//	int greater;
//	//greater = (i > j) ? i : j;
//	greater = (i < j) ? i : j;
//	//std::cout << greater << std::endl;
//	
//	//sizeof();
//	int m;
//	double n;
//	//std::cout << sizeof(m) << std::endl;
//	//std::cout << sizeof(int) << std::endl;
//	//std::cout << sizeof(n) << std::endl;
//	//std::cout << sizeof(double) << std::endl;
//	
//
//}