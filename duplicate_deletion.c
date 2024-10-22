#include <stdio.h>

int main()
{
	int n,i,j,t,s;
	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);
	int a[n],b[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}
//Sorting	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
			    a[j]=a[j+1];
			    a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			
		}
	}
	return 0;
}
