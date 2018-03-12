#include <stdio.h>
int main() 
{
	int n,f,d,i,sum=0;
	printf("enter the first term\n");
	scanf("%d",&f);
	printf("enter the difference\n");
	scanf("%d",&d);
	printf("enter the no of terms\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+(f+i*d);
    }
    printf("%d",sum);
	return 0;
}
