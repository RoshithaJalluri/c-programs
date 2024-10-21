#include <stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float d,r1,r2;
    printf("enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("Roots are real & distinct");
        r1=(-b-sqrt(d))/(2*a);
        r2=(-b+sqrt(d))/(2*a);
        printf("r1=%f,r2=%f",r1,r2);
    }
    else if(d==0)
    {
        printf("Roots are equal");
        r1=r2=-b/(2*a);
        printf("r1=%f,r2=%f",r1,r2);
    }
    else
    {
        printf("Roots are imaginary");
    }
}
    
