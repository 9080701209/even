#include<stdio.h>

int main()
{
	int a,i;
	scanf("%d",&a);
	if(a==0)
	{
		printf("enter valid input ");
	}
	else if(a==1)
	{
		printf("1 is neither prime nor composite");
	}
	else
	{
		for(i=2;i<=a;i++)
		{
			if(a%i==0 && a!=i)
			{
				printf("not prime");
				break;
				
			}
			 if(a%i==0 && a==i)
			 {
			 	printf("prime");
			 }
		}
	}
	return 0;
	}
