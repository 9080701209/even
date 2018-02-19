#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int n,i,flag=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			printf("yes");
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("no");
	}
