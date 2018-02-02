#include<stdio.h>
#include<conio.h>
int main()
{
 int i,c=0;   
    char a[50];
    printf("enter the lines\n");
    scanf("%d",&a[i]);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
           c=c+1;
        }
    }
    printf("%d",c+1);
    return 0;
    }
