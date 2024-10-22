#include <stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter the number of elements to be inserted in the array ");
	scanf("%d",&n);
	int a[n],b[n],d[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}
//finding occurence
	for(i=0;i<n;i++)
	{
	    for (j=0;j<n;j++)
	    {
	         if (a[i]==a[j])
	    		{
	    			c++;
				}
		}
		b[i]=c;
		c=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
/*//printing output
     printf("The duplicate elements are : ");
     for(i=0;i<n;i++)
     {
     	if (b[i]>1)
		 [i]=a[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",d[i]);
	 }*/
	 return 0;
}
	

	
	
