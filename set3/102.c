#include <stdio.h>
int main()
 {
    
	int n,f=0,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
		if((n/i==2) && (n%i==0))
		{
			printf("%d",i);
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("%d",n);
	}
	return 0;
}
