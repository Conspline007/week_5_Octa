#include <stdio.h>

int main()
{
	int n,i,j,sum=0,avg=0;
	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);
	int a[n],b[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}

    
    for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
        {
            sum += a[j];
        }
        printf("%d ",sum/(i+1));
        sum=0;
        
	}

    return 0;
}
