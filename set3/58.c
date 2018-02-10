#include<stdio.h>
int main()
{
int t,l,w;
printf("enter the value of a and b\n");
scanf("%d%d",&t,&l);
t=t^l;
l=t^l;
t=l^t;
printf("%d %d",t,l);
return 0;
}
