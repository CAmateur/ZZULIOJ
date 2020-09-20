#include<iostream>
using namespace std;

int main()
{
	int num[2], result[2] = {0,0};

	cin >> num[0] >> num[1];
	for (int i = num[0]; i <= num[1]; i++)
	{
		if (i % 2 != 0)
			result[0] += i * i*i;
		else result[1] += i * i;

	}
	cout << result[1] << " " << result[0];
	return 0;
}