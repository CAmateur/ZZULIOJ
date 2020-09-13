#define TIMES 5
#include<stdio.h>
void main()
{
	char chr[TIMES];
	int i, n;
	for (i = 0; i < TIMES; i++)
	{
		scanf("%c", &chr[i]);
	}
	char temp;
	for (i = 0; i < (TIMES - 1); i++)
		for (n = 0; n < (TIMES - 1); n++)
			if (chr[n] < chr[n + 1])//此位置的小于号影响着从大到小排列还是从小到大排列
			{
				temp = chr[n];
				chr[n] = chr[n + 1];
				chr[n + 1] = temp;
			}

	//for (i = 0; i < TIMES; i++)
	//	printf("%c ", chr[i]);
	printf("%c ", chr[0]);
}