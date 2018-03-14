#include<stdio.h>
void main()
{
    int a[10],n,flag=0,K,i;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    if(a[i]==K)
    {
        flag=1;
    }
}
if(flag==1)
printf("yes");
else
printf("no");
}
