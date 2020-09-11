
#include<stdio.h>
int main()
{
	int NumHead, NumTail, NumSub;
	int Temp = 0;
	int n = 1;
	int Result = 0;

	scanf("%d%d%d", &NumHead, &NumTail, &NumSub);
	Temp = NumHead;
	while (1)
	{
		if (NumTail == Temp)
		{
			break;
		}
		Temp += NumSub;
		n++;
	}

	Result = (NumHead + NumTail) *n / 2;
	printf("%d", Result);

}