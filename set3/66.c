#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("enter positive integer");
scanf("%d",&n);
for(i=2;i<+n/2;++i)
{
if(n%2==0)
{
flag=1;
break;
}
}
if(flag==2)
{
printf("&d is a prime",n);
}
else
{
printf("%d is not a prime",n);
}
return 0;
}
