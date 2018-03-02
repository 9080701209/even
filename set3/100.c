#include <stdio.h>
int main()
 {
	int n,a,p=1;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		p=p*a;
		n=n/10;
	}
	printf("%d",p);
	return 0;
}
