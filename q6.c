#include <stdio.h>

int main()
{
	int n,i,j,t,s,k;
	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);
	int a[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}
//getting k
     printf("Enter the value of k");
     scanf("%d",&k);
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


//printing
 

		printf("kth smallest element is %d \n",a[k-1]);
		printf("kth largest element is %d ",a[n-(k-1)-1]);
	return 0;
}
