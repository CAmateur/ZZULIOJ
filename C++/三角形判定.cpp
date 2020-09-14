#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	int inter[3];
	cin >> inter[0] >> inter[1] >> inter[2];
	if (((inter[0] + inter[1] > inter[2]) && (inter[0] - inter[1] < inter[2]))&&((inter[1] + inter[2] >= inter[0]) && (inter[1] - inter[2] <= inter[0]))&&((inter[0] + inter[2] >= inter[1]) && (inter[0] - inter[2] <= inter[1])))
		cout << "Yes";
	else cout << "No";
	return 0;
}