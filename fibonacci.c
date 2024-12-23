#include<stdio.h>
void main()
{
    int i,n,c;
    int a=0,b=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("a=%d,b=%d",a,b);
    for(i=1;i<n;++i)
    {
       c=a+b;
       printf("\n %d",c);
       a=b;
       b=c;
    }
}
