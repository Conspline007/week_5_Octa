
#include <stdio.h>

int main()
{
    int r,c,i,j,sum=0;
   
    
    while(1)
    {
        printf("Enter the value of number of rows "); scanf ("%d",&r);
        printf("Enter the value of number of columns "); scanf ("%d",&c);
        
        if (r!=c)
        printf("You rows and columns must be equal for diagonals to exist try again");

        else
        break;
    }
    
    int a[r][c];

    printf("Enter the values of the matrix \n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter element with row no. %d and column no. %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    for (i=0;i<r;i++)
    {
        sum+=a[i][r-i-1];
    }
    printf("Here is the sum of right diagonal of the matrix : %d \n",sum);


    return 0;
}