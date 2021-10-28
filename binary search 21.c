#include<stdio.h>
#include<conio.h>

int main()
{
	int n,x;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],i;
	printf("enter the array elements in ascending order\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
printf("enter the searching element\n");
scanf("%d",&x);
	int low=0,high=n,mid;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(x<a[mid])
		{
		high=mid-1;
	}
		else if(x>a[mid])
	{
		low=mid+1;

		}
		else

		return mid;
	}
	return (-1)?printf("element %d is not found",x)
	:printf("element %d is found at location %d",x,mid);
}
