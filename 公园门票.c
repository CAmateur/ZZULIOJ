#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num < 30)
		printf("%d", num * 50);
	else
		printf("%d", num * 48);
	return 0;
}