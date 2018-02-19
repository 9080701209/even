#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	scanf("%s",a);
	int n,i,j,flag=0;
	n=strlen(a);
	for(i=0,j=n-1;i<=n/2;i++,j--)
	{
		
		if(a[i]!=a[j])
		{
			printf("not a palindrome");
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	{
		printf("palindrome");
	}
		return 0;
}
