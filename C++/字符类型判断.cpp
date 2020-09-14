#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	char chr;
	cin >> chr;
	if (chr >= 'a'&&chr  <= 'z')
		cout << "lower";
	else if (chr >= 'A'&&chr <= 'Z')
		cout << "upper";
	else if (chr >= '0'&&chr <= '9')
		cout << "digit";
	else cout << "other";
	return 0;
}