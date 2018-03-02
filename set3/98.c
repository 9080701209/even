#include<stdio.h>
int main()
{
int c,i;
scanf("%d",&c);
int a[c];
for(i=1;i<=c;i++)
{
    scanf("%d",&a[i]);

    if(a[i]!=i)
    {
         printf("%d\n",i);
}
}
return 0;
}
