#include <stdio.h>

int main()
{
	int n,c=1;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		if(n!=0)
		{
			c=c+1;
		}
	}
	printf("%d",c);
	return 0;
}
