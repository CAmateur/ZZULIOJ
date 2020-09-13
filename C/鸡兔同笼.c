#include<stdio.h>
int main()
{
	int head, feet;
	int chicken, rabbit;
	
	scanf("%d%d", &head, &feet);

	chicken = (4 * head - feet) / 2;
	rabbit = (feet - 2 * head) / 2;

	printf("%d %d", chicken, rabbit);



}