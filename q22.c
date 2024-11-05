
#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter the value of number of rows "); scanf ("%d",&r);
    printf("Enter the value of number of columns "); scanf ("%d",&c);
    int a[r][c], b[r][c];

    printf("Enter the values for 1st matrix \n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter element with row no. %d and column no. %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Enter the values for 2nd matrix \n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter element with row no. %d and column no. %d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        
    }

    printf("Here is the addition matrix : - \n");

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j] + b[i][j]);
        }

        printf("\n");
        
    }

    printf("Here is the subtraction (1st - 2nd) matrix : - \n");

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j] - b[i][j]);
        }

        printf("\n");
        
    }


    return 0;
}