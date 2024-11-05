#include <stdio.h>

int main()
{
	int n,i,j,x,avg=0;

	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);

	int a[n],b[n];

//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}

    printf("Enter x : ");scanf("%d",&x);

    int c;

    for (i=0;i<n;i++)
	{
		avg=(a[i]+x)/2;

        c=0;

        for (j=0;j<n;j++)
        {
            if (a[j]==avg)
            c++;
        }
        b[i]=c;

	}

    for (i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
