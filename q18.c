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

    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
        b[i]=a[i];

        else if (a[i]%2!=0)
        c[i]=a[i];
    }
 
    printf("Here is the odd array \n");

    for (i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    
    printf("Here is the even array \n");

    for (i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}