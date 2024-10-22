#include <stdio.h>

int main()
{
	int n,i,j,t;
	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);
	int a[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}
//Sorting
    for (j=0;j<n/2;j++)
	{
		t=a[j];
		a[j]=a[n-j-1];
		a[n-j-1]=t;
	}	
//printing
     for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
