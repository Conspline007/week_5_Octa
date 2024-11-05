#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,j,m;
    long int dig1=0,dig2=0;

	printf("Enter the number of elements to be inserted in the 1st array ");
	scanf("%d",&n);
    printf("Enter the number of elements to be inserted in the 2nd array ");
	scanf("%d",&m);

	int a[n], b[m];

//Getting input	
	printf("Enter elements for 1st array\n");
    for (i=0;i<n;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&a[i]);
	}

    printf("Enter elements for 2nd array\n");
    for (i=0;i<m;i++)
	{
		printf("Enter the element no. %d ",i+1);
		scanf("%d",&b[i]);
	}
//...
    for (i=0;i<n;i++)
	{
		dig1 = dig1 *10 + a[i];
    }
    printf("%d \n",dig1);

    for (i=0;i<m;i++)
	{
		dig2 = dig2*10 + b[i];
    }
    printf("%d \n",dig2);

    printf("The sum of 2 numbers is %d ",dig1+dig2);

	return 0;
}
