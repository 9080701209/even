#include<stdio.h>
int main()
{
 int i,c=0,spl=0,c1=0;   
    char a[50]="thahirabanu123$%$";
for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
            c1++;
        else if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
            c++;
        else
            spl++;
    }
    printf("%d\n",spl);
    printf("%d\n",c);
    printf("%d\n",c1);
    return 0;
    
}
