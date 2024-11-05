#include <stdio.h>

int main()
{
    int n,i,j,t,k;
    printf("Enter the value of n "); scanf ("%d",&n);
    int a[n+1];
    for (i=0;i<n;i++)
    {
        printf("Enter element no. %d ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to enter in the sorted list : ");
    scanf("%d",&k);
    a[n]=k;
    
//Sorting	
	for (i=0;i<n+1;i++)
	{
		for(j=0;j<n+1-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
			    a[j]=a[j+1];
			    a[j+1]=t;
			}
		}
	}

    printf("The final ouput list is : ");

    for (i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	} 

    return 0;
}