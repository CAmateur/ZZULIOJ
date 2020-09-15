#include<stdio.h>
int main()
{
	int math, english, computer;
	scanf("%d%d%d", &math, &english, &computer);
	printf("%.2f", ((float)(math + english + computer)) / 3);

return 0;
}