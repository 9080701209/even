#include<stdio.h>
#include<stdlib.h>
int main()
{
int time=0;
int minutes=0;
int hours=0;
time =130;
minutes=time%60;
hours=(time-minutes)/60;
printf("total minutes%d= %d time and %d minutes\n",time,minute,hours);
return 0;
}
