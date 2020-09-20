#include<iostream>
#include<vector>


using namespace std;
int main()
{
	vector<int> vec;
	int TIMES,temp=0;
	cin >> TIMES;
	for (int i = 0; i < TIMES; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	temp = 1;
	for (int vir : vec)
		if (vir % 2 != 0)
			temp *= vir;
	cout << temp;


	return 0;
}