#include <stdio.h>
int main()
{
	int b;
	scanf("%d",&b);
	while(b!=0)
	{
		if(b%10==0)
	{
			printf("%d",b);
			break;
		}
		b++;
	}
	return 0;
}
