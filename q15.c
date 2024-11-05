#include <stdio.h>

int main()
{
    int n,i,c=0,j;
    printf("Enter the value of n "); scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter element no. %d ",i+1);
        scanf("%d",&a[i]);
    }
    

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[i]==a[j])
            {
                c++;
            }
        }
        if (c>n/2)
        {
            printf("The majority element is %d ",a[i]);
            break;
        }
        
        c=0;
    }

    
    return 0;
}