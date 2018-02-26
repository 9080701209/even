#include<stdio.h>
int main()
{
    float lenght,breadth,area;
    printf("enter the length and breadth\n");
    scanf("%f %f",&lenght,&breadth);
    area=lenght*breadth;
    printf("area of the farm is %.5f",area);
    return 0;
}
