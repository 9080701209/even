#include <stdio.h>
#include<string.h>
int main()
{ 
    char a[100];
	int n,N,i,count=0;
	scanf("%s",a);
	scanf("%d",&N);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",a[i]);
	    count++;
	    if(N==count)
	    {
	        break;
	    }
	    
	}
	
}
