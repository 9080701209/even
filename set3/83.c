#include <stdio.h>
int main() 
{	
   int a,b,i;
   int c;
   for(i=0;i<4;i++)
   {
       scanf("%d  %d",&a,&b);
       if(i%2==0)
       {
           printf("%d\n",a/b);
       }
       else
       {
           printf("%d\n",a%b);
       }
   }
return 0;
}
