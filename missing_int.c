#include <stdio.h>

int main()
{
	int i,j,t;
	int a[7]={5,3,4,1,2,7,8};
//Sorting	
	for (i=0;i<7;i++)
	{
		for(j=0;j<7-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
			    a[j]=a[j+1];
			    a[j+1]=t;
			}
		}
	}
	for(i=0;i<7;i++)
	{
		if (i!=6)
		if (a[i+1]!=a[i]+1)
	    printf("The missing element is %d",i+2);
	}

	return 0;
}
