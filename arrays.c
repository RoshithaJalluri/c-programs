#include <stdio.h>

int main()
{
    int a[10],n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter list of elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        printf("%d\t",a[i]);
    }
}
