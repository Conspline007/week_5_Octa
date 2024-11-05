#include <stdio.h>

int main()
{
	int n,i,j,t,s,x;
	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);
	int a[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}

    printf("Enter x : "); scanf("%d",&x);
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

    for (i=0;i<n;i++)
	{
		if (a[i]>=x)
        {
            printf("The ceiling of x is : %d \n",a[i]);
            break;
        }
        
	}

    for (i=0;i<n;i++)
	{
		if (a[i]>=x)
        {
            printf("The floor of x is : %d",a[i-1]);
            break;
        }
        
	}



	return 0;
}
