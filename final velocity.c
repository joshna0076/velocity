#include<stdio.h>
#include<math.h>
void main()
{
    int v, u, a, s;
    printf("enter a value u,a,s");
    scanf("%d%d%d",&u,&a,&s);
    v=sqrt((u*u)+(2*a*s));
    printf("final velocity %d",v);
}
