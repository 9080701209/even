#include <stdio.h>
void main()
{
    int num,  digit, sum;
 printf("Enter the number \n");
scanf("%d", &num);
while (num > 0
{
digit = num % 10;
  sum  = sum + digit;
   num /= 10;
    }
printf("Sum of the digits %d ",  sum);
}
