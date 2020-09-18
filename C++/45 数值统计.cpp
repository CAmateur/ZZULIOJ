#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num = 0, temp = 0;
	vector<int> vec;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	cout << count_if(vec.begin(), vec.end(), [](int x)->bool {if (x < 0)return 1; else return 0; }) << " ";
	cout << count_if(vec.begin(), vec.end(), [](int x)->bool {if (x == 0)return 1; else return 0; }) << " ";
	cout << count_if(vec.begin(), vec.end(), [](int x)->bool {if (x > 0)return 1; else return 0; });
	return 0;
}