#include <stdio.h>

int same_nature(int,int);

int main()
{
    int i,j,n;
    printf("Enter the value of n "); scanf ("%d",&n);

    for (i=0;i<n;i++)
    {
        for (j=0;j<i+1;j++)
        {
            if (same_nature(i,j))
            printf("%c ",65+i+j+(i*(i-1)/2));

            else
            printf("%c ",97+i+j+(i*(i-1)/2));
        }
        printf("\n");
    }

    return 0;
}

int same_nature(int a, int b)
{
    if ((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0))
    return 1;

    else
    return 0;
}



