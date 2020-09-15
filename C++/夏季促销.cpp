#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double num;
	cin >> num;
	if (num < 500)
		cout << fixed << setprecision(2) << num;
	else if (num >= 500 && num < 1000)
		cout << fixed << setprecision(2) << num * 0.95;
	else if (num >= 1000 && num < 3000)
		cout << fixed << setprecision(2) << num * 0.9;
	else if (num >= 3000 && num < 5000)
		cout << fixed << setprecision(2) << num * 0.85;
	else if (num >= 5000)
		cout << fixed << setprecision(2) << num * 0.8;
	return 0;
}