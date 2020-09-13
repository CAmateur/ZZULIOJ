#define PI 3.14159
#include<stdio.h>
int main()
{
	int radius;
	scanf("%d", &radius);
	printf("%0.2f %0.2f", ((float)(radius * 2))*PI, ((float)(radius*radius))*PI);
}