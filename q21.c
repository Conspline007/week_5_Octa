
#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter the value of number of rows "); scanf ("%d",&r);
    printf("Enter the value of number of columns "); scanf ("%d",&c);
    int a[r][c];

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter element with row no. %d and column no. %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Here is the matrix : - \n");

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }

        printf("\n");
        
    }


    return 0;
}