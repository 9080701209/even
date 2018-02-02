#include<stdio.h>
#include<conio.h>
int main()
{
 int i,c=0;   
    char a[50]="lingu mama love u mama";
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
    }
