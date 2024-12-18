#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    printf("\n The sum of digit of n is %d",sum);
    return 0;
}
