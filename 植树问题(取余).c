#include<stdio.h>
int main()
{
	int NumberOfTrees, NumberOfPerson, Inter, Remainder;
	while (scanf("%d%d", &NumberOfTrees, &NumberOfPerson))
	{
		if (NumberOfTrees > NumberOfPerson)
			break;
	}


	Inter = NumberOfTrees / NumberOfPerson;
	Remainder = NumberOfTrees % NumberOfPerson;
	
	printf("%d %d", Inter, Remainder);
}