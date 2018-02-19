#include<stdio.h>
int main()
{
	int b,i;
	scanf("%d",&b);
	if(b==0)
	{
		printf("enter valid input ");
	}
	else if(b==1)
	{
		printf("1 is neither prime nor composite");
	}
	else
	{
		for(i=2;i<=b;i++)
		{
			if(b%i==0 && b!=i)
			{
				printf("not prime");
				break;
				
			}
			 if(b%i==0 && b==i)
			 {
			 	printf("prime");
			 }
		}
	}
	return 0;
	}
