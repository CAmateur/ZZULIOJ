#include <iostream>
#define BASESALARY 1500.00
using namespace std;
int main()
{
	double num;
	cin >> num;
	if (num <= 10000.00)
		cout << showpoint << ((num*0.05) + BASESALARY);
	else if (num > 10000.00&&num <= 50000.00)
		cout << showpoint << ((10000.00*0.05) + ((num - 10000.00)*0.03) + BASESALARY);
	else if (num > 50000.00)
		cout << showpoint << ((10000.00*0.05) + ((50000.00 - 10000.00)*0.03) + ((num - 50000) * 0.02) + BASESALARY);
	return 0;
}