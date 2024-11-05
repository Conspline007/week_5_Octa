
#include <stdio.h>

int main()
{
    int n,i,j,prod=0;
    printf("Enter the order of the square matrix "); scanf ("%d",&n);
    int a[n][n], b[n][n], c[n][n];

    printf("Enter the values for 1st matrix \n\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter element with row no. %d and column no. %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Enter the values for 2nd matrix \n\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter element with row no. %d and column no. %d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        
    }

    printf("Here is the multiplication matrix : - \n");

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            prod+=a[i][j]*b[j][i];
        }
        c[i];
        
    }


    


    return 0;
}