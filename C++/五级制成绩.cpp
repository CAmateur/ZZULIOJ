#include <iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if (num>=90) {
		cout<<"A";
	}else if (num>=80&&num<=89) {
		cout<<"B";
	}else if (num>=70&&num<=79) {
		cout<<"C";
	}else if (num>=60&&num<=69) {
		cout<<"D";
	}else {
		cout<<"E";
	}
	
	return 0;
}