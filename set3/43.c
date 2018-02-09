
#include <stdio.h>
int main(void) {
	char str1[20]="thahira";
	char str2[20]="gibbs";
	int i=0,j=0;
while(str1[i]!='\0')
	i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("%s",str1);
	return 0;
}
