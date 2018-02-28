#include<stdio.h>
int main()
{
    int l,b,h,v,sa;
    scanf("%d%d%d",&l,&b,&h);
    v=l*b*h;
    sa=2*l*b+2*b*h+2*h*l;
    printf("volume of cuboid is\n %d\n",v);
    printf("the surface area of cuboid is\n %d",sa);
    return 0;
}
