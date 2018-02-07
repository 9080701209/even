#include <stdio.h>
  int main()
  {
    int a[10];
    int i,h;
    printf("Enter ten values");
    for (i = 0; i < 10; i++)
    {
    scanf("%d", &a[i]);
    }
        h= a[0];
    for (i = 0; i < 10; i++)
    {
if (a[i] > h) 
{
  h=a[i];
    }
    }
    printf("greatest of ten numbers is %d", h);
    return 0;
  }
