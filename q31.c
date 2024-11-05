#include <stdio.h>

int main()
{
	int n,i,j,k,f=1,sum=0;

	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);

	int a[n];

//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}

    printf("Enter k : ");scanf("%d",&k);

    int c;

    for (i=0;i<n;i++)
	{
        for (j=0;j<n;j++)
        {
            sum=a[i]+a[j];
            if (sum%k==0)
            break;
        }
    
	}

    if(f==0)
    printf("False");

    else if (f==1)
    printf("True");

    return 0;
}
