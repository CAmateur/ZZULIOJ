#include<stdio.h>
typedef struct _time
{
	int hour;
	int minute;
	int second;

}time, *ptime;

int main()
{
	time FirstTime, TwoTime, DValue;
	scanf("%d:%d:%d", &FirstTime.hour, &FirstTime.minute, &FirstTime.second);
	scanf("%d:%d:%d", &TwoTime.hour, &TwoTime.minute, &TwoTime.second);
	DValue.hour = TwoTime.hour - FirstTime.hour;
	DValue.minute = TwoTime.minute - FirstTime.minute;
	DValue.second = TwoTime.second - FirstTime.second;
	printf("%d", DValue.hour * 60 * 60 + DValue.minute * 60 + DValue.second);
	return 0;
}