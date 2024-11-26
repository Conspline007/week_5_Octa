#include <stdio.h>

int main()
{
	int n,i,j,t,s;
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
//Sum of elements
	for (i=0;i<n;i++)
	{
		s+=a[i];
	}
	s=(float)s;
	n=(float)n;
//Printing	
	
		printf("The minimum of this array is %d\n",a[0]);
		printf("The maximum of this array is %d\n",a[n-1]);
		printf("The average of this array is %f",s/n);
	return 0;
}

