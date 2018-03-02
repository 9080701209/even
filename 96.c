#include<stdio.h>
int main()
{
int a,i,flag=0;
printf("enter positive integer");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d is a prime",a);
}
else
{
printf("%d is composite",a);
}
return 0;
}
