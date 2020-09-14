#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	int inter;
	int num3, num2, num1;
	cin >> inter;
	num3 = inter / 100 % 10;
	num2 = inter / 10 % 10;
	num1 = inter % 10;
	
	if (inter == num1 * num1*num1 + num2 * num2*num2 + num3 * num3*num3)
		cout << "yes";
		else cout<<"no";


	return 0;
}