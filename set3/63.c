#include<stdio.h>
#include<conio.h>
int main()
{
 int i,c=0;   
    char t[60]="happy hug day";
    for(i=0;t[i]!='\0';i++)
    {
        if(t[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
    return 0;
    }
