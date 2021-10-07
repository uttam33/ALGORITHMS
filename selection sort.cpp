#include <stdio.h>
#include<conio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
        swap(&arr[min], &arr[i]);
    }
}
void print(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    
    int n ;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf(" please enter %d element\n");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    printf("UnSorted array is: \n");
    {
    	for(int i=0;i<n;i++)
    	printf("%d ",arr[i]);
    	printf("\n");
	}
    selectionSort(arr, n);
    printf("Sorted array is: \n");
    print(arr, n);
    return 0;
}
