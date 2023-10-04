#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = 4; k > i; k--)
		//k가 i보다 큰 경우라면 공백문자 출력
		//만약 i가 3이라면 공백문자를 한 번만 출력한다.
		{
			printf(" ");
		}
		for (int j = i; j > 0; j--)
		//가운데를 기준으로 왼쪽에 i값만큼의 별을 출력한다.
		{
			printf("*");
		}
		printf("*");//가운데에 별 출력
		for (int j = i; j > 0; j--)
		//가운데를 기준으로 오른쪽에 i값만큼의 별을 출력한다.
		{
			printf("*");
		}
		for (int k = 4; k > i; k--)
			//k가 i보다 큰 경우라면 공백문자 출력
		{
			printf(" ");
		}
		printf("\n");
	}
}