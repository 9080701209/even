#include <stdio.h>

int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
