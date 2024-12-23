#include<stdio.h>
void main()
{
    int i;
    printf("Numbers from 0 to 10:\n");
    for(i=0;i<=10;++i)
    {
       printf("\t %d",i);
    }
    printf("\nNumbers from 10 to 0:\n");
    for(i=10;i>=0;--i)
    {
        printf("\t%d",i);
    }
}
