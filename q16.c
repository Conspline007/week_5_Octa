#include <stdio.h>

int main()
{
    int n,i,j,f=0;
    printf("Enter the value of n "); scanf ("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        printf("Enter element no. %d ",i+1);
        scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++)
    {
        b[i]=a[i];
    }
 
    printf("Here is the duplicated array \n");

    for (i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}