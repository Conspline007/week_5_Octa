#include <stdio.h>

int main()
{
	int n,i,j,t;
	
	while (1)
	{
	    printf("Enter the number of elements to be inserted in the array ");
	    scanf("%d",&n);
	    if (n%2!=0)
	    printf("Only even number of elements to be entered in this array\nTry again!\n");
	    else if(n%2==0)
	    break;
	}
	int a[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}
//Swapping	
	for(j=0;j<n;j+=2)
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
//printing
     for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
