#include<stdio.h>
int main()
{
	int Number[3];
	int i;

	scanf("%d%d%d", &Number[0], &Number[1], &Number[2]);
	
	for (i = 0; i < 3; i++)
	{
		printf("%-9d%-9d%-9d\n", Number[i], Number[i]* Number[i], Number[i]* Number[i]* Number[i]);

	}
	return 0;
}