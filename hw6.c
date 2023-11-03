#include <stdio.h>

int main(void)
{
	int arr[5];
	//입력 배열
	int odd_num[5],even_num[5];
	//홀수 짝수
	int i, k,even=0,odd=0;

	for ( i = 5,k=0; i; i--,k++)
	{
		scanf_s("%d", &arr[k]);
	}
	while (--k>=0)
	{
		if (arr[k] % 2 == 0)
		{
			even_num[even] = arr[k];
			even++;
		}
		else
		//2로 나눴을 때 나머지가 0이 아니므로 홀수
		{

			odd_num[odd] = arr[k];
			odd++;
		}
	}
	printf("Odd numbers:");
	for (int j = odd-1; odd_num[j]>0; j--)
	{
		printf("%d ", odd_num[j]);
	}
	printf("\nEven numbers:");
	for (int j = even-1; even_num[j]>0; j--)
	{
		printf("%d ", even_num[j]);
	}
}