/*
소수 판별 프로그램
*/

#include <stdio.h>

int main(void)
{
	int a,num=2;
	printf("Please enter a number:");
	scanf_s("%d", &a);
	for (int i = 2; i < a; i++)
	{
		if (a % i)
		//a와 i를 나눴을 때 나머지가 0이 아닌 수가 나오면 참으로 판별하고 
		{
			num++;
			continue;
		}
		else//0이라면 소수가 아니라는 것이기에 반복문을 종료한다.
		{
			break;
		}
	}
	if (num == a)
	//num이 a랑 값이 같다면 나머지가 0이였던 적이 없기에 소수이다.
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
}