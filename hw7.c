#include <stdio.h>

void swap(int*, int*);
void arr(int*);

int main(void)
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 7,8,9,10,11,12 };
	
	printf("arr1:");
	arr(arr1);
	printf("arr2:");
	arr(arr2);
	
	swap(arr1, arr2);
	printf("after swap\n");

	printf("arr1:");
	arr(arr1);
	printf("arr2:");
	arr(arr2);

	return 0;
}

void swap(int* one, int* two)
{
	for (int i = 0; i < 6; i++)
	{
		int temp = one[i];
		one[i] = two[i];
		two[i] = temp;
	}
}


void arr(int arr1[])
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}