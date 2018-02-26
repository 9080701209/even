#include<stdio.h>
int main()
{
int k[10],o[10],d,n,i;
printf("\nEnter number of sets");
scanf("%d",&n);
printf("\nenter the clans present in kabali and his opponent");
for(i=0;i<n;i++)
{
scanf("%d %d",&k[i],&o[i]);  
}
for(i=0;i<n;i++)
{
  d=o[i]-k[i];
  printf("\n%d",d);
}
}
