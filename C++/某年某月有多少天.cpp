#include <iostream>
using namespace std;
int main()
{
	int num[2];
	cin >> num[0]>>num[1];
	if (num[1] == 1 || num[1] == 3 || num[1] == 5 || num[1] == 7 || num[1] == 8 || num[1] == 10 || num[1] == 12)
	{
		cout << "31";
	}
	else if ((num[0] % 4 == 0 && num[0] % 100 != 0 || num[0] % 400 == 0) && num[1] == 2)
		cout << "29";
	else if(num[1]==2&& (num[0] % 4 != 0 && num[0] % 100 == 0 || num[0] % 400 != 0))
	{
		cout << "28";
		
	}
	else if (num[1] == 4 || num[1] == 6 || num[1] == 9 || num[1] == 11)
		cout << "30";
	return 0;
}