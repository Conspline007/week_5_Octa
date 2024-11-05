#include <stdio.h>

int main()
{
    int n,i,j,f=0,k;
    printf("Enter the value of n "); scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter element no. %d ",i+1);
        scanf("%d",&a[i]);
    }

    int sum;
    printf("Enter the value of sum you want to find "); scanf ("%d",&sum);
    printf("The triplets are : \n");

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            for (k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==sum)
               {
                   printf(" (%d, %d, %d) \n",a[i],a[j],a[k]);
                   f=1;
               }

            }
            
            
        }
    }

    if (f==1)
    printf("True");
    else
    printf("False");
    return 0;
}