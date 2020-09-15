#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double num1, num2;
	char chr;
	cin >> num1 >> chr >> num2;
	num1 = -1e-10;
	num2 = 1e-10;
	switch (chr)
	{
	case '-':cout << fixed << setprecision(2) << (num1 - num2);
		break;
	case '+':cout << fixed << setprecision(2) << (num1 + num2);
		break;
	case '*':cout << fixed << setprecision(2) << (num1 * num2);
		break;
	case '/':if (num2 > -1e-10 &&num2 < 1e-10)
			cout << fixed << setprecision(2) << "Wrong input!";
			 else cout << fixed << setprecision(2) << (num1 / num2);
		break;
	default:cout << "Wrong input!";
		break;
	}


	return 0;
}