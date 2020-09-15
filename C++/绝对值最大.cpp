#include <iostream>
#include<math.h>
using namespace std;
#define TIMES 3 //要比较的数字个数
typedef struct _DATA
{
	char chr;
	int num;
}DATA, *PDATA;

int main()
{
	DATA data[TIMES], temp;


	for (int i = 0; i < TIMES; i++)
		cin >> data[i].num;

	for (int i = 0; i < TIMES; i++)
	{
		if (data[i].num < 0)
		{
			data[i].chr = '1';
			data[i].num = -data[i].num;
		}
		else data[i].chr = '0';
	}

	//冒泡排序
	for (int i = 0; i < TIMES; i++)
		for (int n = 0; n < TIMES; n++)
			if (data[n].num < data[n + 1].num&&n != (TIMES - 1))
			{
				temp = data[n + 1];
				data[n + 1] = data[n];
				data[n] = temp;
			}
	if (data[0].chr == '0')
		cout << data[0].num;
	else cout << -data[0].num;

	return 0;
}