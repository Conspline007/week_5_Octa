
#include <stdio.h>

int main()
{
    int r,c,i,j,f1=1,f2=1;
   
    
    while(1)
    {
        printf("Enter the value of number of rows "); scanf ("%d",&r);
        printf("Enter the value of number of columns "); scanf ("%d",&c);
        
        if (r!=c)
        printf("You rows and columns must be equal try again");

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
        for (j=0;j<c;j++)
        {
            if (i==j)
            {
                if (a[i][j]!=1)
                f1=0;
            }
            

            else if (i!=j && a[i][j]!=0)
            f2=0;

        }
    }

    if (f1==0 || f2==0)
    printf("It is not an identity matrix");

    else
    printf("It's an identity matrix");    

    return 0;
}