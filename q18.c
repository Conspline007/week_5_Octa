#include <stdio.h>

int main()
{
    int n,i,j,f=0;
    printf("Enter the value of n "); scanf ("%d",&n);

    int a[n],b[n],c[n];

    for (i=0;i<n;i++)
    {
        printf("Enter element no. %d ",i+1);
        scanf("%d",&a[i]);
    }

    
    
    return 0;
}