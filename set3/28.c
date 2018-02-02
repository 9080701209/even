#include<stdio.h>
int main()
{
    int n,a[30],i;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",a[i],i);
    }
    return 0;
}
