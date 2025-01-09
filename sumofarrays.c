#include <stdio.h>

int main()
{
    int a[10],n,i,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        sum=sum+a[i];
    }
    printf("The sum of elements of array %d",sum);
    return 0;
}
