#include <stdio.h>
#include<conio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
    int n,i;
    printf("enter the size of array\n");
    scanf("%d",n);
	int arr[n];
	printf("enter %d  elements of array\n",n);
	for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("entered elements are:\n");
   for(i=0;i<n;i++)
   {
       printf("d",arr[i]);
   }
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
