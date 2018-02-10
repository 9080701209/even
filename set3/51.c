#include<stdio.h>
int main()
{
  int n,temp,f=1;

  printf("Enter a number: ");
  scanf("%d",&n);

  temp=n;
  while(temp)
  {
      temp=temp/10;
      f = f*10;
  }

  printf("Each digits of given number are: ");
  while(f>1)
  {
      f= f/10;
      printf("%d ",n/f);
      n = n % f;
  }

  return 0;
}
