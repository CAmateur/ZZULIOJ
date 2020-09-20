#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
	int num;
	long result;
	cin >> num;

	for (long i = 1; i <= num; i++)
	{
		result = 1;
		for (long n = 1; n <= i; n++)
			result *= n;
		cout << setiosflags(ios::left) << setw(4) << i << setw(20) << result << endl;
	}
		return 0;
}