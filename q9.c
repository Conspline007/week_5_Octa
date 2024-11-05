#include <stdio.h>

int main()
{
	int i,j,t,n;
	printf("Enter the value of N ");scanf("%d",&n);
	int a[n-1];

//Array intialisation
    printf("Enter all integers from 1 to N missing only one integer in between (not necessarily in order)\n");
    for (i=0;i<n-1;i++)
	{
		printf("Enter element no. %d ",i+1); scanf("%d",&a[i]);
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
    for (i=0;i<n-1;i++)
    printf("%d",a[i]);

	for(i=0;i<n-1;i++)
	{
		if (i!=(n-2))
		{
           if (a[i+1]!=a[i]+1)
	       printf("The missing element is %d",i+2);
		}
		
		else if (i=n-2 && a[i]==n-1)
		printf("The missing element is %d",n);
		
	}

	return 0;
}
