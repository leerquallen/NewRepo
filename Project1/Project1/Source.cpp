#include <iostream>
//#include <iomanip>
//#include  <conio.h>
using namespace std;

int NotMain(int, int);

void main()
{
	int num1, num2;
	cout << "num 1: ";
	cin >> num1;
	cout << "num 2: ";
	cin >> num2;

	cout << "\nsum = " << NotMain(num1, num2) << endl;

	system("pause");
}


//bla bla lbal bal bal bablabla
int NotMain(int num1, int num2)
{
	int sum = 0;
	if (num1 < num2)
	{
		for (int i = num1 + 1; i < num2; i++)
		{
			cout << sum << " + " << i << " = ";
			sum += i;
			cout << sum << endl;
		}
	}
	if (num1 > num2)
	{
		for (int i = num2 + 1; i < num1; i++)
		{
			cout << sum << " + " << i << " = ";
			sum += i;
			cout << sum << endl;
		}
	}
	return sum;

	//nnnnnnnnnnnnnnn
	//mmmmmmmmmmmm
}