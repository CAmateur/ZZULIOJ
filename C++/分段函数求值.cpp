#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	if (num < -2)
		cout << 7 - (2 * num);
	else if (num >= -2 && num < 3)
//三目运算符，必须在整个式子前加小括号才能运输正确
		cout << 5 - (((3 * num + 2) > 0) ? (3 * num + 2) : (-1)*(3 * num + 2));
	else if (num >= 3)
		cout << 3 * num + 4;
	return 0;
}