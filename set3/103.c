#include <stdio.h>
#include<conio.h>

void main() 

{
	char s[50];
	int i=0,n;
	scanf("%[^\n]s",s);
	n=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(i==0)
			s[i]=toupper(s[i]);
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);
	}
	printf("\n%s",s);
}
