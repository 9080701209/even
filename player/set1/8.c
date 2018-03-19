#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,m;
    scanf("%[^\n]s",a);
     m=strlen(a);
    if(a[0]>96&&a[0]<123)
    {
        a[0]-=32;
    }
    for(i=1;i<=m;i++)
    {
        if(a[i]==' ')
        {
            i++;
            if(a[i]>96&&a[i]<123)
            {
                a[i]-=32;
            }
        }
        else
        {
            if(a[i]>64&&a[i]<91)
            {
                a[i]+=32;
            }
        }
    }
    printf("%s",a);
    return 0;
}
