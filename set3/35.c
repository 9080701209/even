include<stdio.h>
#include<conio.h>
int main()
{
 int i,c=0;   
    char a[50]="thahira is badgirl 123";
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
    }
