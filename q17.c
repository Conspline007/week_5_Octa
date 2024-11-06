#include <stdio.h>
int main() {
    int n,i,j,t;
    printf("Enter n : "); scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter element number %d : ",i+1); scanf("%d",&a[i]);
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
    int b[a[n-1]+1] ;
    int c[a[n-1]+1] ;

    for(i=0;i<a[n-1]+1;i++)
    {
        b[i]=0;
    }

    // since length of b array is larger than maximum element of a array, we can store frequencies in b array

    for (i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    //saving this array in another array for later use 
    for(i=0;i<a[n-1]+1;i++)
    {
        c[i]=b[i];
    }

    for (i=0;i<a[n-1]+2;i++)
    {
        if (b[a[i]] !=0)
        printf("The frequency of %d is %d \n", a[i],b[a[i]]);
        b[a[i]]=0;
        
    }    
    
    return 0;
}
