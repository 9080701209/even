#include<stdio.h>
int main()
{
int b,a,temp;
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d %d",a, b);
}
