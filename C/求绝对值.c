#include<stdio.h>
int main()
{
	double Number;
	scanf("%lf", &Number);
	if (Number < 0)
		Number = -Number;
	printf("%0.2lf", Number);
}