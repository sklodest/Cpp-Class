#include <iostream>

using namespace std;

int main()
{
	//count<<"Hello"<< endl;
	//while��
	//	int i = 1;
	//	while(i<5)
	//{
	//		count << "while ����" << i << "��° �ݺ� ������..." << endl;
	//		
	//		i++;     //���ѷ��� x ���Ǻ��汸�� (���ѷ���Ż��) ctrl + C)
	//}
	//       
	//}
	// count << "while ���� ����� �� ���� i�� ��" << i << "..." << endl;

		//do while��
	int i = 1;
	//do
	{
		cout << "do while ����" << i << "��° �ݺ� ������..." << endl;
		i++;
	} while (i < 5);
	//while (i>5);
	cout << "do while ���� ����� �� ���� i�� ��" << i << "..." << endl;

	/*int i = 1;
	for (i = 1;i < 10;i++)
	{
		cout << "for����" << i << "��° �ݺ� ������..." << endl;
	}
	cout << "for���� ����� �� ���� i�� ��" << i << "..." << endl;
}*/

//int num = 0;
//while (1)
//{
//	num++;
//	cout << "num���� : " << num << endl;
//	if (num >= 5)
//	{
//		break;
//	}
//	cout << "while Ż��..." << endl;
//
//	int exceptNum = 2;
//	//int i = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		//2�� ��� ¦��
//		if (i % exceptNum == 0)
//		{
//			continue;
//		}
//		cout << i << "\n";
//	}


//int i = 1;
////for (;;) //���ѷ���
//for (i=1; i<=10; i++)
//{
//	cout << "i��:" << i << endl;
//}
//cout << i << endl;

	/*
int sum = 0;
for (int i = 1; i <= 10; i++)
{
	//sum = sum + i;
	1 = 0 + 1;
	3 = 1 + 2;
	6 = 3 + 3;
	10 = 6 + 4;
	15 = 10 + 5;
	21 = 15 + 6;
	28 = 21 + 7;
	36 = 28 + 8;
	45 = 36 + 9;
	55 = 45 + 10;

	sum += i;
}
cout << sum << endl;
*/
//bool isTrue = false;
/*bool isTrue = true;
do
{
	cout << "������..." << endl;
} while (isTrue);*/

/*
char ch;
while (1)
{
	cout << "k�� �Է��ϸ� Ż�� : ";
	cin >> ch;

	if (ch == 'k')
	{
		cout << "���ѷ��� Ż�� �õ�" << endl;
		break;
	}
}
cout << "���ѷ��� Ż�� ����" << endl;
*/
	/*
	char ch1;
	char ch2;

	while (1)
	{
		while(1)
		{
		cout << "a�� �Է��ϸ� Loop1 Ż�� : ";
		cin >> ch1;
		if (ch1 == 'a')
		{
			break;
		}
	}
	cout << "���� 1 Ż�� ����" << endl;

	cout << "b�� �Է��ϸ� Loop2 Ż�� : ";
	cin >> ch2;
	if (ch2 == 'b')
	{
		break;
	}
}
  cout << "���� 2 Ż�� ����" << endl;
  */

/*
int num = 0;
while (num <= 20)
{
	num++;
	if ((num % 5) == 0)
	{
		continue;
	}
	cout << num << endl;
}
*/

//������1
/*
for (int i = 2; i < 10; i++)
 {
	for (int j = 1; j < 10; j++)
	{
		cout << i << "x" << j << " = " << i * j << endl;
	}
	cout << endl;
 }*/

//������2
/*
for (int i = 1; i < 10; i++)
{
	for (int j = 2; j < 10; j++)
	{
		cout << j << "x" << i << " = " << j * i << "\t";
	}
	cout << endl;
}
*/

int num;
cout << "�����Է� : ";
cin >> num;

for (int i = 1; i <= num; i++)
{
	for (int j = 1; j <= i; j++)
	{
		cout << "*";
	}
	cout << endl;
}

for (int i = num; i >= 1; i--)
{
	for (int j = 1; j <= i; j++)
	{
		cout << "*";
	}
	cout << endl;

	for (int i = 1; i <= num; i++)
	{
		cout << " ";
	}
	for (int j = 1; j<= num * 3 - i; j++)
	{
		cout << " *";

	}
	cout << endl;

}