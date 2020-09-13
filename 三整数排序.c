#define TIMES 3
#include<stdio.h>
int main()
{
	int num[TIMES];
	int i, n;
	for (i = 0; i < TIMES; i++)
	{
		scanf("%d", &num[i]);
	}
	int temp;
	for (i = 0; i < (TIMES - 1); i++)
		for (n = 0; n < (TIMES - 1); n++)
			if (num[n] < num[n + 1])//此位置的小于号影响着从大到小排列还是从小到大排列
			{
				temp = num[n];
				num[n] = num[n + 1];
				num[n + 1] = temp;
			}

	for (i = 0; i < TIMES; i++)
		printf("%d ", num[i]);
	return 0;
}