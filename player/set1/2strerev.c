#include<stdio.h>
#include<conio.h>
int main()
{
int n,f=1,i;
printf("enter any value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("factorial of a given no is %d",f);
return 0;
}
