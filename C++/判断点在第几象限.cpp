#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	int inter[3];
	cin >> inter[0] >> inter[1];
	if (inter[0] > 0 && inter[1] > 0)
		cout << "1";
	else if (inter[0] > 0 && inter[1] < 0)
		cout << "4";
	else if (inter[0] < 0 && inter[1] > 0)
		cout << "2";
	else if (inter[0] < 0 && inter[1] < 0)
		cout << "3";
	return 0;
}