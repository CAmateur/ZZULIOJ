#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num, temp;
	vector<int> vec;
	vector<int>::iterator it = vec.begin();
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(),vec.end());
	temp = vec.back();
	cout << temp;
	return 0;
}