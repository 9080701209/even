
#include <stdio.h>
#include<string.h>
int main()
{
    char s[5][5],c;
    int n,j,i,f=1,temp=0,l=0;
    printf("enter no of strings\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    l=strlen(s[0]);
    for(i=0;i<l;i++)
    {
        c=s[0][i];
        for(j=1;j<n;j++)
        {
           if((s[j][i]==c)&&(f==1))
           {
               f=1;
           }
           else
           {
               f=0;
               break;
           }
        }
        if(f==1)
        {
            printf("%c",c);
        }
        
    }

    return 0;
}
