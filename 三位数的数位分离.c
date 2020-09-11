#include<stdio.h>
int main()
{
	int Number;
	scanf("%d", &Number);
	printf("%d %d %d", Number % 10,Number / 10 % 10, Number / 100 % 10);
}