#include<stdio.h>
int main()
{
	int Number1, Number2;
	int ResultAdd, ResultSub, ResultMul, ResultDivide, ResultRemainder;
	scanf("%d%d", &Number1, &Number2);

	ResultAdd = Number1 + Number2;
	ResultSub = Number1 - Number2;
	ResultMul = Number1 * Number2;
	ResultDivide = Number1 / Number2;
	ResultRemainder = Number1 % Number2;
	printf("%d %d %d %d %d", ResultAdd, ResultSub, ResultMul, ResultDivide, ResultRemainder);

}