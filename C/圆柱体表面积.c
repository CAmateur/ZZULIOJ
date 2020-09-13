#define PI 3.14159
#include<stdio.h>
int main()
{
	double radius, heigh;
	scanf("%lf%lf", &radius, &heigh);
	printf("%0.2lf", radius*radius*PI * 2 + radius * 2 * PI*heigh);
}