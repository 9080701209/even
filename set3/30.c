#include<stdio.h>
#include<conio.h>
int main()
{
    int t1,t2,m1,m2,t,m;
    printf("enter the time1\n");
    scanf("%d",&t1);
    printf("enter the time2\n");
    scanf("%d",&t2);
    printf("enter the min1\n");
    scanf("%d",&m1);
     printf("enter the min2\n");
    scanf("%d",&m2);
    t=t1-t2;
    m=m1-m2;
    printf("%d %d",t,m);
    return 0;
}
