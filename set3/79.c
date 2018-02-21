 #include <stdio.h>

int main()
{
	int a,b,c,i,p,flag=0;
	scanf("%d %d",&a,&b);
	c=b*a;
	for(i=1;i<=c/2;i++)
	{
		p=i*i;
		if(p==c)
		{
			printf("yes");
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("no");
	return 0;
}
