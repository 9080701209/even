#include<stdio.h>
int main(void)
{
	int lt,i,a,b,c;
	printf("enter the number:");
	scanf("%d",&lt);
	for(i=1;i<=lt;i++)
	{
		a=pow(2,i);
		if(a>lt)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("%d",c);
	return 0;
}
