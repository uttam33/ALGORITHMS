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
		printf("%d \t", arr[i]);
	printf("\n");
}
int main()
{
    int arr_size,i;
	printf("please enter the size of array\n");
	scanf("%d",&arr_size);
	int arr[arr_size];
	printf("enter the %d elements of array\n",arr_size);
	for(i=0;i<arr_size;i++)
	{
	scanf("%d",&arr[i]);
	}
   printf("entered elements are:\n");
   for(i=0;i<arr_size;i++)
   {
       printf("%d \t",arr[i]);
   }
	bubbleSort(arr, arr_size);
	printf("\nSorted array: \n");
	printArray(arr, arr_size);
	return 0;
}
