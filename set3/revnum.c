#include <stdio.h>

int main()
{
	int n,n1,rev=0;
	scanf("%d",&n);
	while(n!=0)
	{
	n1=n%10;
	rev=rev*10+n1;
	n=n/10;
	}
	printf("%d",rev);
	return 0;
}
