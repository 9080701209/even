#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("%d",c);
    if(a==b)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
    }
