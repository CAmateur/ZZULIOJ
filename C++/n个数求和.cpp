#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int TIMES, temp, result = 0;
	vector<int> num;

	cin >> TIMES;
	for (int i = 0; i < TIMES; i++)
	{
		cin >> temp;
		num.push_back(temp);
	}

	for (vector<int>::iterator itr = num.begin(); itr != num.end(); ++itr)
		result += *itr;
	cout << result;



	return 0;
}