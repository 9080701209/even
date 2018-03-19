#include <stdio.h>
#include<string.h>
int main() 
{
	char n[100];
    int a,i;
    scanf("%[^\t\n]s",n);
    a=strlen(n);
    n[0]=n[0]-32;
    for(i=0;i<a;i++)
    {
      if(n[i]==' ')
      {
          n[i+1]=n[i+1]-32;
      }
    }
    printf("%s",n);
}
