#include <stdio.h>

int main()
{
	int n=5,sum=0,i;
    int a[n];
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	int avg=sum/5;
	printf("%d",avg);
		return 0;
}
