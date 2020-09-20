#include<iostream>
using namespace std;
int main()
{
	int num,result1,result2=0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		result1 = 1;
		for (int n = 1; n <= i; n++)
			result1 *= n;
		result2 += result1;
	}
	cout << result2;
	return 0;
}