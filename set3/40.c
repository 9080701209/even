#include <stdio.h>

int main()
{
    int A, B, C, i, terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    A = 0;
    B = 1;
    C = 0;
printf("Fibonacci terms: \n");
for(i=1; i<=terms; i++)
    {
        printf("%d, ", C);
     A=B;
     B=C;
     C=B+A;
    }

    return 0;
}
