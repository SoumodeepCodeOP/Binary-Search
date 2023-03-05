#include<stdio.h>
int main()
{
	int a[5], l=0,i, r=5,n,m;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched");
	scanf("%d",&n);
	while(l<r)
	{
		m=(l+r)/2;
		if(a[m]==n)
		{
			printf("%d is in %d position",n,m);
			return 0;
		}
		if(a[m]< m)
		{
			l=m+1;
		}
		else
		{
			r=m-1;
		}
	}
	
}
