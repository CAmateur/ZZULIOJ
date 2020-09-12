#define RATE 0.0225
#include<stdio.h>
#include<math.h>
int main()
{
	double year, capital;
	scanf("%lf%lf", &year, &capital);
	printf("%0.6lf", capital*pow(1+RATE,year));
	return 0;
}