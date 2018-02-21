#include <stdio.h>

int main()
{
	char a[25];
	int n,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		
		n=(int)(a[i]);
		if(n%2!=0)
		{
			printf("\n%c",a[i]);	
		}
	}
	return 0;
}
