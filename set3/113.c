#include<stdio.h>
int main()
{
	int n,k,i,count=0;
	scanf("%d %d",&n,&k);
	int a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			
			count=count+1;
		
		}
		
	}
	printf("%d",count);
	return 0;
}
