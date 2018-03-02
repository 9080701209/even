int main()
{
	int i;
	char str1[100];
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(i==0 )
		{
			if(str1[i]>='a' && str1[i]<='z')
			{
				str1[i]=str1[i]-32;
				
			}
		}
	          if(str1[i]==' ')
		{
			++i;
			if(str1[i]>='a' && str1[i]<='z')
			{
				str1[i]=str1[i]-32;
			}
		}
	}
	printf("%s",str1);
	return 0;
}
