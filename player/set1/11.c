#include <stdio.h>
int main()
{
    char a[20];
    printf("input\n");
    scanf("%s",a);
    if(a[0]=='s'||a[0]=='S')
    printf("yes");
    else
    printf("no");
	return 0;
}
