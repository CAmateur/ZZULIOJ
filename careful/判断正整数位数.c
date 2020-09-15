#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=0;
    while(a)
    {
        a=a/10;
        b=b+1;
    }
    printf("%d",b);
    return 0;
}