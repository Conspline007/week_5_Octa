#include <stdio.h>

int main()
{
    int n,i,j,k,p;
    printf("Enter the value of n "); scanf ("%d",&n);
    int a[n+1];

    for (i=0;i<n;i++)
    {
        printf("Enter element no. %d ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to enter in the list : ");
    scanf("%d",&k);

    printf("Enter the position you want to enter the element in the list : ");
    scanf("%d",&p);

    for (i=n;i>=p-1;i--)
	{
		a[i]=a[i-1];
	}

    a[p-1]=k;

    for (i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}

    return 0;
}