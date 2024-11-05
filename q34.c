#include <stdio.h>

int main()
{
	int n,i,j,suml=0,sumr=0,diff;

    while (1)
    {
        printf("Enter the number of elements to be inserted in the array ");
	    scanf("%d",&n);

        if (n%2!=0)
        printf("It must be an even sized array try again");

        else if (n%2==0)
        break;
    }
	
	int a[n];
//Getting input	
	for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}

    
    for (i=0;i<n/2;i++)
	{
		suml += a[i];
        sumr += a[n-i-1];        
	}

    diff=suml-sumr;
    if (diff>0)
    printf("The element to be added to right half is %d ",diff);

    else if (diff<0)
    printf("The element to be added to left half is %d ",(-1)*diff);

    else if (diff==0)
    printf("The array is already balanced ");

    return 0;
}
