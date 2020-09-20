#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
	int num[2];
	cin >> num[0] >> num[1];
	for (int i = num[0]; i <= num[1]; i++)
		cout << setiosflags(ios::right) << setw(4) << i << setw(8) << fixed << setprecision(4) << log(i) << endl;


	return 0;
}