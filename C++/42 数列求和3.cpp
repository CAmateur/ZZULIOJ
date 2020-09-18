#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	double result = 0.0;
	cin >> num;
	for (int i = 1; i <= num; i++)
		if (i % 2 == 0)
			result -= ((double)i / (1.0 + ((double)i - 1.0) * 2.0));
		else result += ((double)i / (1.0 + ((double)i - 1.0) * 2.0));


	cout << fixed << setprecision(3) << result;


	return 0;
}