#include<stdio.h>
void main()
{
	char lchr;
	scanf("%c", &lchr);
	if (lchr >= 'a'&&lchr <= 'z')
		printf("%d", lchr - 96);
	if (lchr >= 'A'&&lchr <= 'Z')
		printf("%d", lchr - 64);
}