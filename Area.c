#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,Area;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the result is %f",Area);
}
