#includestdio.h
#includestdlib.h

int main()
{
	int TIMES, i, result=0;
	int num = 0;
	scanf(%d, &TIMES);
	num = (int)malloc(sizeof(int)TIMES);
	if (num != 0)
		for (i = 0; i  TIMES; i++)
			scanf(%d, &num[i]);
	
	for (i = 0; i  TIMES; i++)
		result += num[i];
	printf(%d, result);
	free(num);
	return 0;
}