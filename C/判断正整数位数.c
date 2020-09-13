#include<stdio.h>
int main()
{
	int number;
	char buffer[100];
	memset(buffer, 0, 100);
	scanf("%d", &number);
	sprintf(buffer, "%d", number);
	printf("%d", strlen(buffer));
	return 0;
}