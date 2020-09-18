#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int num = 0, temp = 0, nopass = 0;
	vector<int> vec;
	vector<int>::iterator it = vec.begin();
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	for (int it : vec)
		if (it < 60)
			nopass++;
	cout << fixed << setprecision(2) << (double)nopass / (double)num;
	return 0;
}