#include<stdio.h>
int main()
{
int l,t;
printf("enter the value of a and b\n");
scanf("%d%d",&l,&t);
l=l^t;
t=l^t;
l=t^l;
printf("%d %d",l,t);
return 0;
}
