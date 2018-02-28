#include <stdio.h>
int main()
{
	char n[10];
	int a,i;
	scanf("%s",n);
	a=strlen(n);
	for(i=a-1;i>=0;i--)
	{
		printf("%c",n[i]);
	}
	
	return 0;
}
