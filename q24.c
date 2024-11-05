
#include <stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter the value of number of rows "); scanf ("%d",&r);
    printf("Enter the value of number of columns "); scanf ("%d",&c);
    int a[r][c], b[r][c];

    printf("Enter the values of the matrix \n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter element with row no. %d and column no. %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Here is the transpose matrix : - \n");

    for (i=0;i<c;i++)
    {
        for (j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }

        printf("\n");
        
    }


    return 0;
}