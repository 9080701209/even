#include <stdio.h>
int main() 
{
	char s[10];
	int i,j,temp;
	scanf("%s",s);
	for(i=0,j=1;s[i]!='\0';i=i+2,j=j+2)
	{
	temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	}
	printf("%s",s);
	return 0;
}
