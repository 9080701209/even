#include <stdio.h>
#include<string.h>
int main()
{
	char a[100],e[100],o[100];
	int i=0,j=0,k=0,m;
	printf("\nEnter the string : ");
	scanf("%s",&a[i]);
while(a[i]!='\0')
{
    if(i%2==0)
    {
        e[j++]=a[i];
    }
    else
    {
        o[k++]=a[i];
    }
    i++;
}
printf("\nThe seperated string is %s %s.",e,o);
	return 0;
}
