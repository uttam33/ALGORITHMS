#include<stdio.h>
#include<conio.h>

int main()
{
	int a[]={2,7,9,11,20,25,27,50,51,60};
	int x,low=0,high=9,mid;
	x=25;
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
	return (-1);
}
