#include <stdio.h>
#include<string.h>

int main() {
	int count=0,i,len,len1;
	char c1[30],c2[30];
	scanf("%s %s",&c1,&c2);
	len=strlen(c1);
	len1=strlen(c2);
	for(i=0;i<len;i++)
	{
		if(c1[i]==c2[i])
		{
			count++;
		}
	}
	if(count==len)
	{
		printf("%s\n",c1);
	}
	
	if(c1>c2)
	{
		printf("%s",c1);
	}
	else
{
	printf("%s",c2);
}
	

	return 0;
}
