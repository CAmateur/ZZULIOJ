#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	int inter;
	cin >> inter;
	if (inter % 4 == 0 && inter % 100 != 0 || inter % 400 == 0)
		cout << "Yes";
	else cout << "No";
	return 0;
}