#include <stdio.h>
int main()
{
	int n,i,c=0,k;
	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);
	int a[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the element whose occurence is to be found in the array ");
	scanf("%d",&k);
//finding occurence
	for(i=0;i<n;i++)
	{
	    if (a[i]==k)
	    c++;
	}
//printing output
     printf("The number of times %d appeared is %d",k,c);
     return 0;
}
	

	
	
